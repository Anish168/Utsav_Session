#include <iostream>
using namespace std;
class fraction
{
    int numerator;
    int denominator;

public:
    fraction()
    {
    }
    fraction(int num, int denominator)
    {
        // this->numerator = numerator;
        numerator = num;
        this->denominator = denominator;
    }

    int getnumerator() const
    {
        return numerator;
    }

    int getdenominator() const
    {
        return denominator;
    }

    void setnumerator(int numerator)
    {
        this->numerator = numerator;
    }

    void setdenominator(int denominator)
    {
        this->denominator = denominator;
    }

    void print() const
    {
        cout << this->numerator << " " << this->denominator << endl;
        cout << numerator << " " << denominator << endl;
    }
};
int main()
{
    fraction f1(10, 2);
    fraction f2(15, 3);
    f1.setdenominator(32);
    cout << f1.getdenominator() << " " << f1.getnumerator() << endl;

    // You can call constant function which doesn't change the value.
    fraction const f3;
    cout << f3.getdenominator() << " " << f3.getnumerator() << endl;

    return 0;
}