// Data types in c++ 

#include<iostream>
using namespace std;

void sayhello(){
    cout<<"hello";
}

int main(){

    /* 
    short   = short is an integer type used to store whole numbers, usually using less memory than {range : -32,768 to 32,767}
    long    = long is an integer type that can store larger whole numbers than int on some systems.{Windows 64-bit → usually 4 bytes
                                                                                                    Linux 64-bit   → usually 8 bytes}.
    long long   = long long is an integer type designed to provide a large range for whole numbers. {typically 8bit}[-9,223,372,036,854,775,808
                                                                                                                                to
                                                                                                                    9,223,372,036,854,775,807]
    unsigned    = unsigned means the integer cannot represent negative values. {0 to 4,294,967,295}
    float       = it can store decimal value. if 'f' is written in ther then means it is float because every float is a double
    double      = double also stores floating-point numbers but normally provides more precision than float.[Usually provides about 15–16 decimal digits of precision.]
    long double = long double is a floating-point type that provides at least as much precision as double, and may provide more depending on the platform/compiler.
                    float       → usually 4 bytes
                    double      → usually 8 bytes
                    long double → platform-dependent    
                    {long double value = 3.14159265358979323846L;
                    The L indicates a long double literal.}
    char        = char stores a single character.
                  char grade = 'A';
                  char symbol = '#';
                  'P' //character
                  "p" //string
                  Typically stores 1 bit,
                 { cout << static_cast<int>(letter);
                  can be use for seeing the numericic value of the charcter}
    bool        = represent 'true' or 'false'
                  bool isRunning = true;
                  bool gameOver = false;
                  [1 → true
                  0 → false]
    void        = This function doesn't return a value.
    sizeof()    = tells you the size of a type or object in bytes.
                  cout << sizeof(int);
    Basic signed vs unsigned


    */

    int age =20;
    short int day = 2;
    long int money = 10000000;
    long long int Mmoney = 100000500020;
    float gpa = 3.5f;
    double Ggpa = 3.555555555;
    long double average = 35555865885.4456588L;
    char letter = 'A';
    string myname = "Hello Suraj";
    bool iselligible = true;

    
    cout<<sizeof(int);
}