/*C++ program to implement inheritance with following requirements,
Classes :- Animal.cpp, bird.cpp, canine.cpp, main.cpp (to test it) :-
-You may need getters and setters also.
1. Declare and define an animal base class:
• animal stores an age (int), a unique long ID (a boolean that is
true if it is alive, and a location (a pair of double).
• animal requires a default constructor and a 3 parameter
constructor. Both constructors should set the unique ID
automatically. They should also set the alive boolean to true.
The three parameter constructor should accept an int for the
age and two doubles for the set of coordinates. The default
should set these three values to 0.
• animal requires a virtual move method which accepts two
doubles that represent two coordinates, and ‘moves’ the
animal to the set of coordinates.
• animal requires a copy constructor and a virtual destructor.
The destructor should be virtual.
• animal requires a virtual sleep method and a virtual eat
method. Both methods return void. Both methods should print
an appropriate message to cout.
• animal requires a setAlive function which accepts a boolean.
This is a void function that changes the alive data member to
the value of the boolean that is passed in.
Overload the insertion operator for the animal.*/

Solved by Vs code:
#include <iostream>
using namespace std;
class Animal {
protected:
    int age;
    bool alive;
    long id;
    pair<double, double> location;
public:
    Animal() {
    age=0;
    alive=true;
    id=0;
    location=make_pair(0.0,0.0);
    }
    Animal(int a, double x, double y) {
        age=a;
        alive=true;
        id=122;
        location=make_pair(x,y);
        }
    virtual void move_(double x, double y) {
        location.first = x;
        location.second = y;
    }
    virtual void eat() {
        cout << "Animal is eating.\n";
    }
    virtual void sleep() {
        cout << "Animal is sleeping.\n";
    }
    void setAlive(bool value) {
        alive = value;
    }
    virtual ~Animal() {}
    friend ostream& operator<<(ostream& os, const Animal& a);
};
class Bird: public Animal {
public:
    Bird(): Animal() {}
    Bird(int a, double x, double y): Animal(a, x, y) {}
    void fly(double x, double y) {
        cout << "Bird is flying to " << x << ", " << y << endl;
        move_(x, y);
    }
    void eat() {
        cout << "Bird is eating worms.\n";
    }
};

class Canine: public Animal {
public:
    Canine(): Animal() {}
    Canine(int a, double x, double y): Animal(a, x, y) {}
    void run(double x, double y) {
        cout << "Canine is running to " << x << ", " << y << endl;
        move_(x, y);
    }
    void eat() {
        cout << "Canine is eating meat.\n";
    }
};

ostream& operator<<(ostream& os, const Animal& a) {
    os << "Animal " << a.id << " (age " << a.age << ", alive: " << boolalpha << a.alive << ") is at location (" << a.location.first << ", " << a.location.second << ")";
    return os;
}

int main() {
    Bird b(2, 3.0, 4.0);
    Canine c(3, 5.0, 6.0);

    cout << b << endl;
    cout << c << endl;

    b.fly(10.0, 20.0);
    c.run(30.0, 40.0);

    b.eat();
    c.eat();

    b.setAlive(false);
    c.setAlive(false);

    cout << b << endl;
    cout << c << endl;

    return 0;
}

