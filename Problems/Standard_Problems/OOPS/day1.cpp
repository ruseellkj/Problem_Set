#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    // initializing the data members
    char name[100];
    int health;
    char level;


    
    // Made a default constructor
    Hero(){
        cout << "constructor is called" << endl;
    }

    // made a parametrised constructor
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;

        // cout << "this: " << this << endl;
    }

    // making our own copy constructor
    Hero(Hero& temp){
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << "health is " << this->health << endl;
        cout << "level is " << this->level << endl;
    }
};

int main()
{


    Hero S(70,'C');
    S.print();


    Hero R(S);
    R.print();
    // creating h1 as an object
    // Hero h1(10);
    // cout << "Address of h1 obj is: " << &h1 << endl;
    // h1.health();
    // cout << "size: " << sizeof(h1) << endl;


    // dynamically makign an object
    // Hero *h = new Hero(11);



    // accessing the data members 
    /*h1.health = 70;
    h1.level = 'A';
    cout << "size: " << sizeof(h1) << endl;
    cout << "health of the player is: " << h1.health << endl; 
    cout << "level of the player is: " << h1.level << endl; */
    
}