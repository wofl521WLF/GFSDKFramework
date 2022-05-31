//
//  GFEntry.h
//  GFSDK
//
//  Created by Zhu on 2021/12/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "DataObject.h"
#import "LoginResponse.h"
#import "LogoutResponse.h"
@protocol GFEntryDelegate
-(void)loginResponse:(LoginResponse*)loginResponse;
-(void)logoutResponse:(LogoutResponse*)logoutResponse;
-(void)gotServerList:(NSDictionary*)serverData;

@end

typedef void(^getServerListCallback)(NSDictionary* serversInfo);

@interface GFEntry : NSObject

@property(weak,nonatomic) id<GFEntryDelegate> delegate;
- (void)addMainButton;
- (void)setData:(DataObject*)initData ;
- (void)showWindowWithType:(BUSSINESS_TYPE)type data:(NSDictionary*)data;
- (void)cleanLoginData;
- (void)getGameServerListWithCallback:(getServerListCallback)callback;
- (void)login;
+ (DataObject*)getAppData;
@end
