/*
 * Copyright (c) 2017-2018 Heimdall
 *
 * The computer program contained herein contains proprietary
 * information which is the property of Heimdall.
 * The program may be used and/or copied only with the written
 * permission of Heimdall or in accordance with the
 * terms and conditions stipulated in the agreement/contract under
 * which the programs have been supplied.
 */
#include "vscexport.h"
#include "debug.hpp"
#include "vscloading.hpp"
#include <QDesktopWidget>
#include "vvidpbcontrol.h"


VSCExport::VSCExport(astring strStor, astring strId, astring strCamName, 
      u32 startTime, QWidget *parent)
    : QDialog(parent), m_startTime(startTime), 
    m_strId(strId), m_strStor(strStor), m_strCamName(strCamName)
{
	ui.setupUi(this);
	QDateTime time1, time2;
	time1.setTime_t(startTime);
	time2.setTime_t(startTime + 30 * 60);

	m_endMax.setTime_t(startTime + 60 * 60);
	m_endMin.setTime_t(startTime + 60);

	ui.startTime->setDateTime(time1);
	ui.endTime->setDateTime(time2);

	ui.endTime->setMinimumDateTime(m_endMin);
	ui.endTime->setMaximumDateTime(m_endMax);

	connect(ui.pbStart, SIGNAL(clicked()), this, SLOT(StartClicked()));
	connect(ui.startTime, SIGNAL(dateTimeChanged(QDateTime)), this, 
					SLOT(StartDateTimeChanged(QDateTime)));
	//connect(ui.pbCancel, SIGNAL(clicked()), this, SLOT(CancelClicked()));
#ifdef WIN32
	setWindowFlags(Qt::FramelessWindowHint|Qt::NoDropShadowWindowHint| Qt::Tool);
#else
	setWindowFlags(Qt::FramelessWindowHint|Qt::NoDropShadowWindowHint| Qt::ToolTip);
#endif
	//setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);

}

bool VSCExport::SetStartTime(u32 startTime)
{
	QDateTime time1, time2;
	time1.setTime_t(startTime);
	time2.setTime_t(startTime + 30 * 60);

	ui.startTime->setDateTime(time1);
	ui.endTime->setDateTime(time2);

	return true;
}

bool VSCExport::SetDelegate(VVidPBDelegate *pDelegate)
{
	XGuard guard(m_cMutex);
	m_pDelegate = pDelegate;
	return true;
}

void VSCExport::StartDateTimeChanged(const QDateTime &dateTime)
{
	m_endMax.setTime_t(dateTime.toTime_t() + 60 * 60);
	m_endMin.setTime_t(dateTime.toTime_t() + 60);

	ui.endTime->setMinimumDateTime(m_endMin);
	ui.endTime->setMaximumDateTime(m_endMax);
}

void VSCExport::StartClicked()
{
	XGuard guard(m_cMutex);
	u32 nPlaytime = ui.startTime->dateTime().toTime_t();
	u32 nEndTime = ui.endTime->dateTime().toTime_t();

	if (m_pDelegate)
	{
		VTaskItem * pTask = m_pDelegate->CreateExportTask(nPlaytime, nEndTime);
		VTaskMgr::AddTask(pTask);
	}

	VSCLoading *loading = new VSCLoading(NULL);
	loading->show();
	QDesktopWidget *desktop = QApplication::desktop();
	QRect rect = desktop->screenGeometry(0);
	loading->setGeometry(rect.width()/2, rect.height()/2, 64, 64);

	for (int i = 0; i < 10; i ++)
	{
		QCoreApplication::processEvents();
		ve_sleep(100);
	}

	delete loading;
	
}
void VSCExport::CancelClicked()
{
	//m_Type = VSC_IPCGROUP_CONF_CANCEL;
}
void VSCExport::mousePressEvent(QMouseEvent *event)  
{  
    if (event->button() == Qt::LeftButton) {  
        m_Drag = true;  
        m_DragPosition = event->globalPos() - this->pos();  
        event->accept();  
    }  
}  
  
void VSCExport::mouseMoveEvent(QMouseEvent *event)  
{  
    if (m_Drag && (event->buttons() && Qt::LeftButton)) {  
        move(event->globalPos() - m_DragPosition);  
        event->accept();  
    }  
}  
  
void VSCExport::mouseReleaseEvent(QMouseEvent *)  
{  
    m_Drag = false;  
} 



