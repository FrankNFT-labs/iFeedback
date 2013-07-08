//
//  IFFlipsideViewController.m
//  iFeedback
//
//  Created by frank poncelet on 08/07/13.
//  Copyright (c) 2013 frank poncelet. All rights reserved.
//

#import "IFFlipsideViewController.h"

@interface IFFlipsideViewController ()

@end

@implementation IFFlipsideViewController

- (void)awakeFromNib
{
    self.contentSizeForViewInPopover = CGSizeMake(320.0, 480.0);
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
