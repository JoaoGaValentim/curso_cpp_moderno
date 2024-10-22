//
//  main.cpp
//  CppArgs
//
//  Created by João Gabriel valentim Theodoro on 20/09/24.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
//    std::cout << *argv << '\n';
//    std::cout << argv[1] << '\n';
    
    // argc is a constant to count args
    // total is valid if argc > 1
    // if argc is <= 1 --help is show
    if(argc <= 1) {
        std::cout << "Digite --help para mais informações" << '\n';
    }
    
    for (size_t i = 0; i < argc; i++) {
        if(static_cast<std::string>(argv[i]) == "--help") {
            std::cout << "COMANDOS BÁSICOS" << '\n';
            std::cout << '\t' << "--version exibe a versão do programa" << '\n';
        }
        
        if(static_cast<std::string>(argv[i]) == "--version") {
            std::cout << "v0.1.0a" << '\n';
        }
    }
    
    return 0;
}

