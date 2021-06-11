// Simple C++ program to display "Hello World"

// Header file for input output functions
#include <iostream>

using namespace std;

// main function -
// where the execution of program begins

class Player
{
public:
    int x, y;
    int speed;
    int attackDamage;
    int health;

    void moveX()
    {

        cout << "Moving Player" << endl;
    }

    void attack(Player &person)
    {
        person.health = person.health - this->attackDamage;
    }
};

int test(int fnum, int snum)
{

    int sum = fnum + snum;

    return (sum);
}

int main()
{

    int theNumber = 300;
    cout << "Hello World" << endl;

    Player justin;
    Player jimmy;
    justin.attackDamage = 100;
    justin.health = 2000;

    jimmy.attackDamage = 50;
    jimmy.health = 4000;

    justin.attack(jimmy);

    cout << jimmy.health << endl;

    return 0;
}