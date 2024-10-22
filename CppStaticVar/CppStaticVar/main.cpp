//
//  main.cpp
//  CppStaticVar
//
//  Created by João Gabriel Valentim Theodoro on 21/10/24.
//

#include <iostream>


void increment_and_print() {
    static int increment{1};
    
    ++increment;
    
    std::cout << increment << '\n';
}


int main(int argc, const char * argv[]) {
    increment_and_print();
    increment_and_print();
    increment_and_print();
    increment_and_print();
    return 0;
}
