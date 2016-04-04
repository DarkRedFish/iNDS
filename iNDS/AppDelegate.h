//
//  AppDelegate.h
//  iNDS
//
//  Created by iNDS on 6/9/13.
//  Copyright (c) 2014 iNDS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iNDSEmulatorViewController.h"

#import "iNDSGame.h"

// Embedding UnrarKit causes signing issues for the build store.
// To use it, you must uncomment this line and then link and
// embed UnrarKit.framework
#define UseRarKit

#define kBugUrl @"http://69.167.218.245:6768/iNDS/bugreport"
//#define kBugUrl @"http://www.williamlcobb.com/iNDS/bugreport"

@class SCLAlertView;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) iNDSGame *currentGame;
@property (strong, nonatomic) iNDSEmulatorViewController *currentEmulatorViewController;
@property (strong, nonatomic) NSURL *lastUrl;


+ (AppDelegate *)sharedInstance;

- (NSString *)cheatsDir;
- (NSString *)batteryDir;
- (NSString *)documentsPath;
- (NSString *)rootDocumentsPath;

- (void)showError:(NSString *)error;
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (void)startGame:(iNDSGame *)game withSavedState:(NSInteger)savedState;
- (void)startBackgroundProcesses;

-(BOOL)isSystemApplication;

@end