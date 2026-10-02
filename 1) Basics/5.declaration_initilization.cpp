

#include<iostream>



int main(){

    // Declaration: creates a variable without assigning a value
    // Here age exists but do not have a value
    int age;


    // Initialization: gives the variable its first value
    int aage = 20;

    //std::cout << age << "/n";
    

    // Assignment: changes the value of an existing variable
    aage = 30;
    
    std::cout << aage << "/n";

    // Copy initialization: initializes a variable using =

    int newAge = aage;

    std::cout << newAge << "/n";

    // Direct initialization: initializes a variable using parentheses
    int marks(20);

    std::cout << marks << "/n";




 
    


    return 0;
}