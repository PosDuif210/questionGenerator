#include <iostream>
#include <fstream>
#include<string>

int main ()
{
    std::fstream file("good.txt", std::ios::in | std::ios::out);
    if (file.is_open()){
        std::string tp;
        std::cout << "File opened" << std::endl;
        std::getline(file, tp);
        std::cout << tp << std::endl;
    }
    else{
        std::cout << "File did not open"<< std::endl;
    }



}