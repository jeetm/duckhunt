//
//  duck.h
//  DuckHunt
//
//  Created by Jeet Mehta on 2013-04-19.
//  Copyright (c) 2013 Jeet Mehta. All rights reserved.
//

#ifndef __DuckHunt__duck__
#define __DuckHunt__duck__

#include <iostream>
#include <SDL/SDL.h>

class Duck
{
private:
    SDL_Rect dimensions;
    int velocityX;
    int velocityY;
    int currentFrame;
    bool killed;
    bool duckMissed;
    
public:
    Duck();
    bool handleEvents(int xCoodClick, int yCoordClick);
    void show();
    void showFallingAnimation();
    void fall();
};


#endif /* defined(__DuckHunt__duck__) */
