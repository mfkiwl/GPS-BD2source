/*
 * GPS_loc.h
 *
 *  Created on: 2013-12-23
 *      Author: whc
 */

#ifndef GPS_LOC_H_
#define GPS_LOC_H_

#include "GPS_fmt.h"
#include "iloc.h"

void GPS_get_satLoc(GPS_Bsc bsc,LDOUB tsnd,Sat_Loc *loc);

#endif /* GPS_LOC_H_ */
