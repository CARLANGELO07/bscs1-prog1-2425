#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

};

class car {
    public:
        string name;
        string color;

};

int main() {

    Person person1;
     
     person1.name = "Carl Angelo Ayen";
     person1.age = 20;

     car car1;

     car1.name = "Ford mustang";
     car1.color = "black";

     cout << person1.name << " is " << person1.age << " years old. " << endl;
     cout << car1.name << " model 2019 color " << car1.color << endl;

       
       return 0;
}
