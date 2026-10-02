//loops in c++


//For Loop
/*
A for loop is used when you know, or can determine, how many times you want to repeat a block of code.
syntax:
   
    for(initialization; condition; update)
    {
            //code
    }

Example:

    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << '\n';
    }
*/
//While Loop
/*
A while loop repeatedly executes a block of code as long as the condition is true.
syntax:

while (condition)
    {
        // code
    }

Example:

    int i = 1;

    while (i <= 5)
    {
        std::cout << i << '\n';
        i++;
    }

*/
//Dowhile loop
/*
A do-while loop executes the block of code at least once, and then continues repeating it while the condition is true.
syntax:

    do
        {
            // code
        }
        while (condition);

Example:

    int i = 1;

    do
    {
        std::cout << i << '\n';
        i++;
    }
    while (i <= 5);
*/



//........Loop Number Guess Game (do_while loop).........//



#include<iostream>
#include<ctime>         // <<---helps to import time Function as std::time(0)
#include<cstdlib>       //  <<---helps to import random and seedrRandom Function

int main(){

    std::srand(std::time(0));   // <<---- This is used to generate a pseudo-random number, Because of time it helps to generate a random rumber every time we open a program.

    int secreatNumber = std::rand() % 100 + 1;      // <<--- here suppose it generate a random number maybe 567 so the number then mod with 100 so it remainder can be found, and every time the remainder will be samller than 100 it will be ranging from 1---99 and thenm we +1 in it.
    int gusses;         //  <<----- no of gusses
    int attempts = 0;

    do
    {
       std::cout<<"Enter Your Guess Number";
       std::cin>>gusses;

       attempts++;  //<<--- attempts gets incremented after every failed attempts

       if (gusses > secreatNumber)
       {
            std::cout<<"Too High Bro ! Try Again \n\n";

       }else if(gusses < secreatNumber){
            std::cout<<"Too Low Bro ! Try Again \n\n";
       }else {
            std::cout<<"Congrulation You Gussed the Number \n\n";
            std::cout<<"Total Number Of Attempts "<<attempts<<'\n';
       }
       
    } while (gusses != secreatNumber);  //  <<--- here is the condition for this it means repeat the loop until gusss is not equal to secreate number and when it is equal to the guess no then the program is exited.


    return 0;
    

}


//.............................for loop simple project............//

/*

#include <iostream>


int main (){
    
    int table;

    std::cout<<"Enter The Number Of Table U Want";
    std::cin>>table;

    for (int i = 1 ; i < 10; i++)
    {
        std::cout<< table*i<<'\n';
    }
    
    return 0;
}

*/

//.............................for loop simple project............//


/*
#include<iostream>
#include<string>

int main(){

    std::string Password;

    std::cout<<"ENTER YOUR PASSWORD:    ";
    std::cin>>Password;

    while (Password != "Suraj@2006")
    {
        std::cout<<"Wrong Password: \n";
        std::cout<<"Try again:  \n";
        std::cin>>Password;


    }
    std::cout <<"Access Granted !\n";

    return 0;

}

*/