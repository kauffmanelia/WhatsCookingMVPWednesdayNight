//
//  RecipeGenieViewController.h
//  MidtermStoryboard
//
//  Created by Elia Kauffman on 2014-11-04.
//  Copyright (c) 2014 Calvin Nisbet. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoursePickerViewController.h"

@class RecipeList;

@interface RecipeGenieViewController : UIViewController <ParentViewControllerDelegate>

@property (nonatomic, strong) NSArray * selectedIngredients;
@property (nonatomic, assign) enum Course course;
@property (nonatomic, strong) NSArray * bannedIngredients;
@property (nonatomic, strong) RecipeList * recipeList;
@property (weak, nonatomic) IBOutlet UISwitch *TimeLimitSwitch;

@end
