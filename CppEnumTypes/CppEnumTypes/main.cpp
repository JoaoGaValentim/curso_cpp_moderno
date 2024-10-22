//
//  main.cpp
//  CppEnumTypes
//
//  Created by João Gabriel valentim Theodoro on 29/09/24.
//

#include <iostream>

typedef enum {
    RED,
    GREEN,
    BLUE,
} Colors;


typedef enum {
    Success,
    Error,
    Warning,
} Status;

int main(int argc, const char * argv[]) {
    std::cout << "RED => " << RED << '\n';
    std::cout << "GREEN => " << GREEN << '\n';
    std::cout << "RED => " << BLUE << '\n';
    return 0;
}
