#include <iostream>

using namespace std;



int main()
{
    bool gameOver;

    cout << "Hello! You are locked in this room. You can find the exit making the right choices." << endl;
    cout << "There are two challenges. The first one:" << endl;

    cout << "The door is closed. You can take the hammer (type h), the key (k), the bomb (b) or the paperclip (p)" << endl;

    char first;

    cin >> first;

    string firstChoice;
    string firstResult;

    switch (first){
        case 'h':
            firstChoice = "the hammer";
            firstResult = "You try to destroy the door with it but you can't. You die of exhaustion.";
            gameOver = true;
            break;
        case 'k':
            firstChoice = "the key";
            firstResult = "You introduce the key in the door but it don't open it. You die dehydrated.";
            gameOver = true;
            break;
        case 'b':
            firstChoice = "the bomb";
            firstResult = "The bomb destroy the door and you could go ouf if you weren't die because of the explosion.";
            gameOver = true;
            break;
        case 'p':
            firstChoice = "the paperclip";
            firstResult = "You get it. The door is open.";
            gameOver = false;
            break;
        default:
            cout<< "Please return tomorrow and type a correct character" <<endl;
            gameOver = true;
    }

    cout << "You choose "<< firstChoice << ". "<<firstResult  <<endl;

    if(!gameOver){

        cout << "You arrive in a well. There is a rope (type r to climb it), a tunnel (t) and a smartphone (s)." <<endl;

        char second;

        cin >> second;

        string secondChoice;
        string secondResult;

        switch (second){
            case 'r':
                secondChoice = "climbing the rope";
                secondResult = "You haven't used your muscles for 20 years. You can't climb it and you decide to hang yourself. ";
                break;
            case 't':
                secondChoice = "go over the tunnel";
                secondResult = "It leads you to the exit.Congratulations!";
                break;
            case 's':
                secondChoice = " take the smartphone";
                secondResult = "There isn't mobile coverage. You die bitten by a scorpion.";
                break;
            default:
                cout<< "Please return tomorrow and type a correct character" <<endl;
        }

        cout << "You choose "<< secondChoice << ". "<<secondResult  <<endl;

    }

    return 0;
}
