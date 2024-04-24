// The code was written in VS CODE
// The code was in c++ format
// The code was written by Parth Patel
// If the code is helpfull please follow in github

// ***********THIS IS HEADERFILE**********
#include<iostream>
using namespace std;

int main(){
    double num1 , num2; //take num1 and num2 in double
    char op; // take op as charactor
    cout<<"*********THIS IS SIMPLE CALCULATOR**********"<<endl<<endl<<endl;
    cout<<"Enter the operator (+ - / *) : ";
    cin>>op; // use cin to get enter value command
    cout<<"Enter the number one by one ";
    cin>>num1>>num2;
    switch(op){ // use switch and in it use op so we can add case of + - / *
    case '+':
    cout<<num1 <<op <<num2<<" = "<<num1+num2<<endl;
    break; // we use break so it will not go in another case
    case '-':
    cout<<num1 <<op <<num2<<" = "<<num1-num2<<endl;
    break;
    case '*':
    cout<<num1 <<op <<num2<<" = "<<num1*num2<<endl;
    break;
    case '/':
    if(num2 == 0.0){ // If the situation is zero than this will be print
        cout<<"This is a zero situation "<<endl;
    }
    else
    { // non-zero value case
        cout<<num1 <<op <<num2<<" = "<<num1/num2<<endl;
        
    }
    break;
    default: // this default print if no operator will match with codes
    cout<<"Operator is invalid"<<endl;
    break;
}
return 0;
}

//******************Thank you to visit parth codes*********************
