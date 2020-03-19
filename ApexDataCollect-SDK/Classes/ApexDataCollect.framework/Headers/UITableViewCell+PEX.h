//
//  UITableViewCell+PEX.h
//  ChinapexAnalytics
//
//  Created by chinapex on 2018/3/23.
//  Copyright © 2018年 Gary Chi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (PEX)
@property (nonatomic, strong) NSIndexPath *pex_indexPath;
@property (nonatomic, strong) NSString *trackDataId; /**< 点击cell时将会携带上传的数据*/
@end
