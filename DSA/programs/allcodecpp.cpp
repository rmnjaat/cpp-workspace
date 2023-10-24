  //------------------------operator overloding in cpp---------------
  
  Fraction operator+(Fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);

        Fraction fNew(num, lcm);
        fNew.simplify();
        return fNew;
    }

    Fraction operator*(Fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;

        Fraction fNew(numerator, denominator);
        fNew.simplify();
        return fNew;
    }
    // pre increment
    Fraction &operator++()
    {
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
    // post increment
    Fraction operator++(int)
    {
        Fraction fnew(numerator, denominator);
        numerator = numerator + denominator;
        simplify();
        return fnew;
    }
    Fraction operator+=(Fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        simplify();
        return *this;
        // Fraction fNew(num, lcm);
        // fNew.simplify();
        // return fNew;
    }


//--------------------------string methods-----------------------

#include <iostream>

#include <string>

int main() {

    std::string str = "Hello, World!";

    // find()
    size_t found = str.find("World");
    if (found != std::string::npos)
        std::cout << "'World' found at: " << found << '\n';

    // append()
    str.append(" How are you?");
    std::cout << str << '\n';

    // insert()
    str.insert(5, ", dear");
    std::cout << str << '\n';

    // erase()
    str.erase(5, 6);  // erase ', dear'
    std::cout << str << '\n';

    // replace()
    str.replace(str.find("World"), 5, "Universe");
    std::cout << str << '\n';

    // compare()
    std::string str1 = "Hello";
    std::string str2 = "hello";
    if (str1.compare(str2) != 0)
        std::cout << str1 << " and " << str2 << " are not the same.\n";

    return 0;
    
}