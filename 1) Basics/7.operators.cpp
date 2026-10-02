//arthematic operators
/*
    addition        a+b;
    subtraction     a-b;
    multiplication  a*b;
    division        a/b;
    remainder       a%b;
*/
//assignment operators
/*
    | Operator | Example  | Equivalent to |
    | -------- | -------- | ------------- |
    |  =       |  a = 5   |  Assign 5     |
    |  +=      |  a += 5  |  a = a + 5    |
    |  -=      |  a -= 5  |  a = a - 5    |
    |  *=      |  a *= 5  |  a = a * 5    |
    |  /=      |  a /= 5  |  a = a / 5    |
    |  %=      |  a %= 5  |  a = a % 5    |
    Example. 
    int num = 10;

    num += 5;   // 15
    num -= 3;   // 12
    num *= 2;   // 24
    num /= 4;   // 6

*/
//comparision operators
/*
    | Operator | Meaning                  |
    | -------- | ------------------------ |
    |  ==      | Equal to                 |
    |  !=      | Not equal to             |
    |  >       | Greater than             |
    |  <       | Less than                |
    |  >=      | Greater than or equal to |
    |  <=      | Less than or equal to    |
    Example

    int a = 10;
    int b = 20;

    std::cout << (a == b) << '\n'; // false
    std::cout << (a != b) << '\n'; // true
    std::cout << (a < b) << '\n';  // true
    std::cout << (a > b) << '\n';  // false
*/
//logical operators
/* 
    | Operator | Name  |          Meaning            |
    |    &&    |  And  | Both conditions must be true|
    |    !     |  Not  |      Reverse The Result     | 
    Example:
    if (age >= 18 && hasID)
       {
           std::cout << "Allowed";
        } 
*/
//increment and decriment operators
 /* 
     i++  <--- 
     i--  <---
     Example:
     int num = 5;

      num++;  // 6
      num--;  // 5

*/
//modulus "%"
 /* 
   Modulus give reminder for the equation 
   Example:
   int a = 10;
   int b = 3;

   std::cout << a % b;
 */
//Ternary ?:
/*
The ternary operator is a short way of writing a simple if-else.
Syntax:
condition ? value_if_true : value_if_false;
int age = 20;

std::string result = (age >= 18) ? "Adult" : "Minor";

std::cout << result;

output:

adult

*/


// Project/Program

#include<iostream>
#include <string>

int main()
{
    std::string studentName;
    int age;
    int rollno;
    int maths,physics,chemistry,biology,cs;
    double Percentage;
    double totalM;
    std::string grade;
    std::string result;
    std::string addmission;




    std::cout<< "Enter Your Name Here   : ";
    std::getline(std::cin,studentName);
    std::cout<< "Enter Your Age Here    : ";
    std::cin>>age;
    std::cout<< "Enter Your RollNo Here : ";
    std::cin>>rollno;

    std::cout<< "Enter Marks for Maths              : ";
    std::cin>>maths;
    std::cout<< "Enter Marks for Psysics            : ";
    std::cin>>physics;
    std::cout<< "Enter Marks for Chemistry          : ";
    std::cin>>chemistry;
    std::cout<< "Enter Marks for Biology            : ";
    std::cin>>biology;
    std::cout<< "Enter Marks for ComputerScience    : ";
    std::cin>>cs;
    


    totalM = maths+physics+chemistry+biology+cs;
    Percentage = totalM*100/500;

    int gradenumber = static_cast<int>(Percentage)/10;

    switch(gradenumber)
    {
        case 10:
        case 9 :
             grade = "Grade A";
             break;
        case 8 :
             grade = "Grade B";
             break;
        case 7 :
             grade = "Grade C";
             break;
        case 6 :
             grade = "Grade D";
             break;
        case 5 :
             grade = "Grade E";
             break;
        default:
            grade = "Grade F";
            break;


        
    }

    if ( Percentage >= 60)
    {
        addmission = "Eligible\n";
    }
    else
    {
        addmission =  "Not Eligible\n";
    }


    if (Percentage >= 40)
    {
        result = "PASS";
    }
    else
    {
        result = "FAIL";
    }
    std :: cout<<"\n======RESULT======\n";  

    std :: cout<<"Name           :"<<studentName<<'\n';
    std :: cout<<"RollNo         :"<<rollno<<'\n';
    std :: cout<<"Age            :"<<age<<'\n';
    std :: cout<<"Total Marks    :"<<totalM<<'\n';
    std :: cout<<"Percentage     :"<<Percentage<<'\n';
    std :: cout << "Grade        : " << grade << '\n';
    std :: cout << "Result       : " << result << '\n';
    std :: cout << "Admission    : " << addmission << '\n';

    return 0;

}

