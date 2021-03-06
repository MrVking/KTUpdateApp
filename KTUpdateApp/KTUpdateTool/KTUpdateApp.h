//
//  KTUpdateApp.h
//  KTUpdateApp
//  QQ：812144991
//  Email：Keen_Team@163.com
//  GitHub：https://github.com/KeenTeam1990/KTUpdateApp.git
//  Created by keenteam on 2017/12/6.
//  Copyright © 2017年 keenteam. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KTUpdateApp : NSObject

/**
 block回调
 
 @param currentVersion 当前版本号
 @param storeVersion 商店版本号
 @param openUrl 跳转到商店的地址
 @param isUpdate 是否为最新版本
 */

typedef void(^UpdateBlock)(NSString *currentVersion,NSString *storeVersion, NSString *openUrl,BOOL isUpdate);

/**
 一行代码实现检测app是否为最新版本。appId，bundelId，随便传一个 或者都传nil 即可实现检测。
 
 @param appId    项目APPID，10位数字，有值默认为APPID检测，可传nil
 @param bundelId 项目bundelId，有值默认为bundelId检测，可传nil
 @param block    检测结果block回调
 */
+(void)kt_updateWithAPPID:(NSString *)appId withBundleId:(NSString *)bundelId block:(UpdateBlock)block;


@end
