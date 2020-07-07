#include <iostream>

using namespace std;

class mage{
protected:
    int mana, hp, power;

public:
    mage(int iMana, int iHP, int iPower){
        mana = iMana;
        hp = iHP;
        power = iPower;
    }

    void Spell(){
        cout << "Fireworks!"<<power<<endl;
    }

    float Damage(){
        return power;
    }
    void getDamage(int value){
        hp -= value;
        cout<<"The life is "<<hp<<endl;
    }
    void printHP(){
        cout<<hp<<endl;
    }
};

class iceMage: public mage
{
    public:

    iceMage(int iMana, int iHP, int iPower): mage(iMana, iHP, iPower)
    {
        mana = iMana;
        hp = iHP;
        power = iPower + 10;
    }
};

class fireMage: public mage
{
    public:

    fireMage(int iMana, int iHP, int iPower): mage(iMana, iHP, iPower)
    {
        mana = iMana;
        hp = iHP + 10;
        power = iPower;
    }
};

class human{
public:
    human(int spawnAge){
        age = spawnAge;
    }
    int age;

    void think(){
        cout<< getThinkMessage()<<endl;
    }

private:

    int socialLevel;
    int inteligence;
    int luck;

    string getThinkMessage(){
        if(socialLevel+luck >100){
            return "I am happy";
        } else if (luck>inteligence){
            return "I am a lucky man";
        }else if(age > 18){
            return "I am a baby";
        }else{
            return "I don't think anything";
        }
    }
};

int main()
{
    /*human Bob(19);

    Bob.think();*/

    mage * currentMage;

    fireMage Gandalf(100,20,10);
    iceMage Sauruman(100,20,10);

    currentMage = &Gandalf;
    currentMage->getDamage(5);

    currentMage = &Sauruman;
    currentMage->getDamage(5);

    Gandalf.Spell();
    Sauruman.Spell();

    Gandalf.printHP();
    Sauruman.printHP();

    return 0;
}
