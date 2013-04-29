//
//  ADManager.h
//  ADManager
//
//  Created by Jason Katzer on 4/28/13.
//  Copyright (c) 2013 Versa.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ADManager : NSObject <UIAlertViewDelegate>

@property (nonatomic, retain, readonly) NSDictionary* settings;
@property (nonatomic, retain, readonly) UIWindow *appWindow;
@property (nonatomic, retain, readonly) UIViewController *topViewController;

//the singleton
+ (ADManager *)adManager;

- (void)initializeNetworks;

- (void)showAdType:(NSString *)adType;
- (void)showAdType:(NSString *)adType forZone:(NSString *)zoneName;
- (void)showAdType:(NSString *)adType forAdNetworkNamed:(NSString *)networkName;
- (UIView*)adViewForAdType:(NSString*)adType forNetworkNamed:(NSString*)networkName;

- (void)preloadAdType:(NSString*)adType forAdNetworkNamed:(NSString*)networkName;

-(void)showAdForViewController:(UIViewController*)viewController;
- (void)displayAdWithSettings:(NSDictionary*)viewControllerAdSettings;

//TODO: implement
- (NSString *)versionStringForAdNetworkSingletonNamed:(NSString *)singletonClassName;
@end
