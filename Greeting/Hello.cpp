//
//  Hello.cpp
//  hola
//
//  Created by San on 2/16/16.
//  Copyright © 2016 Taosha. All rights reserved.
//

#include "Hello.hpp"
#include <stdio.h>

Hello::Hello(const char *name) {
    this->name = name;
}

Hello::~Hello() {
    delete name;
}

void Hello::greeting() {
    printf("Hi, %s!\n", name);
}