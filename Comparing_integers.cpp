#include<iostream>

int main(){
//Initializing the integers
int x{0},y{0};

//Prompting the user to enter the values for the two variables
std::cout<<"Enter the value for the two variables \n"<<std::endl;
std::cin>>x>>y;


//Implementing the condition when the two numbers are equal
if(x==y)
std::cout<<"The numbers are equal";

//Implementing the condition where either is greater than the other
else if(x>y)
std::cout<<x<<" is larger \n";
else
std::cout<<y<<" is larger \n";
}