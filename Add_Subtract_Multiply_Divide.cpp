#include <iostream>

int main(){

std::cout<<"Enter two numbers \n";

//Initializing int type variables a and b
double a{0},b{0};

//Prompting the user for input for the two variables
std::cout<<"Enter the value for the two variables \n";
std::cin>>a>>b;

//Displaying the sum of the two variables
std::cout<<"The sum of the two variables is = "<<a+b<<std::endl;

//Displaying the difference of the two variables 
std::cout<<"The difference of the two variables is = "<<a-b<<std::endl;

//Displaying the product of the two variables
std::cout<<"The product of the two variables is = "<<a*b<<std::endl;

//Displaying the quotient of the two variables 
std::cout<<"The quotient of the two variables is = "<<a/b<<std::endl;

}