//
//  SPiDResponse.h
//  SPiDSDK
//
//  Created by Mikael Lindström on 9/19/12.
//  Copyright (c) 2012 Schibsted Payment. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Class description....
 */

@interface SPiDResponse : NSObject

/** Contains error if there was any, otherwise nil */
@property(strong, nonatomic) NSError *error;

/** Received JSON data converted to a dictionary */
@property(strong, nonatomic) NSDictionary *data;

/** Received JSON data as a raw string */
@property(strong, nonatomic) NSString *rawJSON;

/** Initializes the AccessToken from a dictionary

 @param dictionary
 @return SPiDAccessToken
 */
- (id)initWithJSONData:(NSData *)data;

@end