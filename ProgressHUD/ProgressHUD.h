//
//  ProgressHUD.h
//  ProgressHUD
//
//  Created by Greg Przybyła on 18/09/2020.
//  Copyright © 2020 KZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//! Project version number for ProgressHUD.
FOUNDATION_EXPORT double ProgressHUDVersionNumber;

//! Project version string for ProgressHUD.
FOUNDATION_EXPORT const unsigned char ProgressHUDVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ProgressHUD/PublicHeader.h>

//-------------------------------------------------------------------------------------------------------------------------------------------------
@interface ProgressHUD : UIView
//-------------------------------------------------------------------------------------------------------------------------------------------------

#pragma mark - Display methods

+ (void)dismiss;

+ (void)show;
+ (void)show:(NSString *)status;
+ (void)show:(NSString *)status Interaction:(BOOL)interaction;

+ (void)showSuccess;
+ (void)showSuccess:(NSString *)status;
+ (void)showSuccess:(NSString *)status Interaction:(BOOL)interaction;

+ (void)showError;
+ (void)showError:(NSString *)status;
+ (void)showError:(NSString *)status Interaction:(BOOL)interaction;

#pragma mark - Property methods

+ (void)fontStatus:(UIFont *)font;
+ (void)colorStatus:(UIColor *)color;
+ (void)colorSpinner:(UIColor *)color;
+ (void)colorHUD:(UIColor *)color;
+ (void)colorBackground:(UIColor *)color;
+ (void)imageSuccess:(UIImage *)image;
+ (void)imageError:(UIImage *)image;

#pragma mark - Properties

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UIView *viewBackground;
@property (strong, nonatomic) UIToolbar *toolbarHUD;
@property (strong, nonatomic) UIActivityIndicatorView *spinner;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) UILabel *labelStatus;
@property (strong, nonatomic) NSTimer *timer;

@property (strong, nonatomic) UIFont *fontStatus;
@property (strong, nonatomic) UIColor *colorStatus;
@property (strong, nonatomic) UIColor *colorSpinner;
@property (strong, nonatomic) UIColor *colorHUD;
@property (strong, nonatomic) UIColor *colorBackground;
@property (strong, nonatomic) UIImage *imageSuccess;
@property (strong, nonatomic) UIImage *imageError;

@end
