#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Hello ceporro!" << endl;
cout << "              /                            )" << endl;
cout << "          (                             |\ " << endl;
cout << "     /|                              \\ " << endl;
cout << "       //                                \\" << endl;
cout << "      ///                                 \|" << endl;
cout << "      /( \                                  )\ " << endl;
cout << "      \\  \_                               //)" << endl;
cout << "       \\  :\__                           ///" << endl;
cout << "       \\     )                         // \ " << endl;
cout << "     \\:  /                         // |/" << endl;
cout << "     \\ / \                       //  \ " << endl;
cout << "      /)   \   ___..-'           (|  \_|" << endl;
cout << "         //     /   _.'              \ \  \ " << endl;
cout << "        /|       \ \________          \ | /" << endl;
cout << "       (| _ _  __/          '-.       ) /.'" << endl;
cout << "       \\ .  '-.__            \_    / / \ " << endl;
cout << "        \\_'.     > --._ '.     \  / / /" << endl;
cout << "          \ \      \     \  \     .' /.'" << endl;
cout << "           \ \  '._ /     \ )    / .' |" << endl;
cout << "             \ \_     \_   |    .'_/ __/" << endl;
cout << "             \  \      \_ |   / /  _/ \_" << endl;
cout << "            \  \       / _.' /  /     \ " << endl;
cout << "             \   |     /.'   / .'       '-,_" << endl;
cout << "               \   \  .'   _.'_/             \ " << endl;
cout << "  /\    /\      ) ___(    /_.'           \    |" << endl;
cout << " | _\__// \    (.'      _/               |    |" << endl;
cout << " \/_  __  /--'`    ,                   __/    /" << endl;
cout << " (_ ) /b)  \  '.   :            \___.-'_/ \__/" << endl;
cout << " /:/:  ,     ) :        (      /_.'__/-'|_ _ /" << endl;
cout << "/:/: __/\ >  __,_.----.__\    /        (/(/(/" << endl;
cout << "(_(,_/V .'/--'    _/  __/ |   /" << endl;
cout << "VvvV  //`    _.-' _.'     \   \ " << endl;
cout << "  n_n//     (((/->/        |   /" << endl;
cout << "   '--'         ~='          \  |" << endl;
cout << "                              | |_,,," << endl;
cout << "                 snd          \  \  /" << endl;
cout << "                               '.__)" << endl;


    cout << 10 <<endl;
    cout << 3.1416f <<endl;
    cout << true <<endl;
    cout << 'c' <<endl;


    int month = 11;
    int day = 11;
    char initial = 'C';

    cout << day;
    cout<< ':';
    cout<< month <<endl;

    int a =2;
    int b = 5;

    cout<< a+b<<endl;
    cout<< a%b<<endl;



    int dir = 3509;
    int secDir = 1337;

    int * pointerTOdir;

    pointerTOdir = &dir;

    *pointerTOdir = 3;

    pointerTOdir = &secDir;

    cout << dir <<endl;
    cout << *pointerTOdir <<endl;

    float r = 2 ;
    float Pi = 3.1416;
    float areaCircle = Pi * pow(r,2);

    cout << areaCircle <<endl;

    float areaSphere = 4 * Pi * pow(r,2);

    cout << areaSphere <<endl;



    int age = 0;
    cout << "Type your age..." <<endl;

    cin >> age;

    cout << "Wow! You are so young "<<age <<endl;


    int base = 0;
    int height = 0;

    cout<< "Type the base of your rectangle"<<endl;
    cin>>base;
    cout<< "Type the height of your rectangle"<<endl;
    cin>>height;

    cout << "Your rectangle area is: " << base*height<<endl;

    cout << "HOla" << age << "Jejeje" <<endl;


    int Math = 0;
    int Biology =0;

    cout << "Type your math mark..." << endl;
    cin>> Math;

    if(Math == 10){
        cout<< "You are the fucking boss"<<endl;
    }
    else if(Math>6){
        cout<<"Your mark is good" <<endl;
    }
    else{
        cout<<"Your should study more"<<endl;
    }

    cout << "Type your biology mark..." << endl;
    cin>>Biology;

    if(Biology<5){
        cout<<"You don't pass the subject" <<endl;
    }

    switch(Math){
        case 10:
            cout << "You are the fucking boss"<<endl;
            break;
        case 7:
            cout << "Your mark is quite good"<<endl;
            break;
        case 0:
            cout << "You should study"<<endl;
            break;
        default:
            cout<< "whhaaat";
    }






    return 0;
}
