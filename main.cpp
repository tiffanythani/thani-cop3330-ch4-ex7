/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tiffany Thani
 */

/*Exercise 7: Modify the ``mini calculator'' from exercise 5 to accept (just) single-digit numbers written as either digits or out
Exercise 5: Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math operations: add, subtract, multiply, and divide on two input values. Your program should prompt the user to enter three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and +; the program output should be "The sum of 35.6 and 24.1 is 59.7." In chapter 6, we look at a much more sophisticated simple calculator.
*/

#include <iostream>
#include <vector>
using namespace std;

string userinput1;
string userinput2;

vector<string> numbers {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

vector<string> digit{"0","1", "2", "3", "4", "5", "6", "7", "8", "9"};


int get_digits(string value){
    for(int i = 0; i < 10; ++i){
        if( value == numbers[i] || value == digit[i])
            return i;
            //cout << i << endl;
    }
    throw runtime_error("Incorrect input value");
}

  

int main() {
    string oper;
    double operand1;
    double operand2;
    //string result;
    cout<<"Please enter two single-digit numbers followed by the operator (+ ,- ,* , / )";

    while (cin>>userinput1>>userinput2>>oper) {
        //stuff that you want to repeat 

        operand1 = get_digits(userinput1);
        operand2 = get_digits(userinput2);
        //get_numbers();

        if (oper == "+")
        
            cout<< "The sum of " <<operand1<< " and " << operand2 << " is " <<operand1+operand2 <<endl;
        
        else if(oper == "-")
            cout<< "The difference between " <<operand1<< " and " << operand2 << " is " <<operand1-operand2 <<endl; 
        else if (oper == "*")
            cout<< "The product of " <<operand1<< " and " << operand2 << " is " <<operand1*operand2 <<endl;
        else if (oper =="/") 
            {
            if(operand2==0)
            {
                cout<<"Error! You cannot divide by zero.";
                continue;
            }
            else{
                cout<< "The quotient of " <<operand1<< " and " << operand2 << " is " <<operand1/operand2 <<endl;
            }

        }


    }


return 0;
}
