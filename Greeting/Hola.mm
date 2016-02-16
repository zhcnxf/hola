//
//  Hola.m
//  hola
//
//  Created by San on 2/16/16.
//  Copyright © 2016 Taosha. All rights reserved.
//

#import "Hola.h"
#include "Hello.hpp"

@interface Hola ()
@property Hello *hello;
@end

@implementation Hola

- (instancetype)init
{
    return [self initWithName:"There"];
}

- (instancetype)initWithName:(const char*) name
{
    self = [super init];
    if (self) {
        self.hello = new Hello(name);
    }
    return self;
}

- (void) greeting
{
    self.hello->greeting();
}
@end
