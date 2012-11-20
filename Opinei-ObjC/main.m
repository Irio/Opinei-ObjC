//
//  main.m
//  Opinei-ObjC
//
//  Created by Irio Irineu Musskopf Junior on 19/11/12.
//  Copyright (c) 2012 Irio Irineu Musskopf Junior. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Representative.h"
#import "Proposition.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        Representative *representative1 = [[Representative alloc] init];
        [representative1 setName:@"Abelardo Camarinha"];
        Representative *representative2 = [[Representative alloc] init];
        [representative2 setName:@"Acelino Popó"];
        Representative *representative3 = [[Representative alloc] init];
        [representative3 setName:@"Alceu Moreira"];
        
        Proposition *proposition = [[Proposition alloc] init];
        [proposition setRepresentatives: [NSArray arrayWithObjects:representative1, representative2, representative3, nil]];
        
        // Showing all representatives
        NSLog(@"%@", [[[proposition representatives] objectAtIndex:0] name]);
        NSLog(@"%@", [[[proposition representatives] objectAtIndex:1] name]);
        NSLog(@"%@", [[[proposition representatives] objectAtIndex:2] name]);
        
    }
    return 0;
}

