//
//  ViewController.h
//  GCD-Timer
//
//  Created by 王璐 on 2023/8/3.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) dispatch_source_t timer;
@property (copy, nonatomic) NSString *task;

@end

