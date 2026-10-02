// Variable: value can be changed
// Constant: value cannot be changed after initialization


#include<iostream>
using namespace std;

int main(){
    int age ; //<---- here age is the variable stored in data type int (Integer)
    age = 25; //<--- here is the diclaration of age
    const int nage = 10;//<--- const (constant) it cannot be changed once declared 
    cout<<age<<endl;
    cout<<nage;
    
    return 0;


}