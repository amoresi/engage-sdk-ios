//
//  EngageClient.h
//  EngageSDK
//
//  Created by Musa Siddeeq on 7/25/13.
//  Copyright (c) 2013 Silverpop. All rights reserved.
//

#import "AFOAuth2Client.h"

typedef enum {
    EngagePilot,
    EngagePilotSecure,
    EngageLiveSecure,
} EngageHostConfig;

@interface EngageClient : AFOAuth2Client

- (id)initWithHost:(NSString *)host
          clientId:(NSString *)clientId
            secret:(NSString *)secret
             token:(NSString *)refreshToken;

- (void)connectSuccess:(void (^)(AFOAuthCredential *credential))success
               failure:(void (^)(NSError *error))failure;

@property AFOAuthCredential *credential;

@end
