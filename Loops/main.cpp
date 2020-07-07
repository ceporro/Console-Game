#include <iostream>

using namespace std;

int main()
{
    int counter = 0;

    while(counter<10){
        counter++;
        cout<< counter<<endl;
    }

    bool isHappy = true;
    char input;

    do{
        cout<<":D"<<endl;
        cout<<"Are you happy?"<<endl;

        cin>>input;

        if(input =='N'){
            isHappy = false;
        }


    }while(isHappy);


    for(int i = 0; i <10; i++){
            if(i%2==0){
                cout<<i<<" is pair"<<endl;
            }else{cout<<i<<" is odd"<<endl;
            }
//        cout<<i<<endl;
    }

    return 0;
}
