//
//  main.cpp
//  DecimalBinaryParser
//
//  Created by João Gabriel Valentim Theodoro on 21/10/24.
//

#include <iostream>
#include "project.hpp"

int main(int argc, const char ** argv) {
    std::string arg;
    
    if(argc > 2) {
        arg = argv[1];
        
        if(arg == "--dec2bin" || arg == "-b") {
            size_t value = std::stoi(argv[2]);
            std::cout << showBinaryValue(value) << '\n';
        }
        
        if(arg == "--bin2dec" || arg == "-d") {
            size_t value = std::stoi(argv[2]);
            std::cout << showDecimalValue(value) << '\n';
        }

    }
    
    if(argc < 2) {
        std::cout << "./a.out [base] [value]"
                  << '\t' << "--bin2dec ou -b [value] para binário"
                  << '\t' << "--dec2bin ou -d [value] para decimal" << '\n';
            
    }
    
    
    return 0;
}
