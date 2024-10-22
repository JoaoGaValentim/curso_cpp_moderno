//
//  main.cpp
//  CppEnv
//
//  Created by João Gabriel Valentim Theodoro on 21/10/24.
//

#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[]) {
    // My env's
    std::string home{getenv("HOME")};
    std::string user{getenv("USER")};
    std::string shell{getenv("SHELL")};
    
    std::cout << home << '\n';
    std::cout << user <<'\n';
    std::cout << shell <<'\n';
    
   // system("zsh ; ls -al");

    return 0;
}
