#include <iostream>

/*(Multiples) Write a program that reads in two integers and
determines and prints if the first is a multiple of the second.
[Hint: Use the remainder operator ( % ).*/
int main(){

//Initializing the two integers
int x{0},y{0};

//Prompting the user to input values for the two integers
std::cout<<"Enter values for both x and y \n";
std::cin>>x>>y;

//The condition for y being a multiple of x
if( x % y == 0)
std::cout<< y <<" is a multiple of "<< x << std::endl;

//The condition for x being a multiple of y
if( y % x == 0)
std::cout<< x <<" is a multiple of "<< y << std::endl;

//The condition for both x and y not being multiples of eachother
if (x % y != 0 || y % x != 0)
std::cout<<"Neither is a multiple of the other "<< std::endl;
}