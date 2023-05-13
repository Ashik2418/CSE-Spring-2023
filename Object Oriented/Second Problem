/*CO2 Imagine a publishing company that markets both book and audiocassette
versions of its works. Create a class publication that stores the title (a
string) and price (type float) of a publication. From this class derive two
classes: book, which adds a page count (type int), and tape, which adds a
playing time in minutes (type float). Each of these three classes should
have a getData() function to get its data from the user at the keyboard, and
a putData() function to display its data.
Write a main program to test the book and tape classes by creating
instances of them, asking the user to fill in data with getData(), and then
displaying the data with putData().*/

solved by vs code:

#include<iostream>
#include<string>

using namespace std;

class Publication {
private:
    string title ;
    float price ;

public:
    Publication() : title (""), price (0.0) {}
    Publication(string t, float p ) : title (t), price (p){}

void getData () {
 cout << "Enter title: ";
 getline (cin,title);
 cout <<"Enter price:" ;
 cin >> price;
 cin.ignore(); // consume newline
}
void putData() const {
cout << "Title:" <<title <<endl;
cout << "Price:" <<price <<endl;
}

  };

class Book : public Publication {
 private:
     int pageCount;
 public:
    Book () : Publication (), pageCount (0) {}
    Book (string t, float p, int pc ) : Publication (t,p),
    pageCount (pc) {}

void getData () {

    Publication :: getData () ;
    cout << "Enter page count: ";
    cin >> pageCount;
    cin.ignore (); //consume newline
    }

void putData() const {
 Publication :: putData () ;
 cout<< "Page count:" << pageCount << endl ;

}

};

class Tape: public Publication {

private:
    float playingTime ;
public:
    Tape () : Publication (), playingTime (0.0) {}
    Tape (string t, float p, float pt ) : Publication (t,p),
    playingTime (pt) {}

void getData () {
 Publication :: getData () ;
 cout << "Enter playing time (minutes):";
 cin >> playingTime ;
 cin.ignore(); //consume newline
}

void putData () const {
 Publication :: putData ();
 cout << "Playing time (minutes):" << playingTime <<endl ;
}
};

int main () {
 Book b;
 Tape t;
 b.getData();
 t.getData ();
 cout << endl << "Book info:" <<endl;

 b.putData();
 cout << endl <<"Tape info:" <<endl ;
 t.putData () ;
 return 0;

}

