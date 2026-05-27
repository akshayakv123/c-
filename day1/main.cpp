#include<iostream>
#include<string>
class Car{
    public:
    std::string brand;
    std::string color;
    int year;

    void startEngine(){
        std::cout<<"the"<<color<<""<<brand<<"'s engine is now running!\n";
    }
};
int main(){
    Car myCar;
    myCar.brand="toyota";
    myCar.color="red";
    myCar.year=2023;

    Car friendscar;
    friendscar.brand="tesla";
    friendscar.color="blue";
    friendscar.year=2024;

    myCar.startEngine();
    friendscar.startEngine();


    return 0;
}


