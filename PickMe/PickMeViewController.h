//
//  PickMeViewController.h
//  PickMe
//
//  Created by Matt on 7/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface PickMeViewController : UIViewController <MKMapViewDelegate>
{
    MKMapView *mapView;
}

-(void)displayMap;

@end
