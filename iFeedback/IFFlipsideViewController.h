//
//  IFFlipsideViewController.h
//  iFeedback
//
//  Created by frank poncelet on 08/07/13.
//  Copyright (c) 2013 frank poncelet. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IFFlipsideViewController;

@protocol IFFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(IFFlipsideViewController *)controller;
@end

@interface IFFlipsideViewController : UIViewController

@property (weak, nonatomic) id <IFFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
