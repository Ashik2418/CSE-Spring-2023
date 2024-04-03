/*CO3 Demonstrate a C++ code that creates a class called Fraction. The class

Fraction has two attributes: numerator and denominator.
• In your constructor (inyour__init__ method), verify(assert?) that the
numerator and denominator passed in during initiation are both of type int.
If you want to be thorough, also check to make sure that the denominator is
not zero.
• Write a .reduce() method that will reduce a fraction to lowest terms.
• Override the Object class’s __str__ and __repl__ methods so that your
objects will print out nicely. Remember that__str__ is more for humans;
__repl__ is more for programmers. Ideally ,the__repl__ method will
produce a string that you can run through the eval() function to clone the
original fraction object.
• Override the + operator. In your code, this means that you will implement
the special method __add__. The signature of the __add__ function will be
def __add__(self, other): , and you’ll return a new Fraction with the result
of the addition. Run your new Fraction through the reduce() function before
returning.*/

solved by Vs code:

#include <iostream>
#include <string>

using namespace std;

class Fraction {
  private:
    int numerator, denominator;

  public:
    Fraction(int num, int denom) {
      if (denom == 0) {
        cout << "Error: Denominator cannot be zero" << endl;
        exit(1);
      }
      numerator = num;
      denominator = denom;
    }

    void reduce() {
      int gcd = findGCD(numerator, denominator);
      numerator /= gcd;
      denominator /= gcd;
    }

    string str() const {
      string s = to_string(numerator) + "/" + to_string(denominator);
      return s;
    }

    string repr() const {
      string s = "Fraction(" + to_string(numerator) + ", " + to_string(denominator) + ")";
      return s;
    }

    Fraction operator+(const Fraction& other) const {
      int num = numerator * other.denominator + other.numerator * denominator;
      int denom = denominator * other.denominator;
      Fraction result(num, denom);
      result.reduce();
      return result;
    }

  private:
    int findGCD(int a, int b) const {
      if (b == 0) {
        return a;
      }
      return findGCD(b, a % b);
    }
};

int main() {
  Fraction f1(3, 4);
  Fraction f2(1, 2);
  Fraction f3 = f1 + f2;
  cout << f1.str() << " + " << f2.str() << " = " << f3.str() << endl;
  cout << f3.repr() << endl;
  return 0;
}

