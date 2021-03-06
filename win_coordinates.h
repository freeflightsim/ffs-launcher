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
 *     (___)_)   File : win_coordinate.h                    ||--|| *         *
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

#ifndef WIN_COORDINATES_H
#define WIN_COORDINATES_H

#include "ui_win_coordinates_base.h"

#include <QWidget>
#include <QButtonGroup>

/**
	@author
*/
class KFFCoordinates
{
public:
	KFFCoordinates();
	~KFFCoordinates();
	
	QString toString();
	void setCoordinates( double, double );
	
private:
	double m_longitude;
	double m_latitude;
};

class KFFWin_Coordinates : public QWidget
{
	Q_OBJECT

public:
	KFFWin_Coordinates( QWidget *parent = 0 );

	~KFFWin_Coordinates();

private:
	Ui::win_coordinates ui_widget;
	KFFCoordinates m_coordinates;
	QButtonGroup* m_longitudeGrp;
	QButtonGroup* m_latitudeGrp;

private slots:
	void getCoordinates();
	
signals:
	void queryCoordinates( QString );
};

#endif // WIN_COORDINATES_H
