#include <iostream>

using namespace std;

class Cat{
    public:
        string Name;
        Cat(){
            Name = "Beautiful";
        }
        Cat(string iName){
            Name = iName;
        }

        void meow(){
            cout<<Name<< " miiiiaauu"<<endl;
        }
};

class Dog{
public:

    string mBark;

    Dog(string name, string barkType){
        mName = name;
        mBark = barkType;
    }

    string getName(){
        return mName;
    }
    void setName(string newName){
        mName = newName;
    }
    void bark(){
        cout<<mBark<<endl;
    }

private:
    string mName;
};

int main()
{

    Dog dogOne("Woofers", "berk");
    Dog dogTwo("Commy", "woof");

    dogOne.setName("Poopy");

    cout <<dogOne.getName()<<endl;
    cout <<dogTwo.getName()<<endl;

    dogOne.bark();
    dogTwo.bark();


    Cat myFirstKitty;
    Cat mySecondKitty("Tori");
    mySecondKitty.meow();

    cout<< myFirstKitty.Name<<endl;
    cout<< mySecondKitty.Name;

    return 0;
}
