#include <iostream>

using namespace std;

void printCuteMessage(){
    cout<<"You are incredible"<<endl;
    cout<<"      :D    "<<endl;
    cout<< "Today will be a great day"<<endl;
}

bool IsDead(int hp){
    if(hp<=0){
        return true;
    }
    else{
        return false;
    }
}

void Print(string message){
    cout<< message << endl;
}

int main()
{
    printCuteMessage();

    int life = 3;

     if(IsDead(life)){
        cout<<"Game Over"<<endl;
     }

     Print("Iee what happens bro");

    return 0;
}
