#include <iostream>

int main(int argc, char const *argv[])
{
    char character{'a'};

    character = std::toupper(character);

    std::cout << "UPPER a: " << character << '\n';

    return 0;
}
