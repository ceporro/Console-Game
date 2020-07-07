#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    //ctor
    x=1;
    y=1;
}

void Player::CallInput()
{
    char userInput = ' ';

    cin>> userInput;

    switch(userInput)
    {
    case 'w':
        lastY = y;
        y--;
        break;
    case 'a':
        lastX = x;
        x--;
        break;
    case 's':
        lastY = y;
        y++;
        break;
    case 'd':
        lastX = x;
        x++;
        break;
    }
    cout<<"The player is in: "<<x<<", "<<y<<endl;
}

void Player::resetToSafePos(){
    x = lastX;
    y = lastY;
}

void Player::resetToIni(){
    x = 1;
    y = 1;
}

//Player::~Player()
//{
    //dtor
//}
