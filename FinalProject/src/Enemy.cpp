#include "Enemy.h"
#include <iostream>

Enemy::Enemy()
{
    x = 4;
    y = 4;
}

void Enemy::moveHorizontal(){

    int number = rand();

    if(number>0.5)
        x = x + 1;
    else{
        x = x - 1;
    }
}

 void Enemy::moveVertical(){

    int number = rand();

    if(number>0.5)
        y = y + 1;
    else{
        y = y - 1;
    };
}



