#include <iostream>

using namespace std;

int main()
{
    string names[4] = {"Asterix", "Idiafix", "Obelix", "Panoramix"};

    for(int i=0; i<4; i++){
        cout<<names[i]<<endl;
    }
    cout<< " " <<endl;

    int index=0;
    while(index<4){
        cout<<names[index]<<endl;
        index++;
    }
    cout<< " " <<endl;

    int ids[3][5] =
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<5;j++){
            cout<<ids[i][j] <<" ";
        }
        cout<< " " <<endl;
    }

    return 0;
}
