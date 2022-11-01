//
//  main.cpp
//  LearnCpp
//
//  Created by sangyoon kim on 2022/11/01.
//

#include <iostream>
#include <limits>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get(); // get one more char from the user 
    return 0;
}
