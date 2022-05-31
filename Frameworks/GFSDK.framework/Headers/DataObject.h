//
//  DataObject.h
//  Picidae_Example
//
//  Created by Zhu on 2021/12/14.
//  Copyright © 2021 394570610@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    TYPE_AUTO = 0,
    TYPE_LOGIN,
    TYPE_INDEX,
    TYPE_ACTIVATE,
    TYPE_DRAW
} BUSSINESS_TYPE;
typedef enum
{
    DEV,
    PROD
}Host_TYPE;

NS_ASSUME_NONNULL_BEGIN

@interface DataObject : NSObject

// Should be left
@property (nonatomic, copy) NSString* account;

// Should be filled
@property (nonatomic, copy) NSString* appId;
@property (nonatomic, copy) NSString* appKey;
@property (nonatomic, copy) NSString* deviceId;
@property (nonatomic, copy) NSString* VERSION;
@property (nonatomic, copy) NSString* WEB_URL;
@property (nonatomic, copy) NSString* HTTPS_BASE_URL;
-(NSString*) get_web_url_page:(NSString*) page;
-(NSString*) get_http_base_page:(NSString*) page;
-(void)setHost:(Host_TYPE)serverType;
- (NSString*)getAccount;
- (void)setAccessToken:(NSString*)refreshToken;
- (void)setRefreshToken:(NSString*)accessToken;
- (NSString*)getAccessToken;
- (NSString*)getRefreshToken;

@end

NS_ASSUME_NONNULL_END
