// Input: data received from the user
// Output: data displayed to the user
// Stream operator: << or >>

#include <iostream>


int main(){

    std::string myname;

    std::cout<<"Enter Your Name\n"; //<<-- "cout" is used to output text or content
    std::cin>>myname;  //<<--- "cin" is used for taking output from the user
    
    // '>>' ---- insertion operator
    // '<<' ---- Extraction Operator
    
    std::cerr << "Error: File could not be opened.";
    //cerr is mainly intended for error messages.

    std::clog << "program started";

    //it is mainly logging or diagnostic message.

    //Multiple Outputs 

    int num;
    double Decnum;


    std::cin >> num >> Decnum;
     
    std::cout << "Age: "<< num << '\n';
    std::cout << "Age: "<< Decnum << '\n';
    








    return 0;

}
