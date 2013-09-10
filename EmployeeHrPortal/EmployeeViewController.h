//
//  EmployeeViewController.h
//  EmployeePortal
//
//  Created by GMSIndia1 on 7/25/13.
//  Copyright (c) 2013 GMSIndia1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "CKCalendarView.h"
#import "previousemp.h"

#import "CourseDrugViewController.h"
@interface EmployeeViewController : UIViewController
{
    BOOL recordResults;
    NSInteger identifr;
    NSInteger webtype;
    
}
@property(strong,nonatomic)NSString *jobsiteid;
@property(strong,nonatomic)NSString *craftid;

@property(strong,nonatomic)IBOutlet UIScrollView *scroll;
@property(strong,nonatomic)IBOutlet UITableView *prevousEmpTable;
- (IBAction)SavePreviousemployee:(id)sender;
- (IBAction)selectdate:(id)sender;
-(IBAction)deletepreviousemp:(id)sender;
@property(readwrite)NSInteger Applicantid;
@property(readwrite)NSInteger previousid;
@property(strong,nonatomic)NSXMLParser *xmlParser;
@property(strong,nonatomic)NSMutableString *soapResults;
@property(strong,nonatomic)NSMutableData *webData;
@property(nonatomic, weak) CKCalendarView *calendar;
@property(nonatomic, strong) NSDateFormatter *dateFormatter;
@property(strong,nonatomic)UIPopoverController *popOverController1;
@property(strong,nonatomic)IBOutlet UIButton *datebtn;
@property (strong, nonatomic) IBOutlet UITextField *previouscompanytxt;
@property (strong, nonatomic) IBOutlet UITextField *rateofpaytxt;
@property (strong, nonatomic) IBOutlet UITextField *positionheldtxt;
@property (strong, nonatomic) IBOutlet UITextField *reasonforleavingtxt;
@property(strong,nonatomic)IBOutlet UIImageView *imgvw;
@property(strong,nonatomic)NSMutableArray *previousemployeeArray;
@property(strong,nonatomic)previousemp *previous;
@property(strong,nonatomic)IBOutlet UITableViewCell *previouscell;
@property(strong,nonatomic)CourseDrugViewController*coursedrugVCtrl;
//labels
@property(strong,nonatomic)IBOutlet UILabel *companynamelabel;
@property(strong,nonatomic)IBOutlet UILabel *datelabel;
@property(strong,nonatomic)IBOutlet UILabel *rateofpaylabel;
@property(strong,nonatomic)IBOutlet UILabel *positionlabel;
@property(strong,nonatomic)IBOutlet UILabel *reasonforleavinglabel;

@property(strong,nonatomic)IBOutlet UIButton *deletebtn;
-(IBAction)continueaction:(id)sender;
//iphone


@property(strong,nonatomic)IBOutlet UIScrollView *scroll_iphone;
@property(strong,nonatomic)IBOutlet UITableView *previousemptable_iphone;
@end
