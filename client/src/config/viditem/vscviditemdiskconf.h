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
#ifndef __VSC_VID_ITEM_DISK_CONF_H__
#define __VSC_VID_ITEM_DISK_CONF_H__

#include "common/vscviditeminf.h"

class VSCVidItemDiskConf : public QObject,public VSCVidItemInf
{
Q_OBJECT
public:
	VSCVidItemDiskConf(VidStor cStor, ClientFactory &pFactory, QTreeWidgetItem *parent);
	~VSCVidItemDiskConf();
public:
	virtual astring GetId(){return m_cStor.strid();}
private:
	VidStor m_cStor;

};

#endif /* __VSC_VID_ITEM_DISK_CONF_H__ */
