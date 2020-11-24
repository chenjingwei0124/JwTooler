//
//  JwHomeController.m
//  JwTooler
//
//  Created by 陈警卫 on 2020/11/24.
//

#import "JwHomeController.h"

@interface JwHomeController ()

@end

@implementation JwHomeController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    UIButton *btn = [UIButton buttonWithType:(UIButtonTypeContactAdd)];
    btn.center = self.view.center;
    [self.view addSubview:btn];
    
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
