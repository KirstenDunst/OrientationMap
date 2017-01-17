//
//  KCCalloutAnimationView.h
//  OrientationMap
//
//  Created by CSX on 2017/1/4.
//  Copyright © 2017年 宗盛商业. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "KCCalloutAnimation.h"

typedef void (^ReturnMark)(NSString *mark);

@interface KCCalloutAnnotationView : MKAnnotationView

@property (nonatomic ,strong) KCCalloutAnnotation  *annotation;

@property(copy,nonatomic)ReturnMark markAble;

#pragma mark 从缓存取出标注视图
+(instancetype)calloutViewWithMapView:(MKMapView *)mapView;


- (void)getReturnMark:(ReturnMark)mark;

@end
