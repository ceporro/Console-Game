#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile("gameData.txt");
    string playerName;

    if(myFile.is_open()){
        myFile << "EEE what happens"<<endl;
        cout << "Type your character name"<<endl;
        cin >> playerName;
        myFile<<playerName<<endl;

        for(int i = 0; i<10; i++){
            myFile<< 3*i +2 <<endl;
        }
    }

    myFile.close();


    ifstream myFileRead("gameData.txt");
    string line;
    string heroName ="";
    int row =0;

    if(myFileRead.is_open()){
        while(getline(myFileRead, line)){
            cout << line<<endl;
            row++;
            if(row == 2){
                heroName = line;
            }
        }
    }
    else{
        cout<< "Can't open the file" <<endl;
    }

    cout<<"Welcome to this adventure, "<<heroName<<"!"<<endl;

    return 0;
}
