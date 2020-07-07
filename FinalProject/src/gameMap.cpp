#include "gameMap.h"
#include "Player.h"
#include <iostream>
#include <fstream>

using namespace std;

gameMap::gameMap()
{
    PlayerCell = NULL;

    loadMap();

    //ctor
}

void gameMap::Draw()
{
    for(int i =0; i<15; i++){
        for(int j=0; j<10; j++){
            cout<< cells[i][j].id;
        }
        cout<<endl;
    }
}

void gameMap::setEnemyCell(int enemyX, int enemyY)
{
    EnemyCell = &cells[enemyY][enemyX];
    EnemyCell->id = '#';
}

int gameMap::setPlayerCell(int playerX, int playerY)
{
    if(cells[playerY][playerX].isBlocked()== false)
    {
        if(cells[playerY][playerX].id == '$')
        {

            if(floor == 2)
            {
                drawVictory();
                isGameOver = true;
            }
            else
            {
                cout<<"You passed this level"<<endl;
                floor++;
                loadMap();
                return 1;
            }

        }
        else
        {
            if(PlayerCell != NULL)
            {
                PlayerCell->id= 0;
            }
            PlayerCell = &cells[playerY][playerX];
            PlayerCell->id = '@';
            //cout<<PlayerCell<<endl;
            return 2;
        }
        //return true;
    }
    else
    {
        return 0;
    }
}

void gameMap::drawIntro()
{
    string line;

    ifstream myFile("intro.txt");

    if(myFile.is_open())
    {
        while(getline(myFile, line))
        {
            cout<<line<<endl;
        }
        cin>> line;
    }
    else{
        cout<<"FATAL ERROR: Intro file couldn't be loaded"<<endl;
    }
}

void gameMap::drawVictory()
{
    string line;

    ifstream myFile("victory.txt");

    if(myFile.is_open())
    {
        while(getline(myFile, line))
        {
            cout<<line<<endl;
        }
        cin>> line;
    }
    else{
        cout<<"FATAL ERROR: Vicory file couldn't be loaded"<<endl;
    }
}

void gameMap::loadMap()
{
    //ofstream fileCreated("map.txt");
    //if(fileCreated.is_open()){

    //} else{
    //    cout<<"FATAL ERROR: Map file couldn't be loaded"<<endl;
    //}

    string line;
    string nameFile;
    int row = 0;

    if(floor == 0)
    {
        //cout<<"First floor"<<endl;
        nameFile = "map.txt";
        //ifstream myFile("map.txt");
    }
    else if(floor == 1)
    {
        //cout<<"Second floor"<<endl;
        ifstream myFile("map1.txt");
        nameFile = "map1.txt";

    }
    else if(floor == 2)
    {
        //cout<<"Third floor"<<endl;
        ifstream myFile("map2.txt");
        nameFile = "map2.txt";

    }
    ifstream myFile(nameFile);
    //cout<<floor<<endl;

    if(myFile.is_open())
    {
        //cout<<"check1"<<endl;
        //cout<<PlayerCell<<endl;
        while(getline(myFile, line))
        {
            for(int j=0; j < line.length(); j++)
            {

                if(line[j] == '0'){
                    cells[row][j].id = 0;
                }
                else{
                    cells[row][j].id = line[j];
                }
            }
            //cout<< line <<endl;
            row++;
        }
        //cout<<"check2"<<endl;
        //myFile.close();
    } else{
        cout<<"FATAL ERROR: Map file couldn't be loaded"<<endl;
    }
}



