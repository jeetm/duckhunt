//
//  dog.h
//  DuckHunt
//
//  Created by Jeet Mehta on 2013-04-19.
//  Copyright (c) 2013 Jeet Mehta. All rights reserved.
//
#include <iostream>
#include <SDL/SDL.h>

#ifndef DuckHunt_dog_h
#define DuckHunt_dog_h

class Dog
{
private:
    int offset;
    int velocity;
    int currentFrame;
    
public:
    Dog();
    void move();
    void showOpeningAnimation();
    void moveAhead();
    void sniff();
    void jumpIntoField();
};

#endif