#include <iostream>
using namespace std;
class fraction
{
public:
    int numerator;
    int denominator;

    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        cout << numerator << " / " << denominator << endl;
    }

    void simplify()
    {
        int gcd = 1;
        int j = min(numerator, denominator);
        for (int i = 1; i <= j; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = numerator / gcd;
        this->denominator = denominator / gcd;
    }
    void add(fraction f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + y * f2.numerator;
        numerator = num;
        denominator = lcm;

        simplify();
    }

    void multiply(fraction f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
    }

    // operator overloading
    // return_type operator(konsa operator overload krna h)(){}
    // void operator+(fraction const &f2)
    // {
    //     int lcm = this->denominator * f2.denominator;
    //     int x = lcm / this->denominator;
    //     int y = lcm / f2.denominator;

    //     int num = x * numerator + y * f2.numerator;
    //     numerator = num;
    //     denominator = lcm;

    //     simplify();
    // }
    fraction operator+(fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + y * f2.numerator;
        fraction f3(num, lcm);

        f3.simplify();
        return f3;
    }

    void operator*(fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
    }

    bool operator==(fraction f2)
    {
        return (numerator == f2.numerator && denominator == f2.denominator);
    }

    // preincrement
    fraction operator++()
    {
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
    // postincrement
    fraction operator++(int)
    {
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
};
int main()
{
    fraction f1(10, 2);
    fraction f2(5, 3);
    f1.print();
    // f2.print();
    // f1.add(f2);
    // f1.print();
    // f2.print();

    cout << endl;
    // f1.multiply(f2);
    // f1.print();
    // f2.print();

    // f1 + f2;
    // f1.print();

    // fraction f4 = f1 + f2;
    // f4.print();

    // f1 *f2;
    // f1.print();

    // if (f1 == f2)
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not equal" << endl;
    // }

    // ++f1; // f1=f1+1;
    // fraction f3 = ++(++f1);
    // f1.print();
    // f3.print();

    f1++;
    f1.print();
    return 0;
}