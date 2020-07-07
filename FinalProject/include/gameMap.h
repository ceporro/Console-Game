#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "mapCell.h"

class gameMap
{
    public:

        gameMap();

        mapCell* PlayerCell;
        mapCell cells[16][10];

        mapCell* EnemyCell;

        void drawIntro();
        void Draw();
        void drawVictory();

        void setEnemyCell(int enemyX, int enemyY);

        int setPlayerCell(int playerX, int playerY);

        bool isGameOver = false;

        int floor = 0;

    protected:

        void loadMap();

    private:
};

#endif // GAMEMAP_H
