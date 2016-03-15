#import <UIKit/UIKit.h>

@interface VENTouchLockPasscodeView : UIView

/**
 The logo on top of the passcode title.
 */
@property (strong, nonatomic) UIImage *logo;

/**
 The title string directly on top of the passcode characters.
 */
@property (strong, nonatomic) NSString *title;

/**
 The log out button shown only when fail twice
 */
@property (weak, nonatomic) IBOutlet UIButton *logOutButton;

/**
 An array of the passcode character subviews.
 */
@property (strong, nonatomic) NSArray *characters;

/**
 The color of the title text.
 */
@property (strong, nonatomic) UIColor *titleColor;

/**
 The color of the passcode characters.
 */
@property (strong, nonatomic) UIColor *characterColor;

/**
 Creates a passcode view controller with the given title and frame.
 */
- (instancetype)initWithTitle:(NSString *)title frame:(CGRect)frame;

/**
 Creates a passcode view controller with the given title and frame.
 */
- (instancetype)initWithTitle:(NSString *)title frame:(CGRect)frame titleColor:(UIColor *)titleColor characterColor:(UIColor *)characterColor;

/**
 Shakes the reciever and vibrates the device.
 @param completionBlock called after shake and vibrate complete
 */
- (void)shakeAndVibrateCompletion:(void (^)())completionBlock;

- (void)keepImageAspectRatio;

@end
