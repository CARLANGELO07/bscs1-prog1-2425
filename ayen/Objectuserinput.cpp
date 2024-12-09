#include <iostream> 
using namespace std;

  class Person {
          public:
             string name;
             int age;
   }; 
   
   class car {
         public:
            string brand;
            string model;
            string color;
            
            
  };
  
  int main() {
       
       Person person1;
       car car;
       
       cout << " What is your name: ";
       cin >> person1.name;
       cout << " age: ";
       cin >> person1.age;
       cout << " Car Brand: ";
       cin >> car.brand;
       cout << " Model: ";
       cin >> car.model;
       cout << " car color: ";
       cin >> car.color;
       
       cout << person1.name << " at " << person1.age << " has a " << car.brand << " " << car.model << " model " << car.color << " color ";
       
  
      
  
     
      return 0;
  
  }    
      
  
                
