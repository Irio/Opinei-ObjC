//
//  Vote.h
//  Opinei-ObjC
//
//  Created by Irio Irineu Musskopf Junior on 20/11/12.
//  Copyright (c) 2012 Irio Irineu Musskopf Junior. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"
#import "Proposition.h"

@interface Vote : NSObject

@property (readwrite) User *user;
@property (readwrite) Proposition *proposition;
@property (readwrite) BOOL *response;

@end
