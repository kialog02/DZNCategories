//
//  CLLocation+Coordinate.h
//  GeoFeed
//
//  Created by Ignacio on 4/18/13.
//  Copyright (c) 2013 DZEN. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#include <math.h>

static const double kDegreesToRadians = M_PI / 180.0;
static const double kRadiansToDegrees = 180.0 / M_PI;

@interface CLLocation (Coordinate)

typedef struct {
	CLLocationCoordinate2D bottomLeft;
	CLLocationCoordinate2D topRight;
} CLLocationCoordinateRect;

typedef enum CLLocationCoordinateRectPreset {
    CLLocationCoordinateRectPresetEmpty = 0,
    CLLocationCoordinateRectPresetWorld,
    CLLocationCoordinateRectPresetSanFransisco,
    CLLocationCoordinateRectPresetNewYork,
    CLLocationCoordinateRectPresetSantiago
} CLLocationCoordinateRectPreset;


/*
 * Return true if 'coord' is empty (that is, if it has zero values for latitude and longitude),
 * Return false otherwise. A null coordinate is defined to be empty.
 */
bool CLLocationCoordinateIsEmpty(CLLocationCoordinate2D coord);

/*
 *
 */
NSString *NSStringFromCLLocationCoordinate(CLLocationCoordinate2D coord);

/*
 * Return true if 'rect' is empty (that is, if it has zero values for topLeft and bottomRight coordinates),
 * Return false otherwise. A null rect is defined to be empty.
 */
bool CLLocationCoordinateRectIsEmpty(CLLocationCoordinateRect rect);

/*
 *
 */
NSString *NSStringFromCLLocationCoordinateRect(CLLocationCoordinateRect rect);

/*
 *
 */
CLLocationCoordinateRect CLLocationCoordinateRectMake(CLLocationCoordinate2D topLeft, CLLocationCoordinate2D bottomRight);

/*
 *
 */
CLLocationCoordinateRect CLLocationCoordinateRectWithPreset(CLLocationCoordinateRectPreset preset);

/*
 *
 */
CLLocationCoordinateRect CLLocationCoordinateRectFromCenter(CLLocationCoordinate2D center, CLLocationDistance radius);


@end