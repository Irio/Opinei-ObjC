//
//  RepresentativeResult.h
//  Opinei-ObjC
//
//  Created by Irio Irineu Musskopf Junior on 20/11/12.
//  Copyright (c) 2012 Irio Irineu Musskopf Junior. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Proposition.h"

@interface RepresentativeResult : NSObject

@property (readwrite) Proposition *proposition;
@property (readwrite) short *positive;
@property (readwrite) short *negative;

@end
