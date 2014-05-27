/*
 * Copyright 2014 Marco Abundo, Ysiad Ferreiras, Aaron Bannert, Jeremy Canfield and Michelle Koeth
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

@import MapKit;
#import "SnapRetailer.h"
#import "RequestController.h"

@protocol MapViewControllerDelegate;

/*!
 @class MapViewController
 @abstract
 Presents SNAP retailers in a map view
 */
@interface MapViewController : UIViewController <UISplitViewControllerDelegate,
                                                 UISearchBarDelegate,
                                                 MKMapViewDelegate,
                                                 UIGestureRecognizerDelegate,
                                                 UIAlertViewDelegate,
                                                 RequestControllerDelegate>

@property (nonatomic, weak) id<MapViewControllerDelegate> delegate;

- (void)didSelectRetailer:(SnapRetailer *)retailer;

@end

// A delegate implements this protocol to be notified when the map is finished loading.
@protocol MapViewControllerDelegate <NSObject>
- (void)annotationsDidLoad:(NSArray *)retailers;
@end
