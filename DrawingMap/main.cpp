#include <iostream>
#include <fstream>

using namespace std;

void drawMap( int heroPosX, int heroPosY, char gameMap[5][10]){
    for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
           if(j == heroPosX && i==heroPosY){
              cout<<'H';
        } else{
            cout<< gameMap[i][j];
        }
        }
        cout<<' '<<endl;
    }
}

int main()
{

    ifstream myFileRead("heroPosition.txt");
    string line;

    int heroPosX;
    int heroPosY;
    int row = 0;

    if(myFileRead.is_open()){
        while(getline(myFileRead, line)){
            if(row==0){
                heroPosX = stoi(line);
                //cout<<"line x"<<line<<endl;
            }
            if(row==1){
                heroPosY = stoi(line);
                //cout<<"line y" <<line<<endl;
            }
            row++;
        }
    }
    else{
        cout<< "Can't open the file, the hero will start at the beginning" <<endl;
        heroPosX = 0;
        heroPosY = 0;
    }

    //cout<<"x="<<heroPosX<<endl;
    //cout<<"y="<<heroPosY<<endl;

    bool isGameOver = false;

    char input =' ';
    char gameMap[5][10] = {
        {'1', '1','1','1','1','1','1','1','1','1'},
        {'1', '1','1','1','1','1','1','1','1','1'},
        {'1', '1','1','1','1','1','1','1','1','1'},
        {'1', '1','1','1','1','1','1','1','1','1'},
        {'1', '1','1','1','1','1','1','1','1','1'}
    };
    drawMap(heroPosX, heroPosY, gameMap);

    while(!isGameOver){

        cin >> input;

            if(input == 'd'){
                if(heroPosX < 9){
                    heroPosX++;
                }
            } else if(input == 'a'){
                if(heroPosX>0){
                heroPosX--;
                }
            }else if(input == 'w'){
                if(heroPosY>0){
                heroPosY--;
                }
            } else if(input == 's'){
                if(heroPosY<4){
                heroPosY++;
                }
            }else if(input == 'p'){
                isGameOver = true;
            }

        drawMap(heroPosX, heroPosY, gameMap);
    }

    ofstream myFile("heroPosition.txt");

    if(myFile.is_open()){
        myFile << heroPosX<<endl;
        myFile << heroPosY<<endl;
    }

    myFile.close();

    return 0;
}
