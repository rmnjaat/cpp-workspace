#include <bits/stdc++.h>
using namespace std;

class Frac
{

public:
    int den;
    int num;

    Frac(int x, int y) : num(x), den(y){};

    Frac operator+(Frac f2)
    {
        // add and store answere in f1
        int lc = lcm(this->den, f2.den);
        cout << "lcm is " << lc << endl;
        int s = 0;
        s += (lc / this->den) * this->num;
        cout << "s1 " << s << endl;
        s += (lc / f2.den) * f2.num;
        cout << "s2 " << s << endl;
        Frac f3(0, 0);
        f3.num = s;
        f3.den = lc;

        return f3;
    };

    bool operator==(Frac f2)
    {
        if (num == f2.num)
        {
            if (den == f2.den)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

    void simplfy()
    {
        int gc = gcd(this->num, this->den);
        this->num /= gc;
        this->den /= gc;
    };

    Frac operator++(int)
    {
        Frac temp = *this;
        num = num + den;
        simplfy();
        return temp;
    }

    void print()
    {
        cout << this->num << "/" << this->den << endl;
    };

/*

    Fraction operator+=(Fraction const &f2) {
int lcm = denominator * f2.denominator;
int x = lcm / denominator;
int y = lcm / f2.denominator;

int num = x * numerator + (y * f2.numerator);
numerator=num;
denominator=lcm;
simplify();
return *this;
// Fraction fNew(num, lcm);
// fNew.simplify();
// return fNew;
}*/


};

int main()
{
    int x, y;
    cin >> x >> y;

    Frac f1(x, y);
    cin >> x >> y;
    Frac f2(x, y);
    // f1=f1+f2;

    // f1.print();
    // f1.simplfy();
    // f1.print();

    int r = f1 == f2;
    (r == 0) ? cout << "False" : cout << "True";
}












//-------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

class Fraction {
private :

int numerator;
int denominator;

public :

Fraction(int numerator, int denominator) {
this -> numerator = numerator;
this -> denominator = denominator;
}

void print() {
cout << this -> numerator << " / " << denominator << endl;
}

void simplify() {
int gcd = 1;
int j = min(this -> numerator, this -> denominator);
for(int i = 1; i <= j; i++) {
if(this -> numerator % i == 0 && this -> denominator % i == 0) {
gcd = i;
}
}
this -> numerator = this -> numerator / gcd;
this -> denominator = this -> denominator / gcd;
}

// Fraction add(Fraction const &f2) {
// int lcm = denominator * f2.denominator;
// int x = lcm / denominator;
// int y = lcm / f2.denominator;

// int num = x * numerator + (y * f2.numerator);

// Fraction fNew(num, lcm);
// fNew.simplify();
// return fNew;
// }
Fraction operator+(Fraction const &f2) {
int lcm = denominator * f2.denominator;
int x = lcm / denominator;
int y = lcm / f2.denominator;

int num = x * numerator + (y * f2.numerator);

Fraction fNew(num, lcm);
fNew.simplify();
return fNew;
}

// Fraction multiply(Fraction const &f2) {
// numerator = numerator * f2.numerator;
// denominator = denominator * f2.denominator;

// Fraction fNew(numerator, denominator);
// fNew.simplify();
// return fNew;
// }
Fraction operator*(Fraction const &f2) {
numerator = numerator * f2.numerator;
denominator = denominator * f2.denominator;

Fraction fNew(numerator, denominator);
fNew.simplify();
return fNew;
}
//pre increment
Fraction& operator++(){
numerator=numerator+denominator;
simplify();
return *this;
}
//post increment
Fraction operator++(int){
Fraction fnew(numerator,denominator);
numerator=numerator+denominator;
simplify();
return fnew;
}
Fraction operator+=(Fraction const &f2) {
int lcm = denominator * f2.denominator;
int x = lcm / denominator;
int y = lcm / f2.denominator;

int num = x * numerator + (y * f2.numerator);
numerator=num;
denominator=lcm;
simplify();
return *this;
// Fraction fNew(num, lcm);
// fNew.simplify();
// return fNew;
}
};


int main(){
Fraction f1(3,1);
Fraction f2(2,1);
cout<<"value of f1 =";
f1.print();
cout<<"value of f2 =";

f2.print();
(f1+f2) += f2;
// f1+=f2;
f1.print();
f2.print();


// int a=5;
// int b=++(++a);
// cout<<b<<" value of a = "<<a<<endl;
// Fraction f1(1,5);
// Fraction f2(3,2);
// cout<<"value of f1 =";
// f1.print();
// cout<<"value of f2 =";
// f2.print();
// //using postincrement operator overloading
// Fraction f3=f1++;
// cout<<"new value of f1 =";
// f1.print();
// cout<<" value of f3 =";
// f3.print();
// //preincrement operator overloading
// Fraction f3=++(++f1);

// cout<<"new value of f1 =";
// f1.print();
// cout<<" value of f3 =";
// f3.print();

// Fraction f3=f1+f2;
// cout<<"value of f3 after f1+f2 =";
// f3.print();
// Fraction f4=f1*f2;
// cout<<"value of f4 after f1*f2 =";
// f4.print();
// Fraction f5=(f1+f2)*f1*f2;
// f1.print();
// f5.print();
}