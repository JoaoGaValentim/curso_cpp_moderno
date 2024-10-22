//
//  main.cpp
//  CppOverloadFunctionPointer
//
//  Created by João Gabriel valentim Theodoro on 27/09/24.
//

#include <iostream>

void funciton() {
    std::cout << "Função do tipo void" << '\n';
}

int function(int x) {
    return x;
}

int funciton(int x, char y) {
    std::cout << x << " " << y << '\n';
    return 0;
}

std::string* function(std::string *firstName) {
    return firstName;
}


int main(int argc, const char * argv[]) {
    funciton();
    funciton(11, 'A');
    std::string name{"Joao"};
    
    std::cout<< *function(&name) << '\n';
    
    return 0;
}
