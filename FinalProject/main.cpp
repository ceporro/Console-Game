#include <iostream>
#include "Player.h"
#include "mapCell.h"
#include "gameMap.h"
#include "Enemy.h"

using namespace std;

//Gamer class Player

int main()
{
    gameMap Map;

    Player Hero;

    Enemy Evil1;
    Enemy Evil2;
    Enemy Evil3;

    Map.drawIntro();
    Map.Draw();

    while(Map.isGameOver == false)
    {
        cout<<"Type the movement command 'w a s d'"<<endl;
        //Game loop
        Hero.CallInput();
        //Map.setPlayerCell(Hero.x, Hero.y);
        //Map.Draw();

        if(Map.floor == 0)
        {
            Evil1.x = 4;
            Evil1.y = 4;
        } else if (Map.floor == 1){
            Evil1.x = 2;
            Evil1.y = 8;

            Evil2.x = 2;
            Evil2.y = 8;
        } else if (Map.floor == 2){
            Evil1.x = 2;
            Evil1.y = 3;

            Evil2.x = 5;
            Evil2.y = 8;

            Evil3.x = 1;
            Evil3.y = 10;

        }

        Map.setEnemyCell(Evil1.x, Evil1.y);
        Map.setEnemyCell(Evil2.x, Evil2.y);
        Map.setEnemyCell(Evil3.x, Evil3.y);

        if((Hero.x == Evil1.x && Hero.y == Evil1.y) || (Hero.x == Evil2.x && Hero.y == Evil2.y) || (Hero.x == Evil3.x && Hero.y == Evil3.y))
        {
            Map.isGameOver = true;
            cout << " GAME OVER" <<endl;
            cout << "The evil # killed you HAHA" <<endl;
        }

        if(Map.setPlayerCell(Hero.x, Hero.y)==1)
        {
            cout<<"go to ini"<<endl;
            Hero.resetToIni();

            Map.Draw();
        }
        else if(Map.setPlayerCell(Hero.x, Hero.y)==0)
        {
            cout<<"You shall not pass"<<endl;
            Hero.resetToSafePos();
            Map.Draw();
        }
        else if(Map.setPlayerCell(Hero.x, Hero.y)==2)
        {
            //cout<<"ieee"<<endl;
            Map.Draw();
        }

    }

    return 0;
}
