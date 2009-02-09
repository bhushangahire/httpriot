//
//  HTTPRiotRestModel.h
//  HTTPRiot
//
//  Created by Justin Palmer on 1/28/09.
//  Copyright 2009 Alternateidea. All rights reserved.
//

#import "HTTPRiotConstants.h"

@interface HTTPRiotRestModel : NSObject {

}

+ (NSURL *)baseURI;
+ (void)setBaseURI:(NSURL *)uri;
+ (NSDictionary *)headers;
+ (void)setHeaders:(NSDictionary *)hdrs;
+ (void)setFormat:(kHTTPRiotFormat)format;
+ (kHTTPRiotFormat)format;
+ (NSArray *)getWithPath:(NSString *)path options:(NSDictionary *)options;
@end
