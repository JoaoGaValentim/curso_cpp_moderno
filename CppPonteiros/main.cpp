#include <iostream>

int main(int argc, char const *argv[])
{
    int x{100};
    int *px = &x;

    std::cout << "X = " << x << " PX = " << *px << '\n';
    std::cout << "X = " << x << " PX = " << &px << '\n';

    return 0;
}
