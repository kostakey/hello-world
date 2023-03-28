#include<iostream>

int main(){
    std::string name1;
    std::string name2;
    int age1;
    int age2;
    std::cin >> name1 >> age1 
            >> name2 >> age2;
    std::cout << name1 << " is " 
            << abs(age1 - age2) 
            << " years older than " 
            << name2 << '.' << std::endl;
}