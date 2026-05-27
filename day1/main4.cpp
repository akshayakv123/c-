#include<iostream>
#include<string>

void greetUser(std::string name);
int main(){
    greetUser("John");
    return 0;
}

void greetUser(std::string name){
    std::cout << "Hello " << name << "!" << std::endl;
}