//
//  Proposition.h
//  Opinei-ObjC
//
//  Created by Irio Irineu Musskopf Junior on 19/11/12.
//  Copyright (c) 2012 Irio Irineu Musskopf Junior. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Proposition : NSObject

@property (readwrite) NSString *title;
@property (readwrite) NSString *summary;
@property (readwrite) NSString *completePropositionLink;
@property (readwrite) NSDate *startDate;
@property (readwrite) NSDate *endDate;
@property (readwrite) NSArray *representatives;

@end
