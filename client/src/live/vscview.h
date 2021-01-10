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
#ifndef VSCVIEW_H
#define VSCVIEW_H

#include <QWidget>
#include <QString>
#include "ui_vscview.h"
#include "utility.hpp"
#include "debug.hpp"
#include "vscvwidget.h"
#include "vscvideowall.h"
#include "QTabWidget"
//#include "vscplaycontrol.h"

class VSCView : public QWidget, public VVidGetHWDec
{
    Q_OBJECT

public:
    VSCView(ClientFactory &pFactory, QWidget *parent, QTabWidget &pTabbed, 
		QString strName, bool bMainView = false);
    ~VSCView();
public:
    void mouseDoubleClickEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *);
    void createContentMenu();
    bool event(QEvent *e);
public:
    void SetupConnections();
    virtual bool GetHWDec();
	
public slots:
	void floatingClicked();
	void ViewClicked();
	void TabbedClicked();
	void ControlPanelClicked();
	void ShowDisplayClicked(int nId);
	void ShowFocusClicked(int nId);
	void ShowPlayControl();
	void ShowLayout1Clicked(int nId);
	void ShowViewClicked(std::string strView);
	void UpdateVideoControl();
	void PlaybackClicked(std::string strStor, std::string strId, std::string strName);
	void MotionDetectClicked(std::string strStor, std::string strId, std::string strName);


	void SetLayoutMode4x4()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/4x4.png")));
		SlotUpdateMainView();
	}
	void SetLayoutMode3x3()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/3x3.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode2x2()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/2x2.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode6()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/6.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode12p1()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/12+1.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode1()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/1x1.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode5x5()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/5x5.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode6x6()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/6x6.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode8x8()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/8x8.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode1x3()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/1x3.png")));
	 	SlotUpdateMainView();
	}
	void SetLayoutMode1p6()
	{
	    m_pTabbed.setTabIcon(m_pTabbed.indexOf(this), 
		QIcon(tr(":/view/resources/1p6.png")));
	 	SlotUpdateMainView();
	}
	void DeviceEvent(int deviceId, int type)
	{
		m_pVideo->DeviceEvent(deviceId, (VscEventType)type);
	}

	void TourStop();
	void TourStart();
	void TourInit();
	void TourTimerFunction();

	void CameraDoubleClicked(std::string strStor, std::string strCam, std::string strCamName);
	void SlotUpdateMainView();
	
public:
	Ui::VSCView ui;
private:
	QWidget *m_pParent;
	QAction *m_pFloating;
	QAction *m_pUnFloating;
	BOOL m_bFloated;
	int m_currentFocus;
	VSCVideoWall * m_pVideo;
	//VSCPlayControl * m_pPlayControl;
	BOOL m_bPlayControl;
	QTabWidget &m_pTabbed;

	/* Control Panel  */
	BOOL m_bControlEnable;
	QString m_strName;
	VidView m_ViewItem;
	s32 m_lastHoverTime;
	QTimer *m_Timer;

	/* Video Tour */
	QTimer *m_TimerTour;
	s32 m_TourInterval;
	VidTour m_pTourConf;
	VidViewList m_ViewList;
	s32 m_TourIdx;

	ClientFactory &m_pFactory;
	bool m_bMainView;
    
};

#endif // VSCVIEW_H
