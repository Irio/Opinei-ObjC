//
//  User.h
//  Opinei-ObjC
//
//  Created by Irio Irineu Musskopf Junior on 19/11/12.
//  Copyright (c) 2012 Irio Irineu Musskopf Junior. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

@property (readwrite) NSString *email;
@property (readwrite) NSString *token;
@property (readwrite) NSString *facebookUID;

@end
