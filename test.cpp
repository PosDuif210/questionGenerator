#include <iostream>
#include <fstream>

int main ()
{
    std::fstream file("good.txt", std::ios::in | std::ios::out);
    if (file.is_open()){
        std::cout << "File opened" << std::endl;
    }
    else{
        std::cout << "File did not open"<< std::endl;
    }


}