//
//  IFMainViewController.h
//  iFeedback
//
//  Created by frank poncelet on 08/07/13.
//  Copyright (c) 2013 frank poncelet. All rights reserved.
//

#import "IFFlipsideViewController.h"

@interface IFMainViewController : UIViewController <IFFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
