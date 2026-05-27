#include <iostream>
#include <string>

class Family {
public:
    std::string name;
    std::string relation;
    int age;

    void introduce() {
        std::cout << name << " is my " << relation
                  << " and is " << age << " years old.\n";
    }
};

int main() {
    Family member1;
    member1.name = "Ram";
    member1.relation = "Father";
    member1.age = 50;

    Family member2;
    member2.name = "Anita";
    member2.relation = "Mother";
    member2.age = 45;

    member1.introduce();
    member2.introduce();

    return 0;
}