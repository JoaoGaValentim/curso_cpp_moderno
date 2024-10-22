#include <iostream>

int main(int argc, char const *argv[])
{
    double pi = 3.1415;
    int pint = pi;

    char letter = 'a';

    std::string word{"Algo"};

    // pint = int(letter); // converção funcional
    // pint = (int)letter; // type casting

    std::cout << "Converção implicita: " << pint << '\n';
    pint = letter;
    std::cout << "Converção implicita: " << pint << '\n';
    pint = letter + pint;
    std::cout << "Converção implicita: " << pint << '\n';
    word = pint;
    std::cout << "Converção implicita: " << word << '\n'; // perca

    double piSquare = pi * 2;
    int piSquareInt = static_cast<int>(piSquare);

    std::cout << "static_cast<int>(" << piSquareInt << ");" << '\n';

    int value = 137;
    double c = static_cast<double>(value) + 0.7;

    std::cout << "static_cast<double>(" << c << ");" << '\n';

    std::cout << typeid(value).name() << '\n';
    std::cout << typeid(piSquare).name() << '\n';

    return 0;
}
