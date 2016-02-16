//
//  Hello.hpp
//  hola
//
//  Created by San on 2/16/16.
//  Copyright © 2016 Taosha. All rights reserved.
//

#ifndef Hello_hpp
#define Hello_hpp

class Hello {
private:
    const char *name;
    
public:
    Hello(const char *name);
    ~Hello();
    void greeting();
};

#endif /* Hello_hpp */
