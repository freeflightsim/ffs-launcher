/*****************************************************************************
 *      ____              ____    _       _   _                              *
 *     /# /_\_           |  _ \  (_)   __| | (_)   ___   _ __                *
 *    |  |/o\o\          | | | | | |  / _` | | |  / _ \ | '__|               *
 *    |  \\_/_/          | |_| | | | | (_| | | | |  __/ | |                  *
 *   / |_   |            |____/  |_|  \__,_| |_|  \___| |_|                  *
 *  |  ||\_ ~|                                                               *
 *  |  ||| \/                                                                *
 *  |  |||       Project : KFreeFlight : a KDE4 GUI frontend for FlightGear  *
 *  \//  |                                                                   *
 *   ||  |       Developper : Didier FABERT <didier.fabert@gmail.com>        *
 *   ||_  \      Date : 2009, April                                          *
 *   \_|  o|                                             ,__,                *
 *    \___/      Copyright (C) 2009 by didier fabert     (oo)____            *
 *     ||||__                                            (__)    )\          *
 *     (___)_)   File :                                     ||--|| *         *
 *                                                                           *
 *   This program is free software; you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation; either version 2 of the License, or       *
 *   (at your option) any later version.                                     *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *****************************************************************************/

#ifndef OPT_FLIGHTPLAN_H
#define OPT_FLIGHTPLAN_H

#include "ui_option_flightplan_base.h"
#include <opt_skeleton.h>

#include <QWidget>
#include <QButtonGroup>

/**
	@author Didier Fabert <didier.fabert@gmail.com>
*/

class KFFOpt_flightplan : public KFFOpt_skeleton
{
	Q_OBJECT

public:
	KFFOpt_flightplan( QWidget *parent = 0 );

	~KFFOpt_flightplan();
	
public slots:
	virtual void saveSettings();
	virtual void loadSettings();
	virtual bool getOptions( QStringList & );
	//virtual void setOutput( KFFWin_messages* );

private:
	Ui::opt_flightplan ui_widget;
	QButtonGroup* m_grp;
	QStringList m_waypoints;

signals:
	void queryFlightPlanWin();
	void queryAtlas();
};

#endif // OPT_FLIGHTPLAN_H
