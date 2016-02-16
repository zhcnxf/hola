//
//  Hola.h
//  hola
//
//  Created by San on 2/16/16.
//  Copyright © 2016 Taosha. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Hola : NSObject
- (instancetype)init;
- (instancetype)initWithName:(const char*) name;
- (void)greeting;
@end
