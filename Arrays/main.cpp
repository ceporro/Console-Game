#include <iostream>

using namespace std;

int main()
{
    char ties[5];

    ties[0] = 'v';
    ties[1] = 'n';
    ties[2] = 'p';
    ties[3] = 'r';
    ties[4] = 'a';

    ties[5] = '#'; // Its posible in C++, but Caution
    cout << ties[0] <<endl;
    cout << ties[1] <<endl;
    cout << ties[2] <<endl;
    cout << ties[3] <<endl;
    cout << ties[4] <<endl;

    int index;
    cin>>index;

    string names[4] = {"Asterix", "Idiafix", "Obelix", "Panoramix"};
    string currentName = names[2];
    cout<< names[index];

    return 0;
}
