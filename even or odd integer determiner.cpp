#include <iostream>

int main(){
//Initializing the integer
int x{0};

//Prompting the user to enter a value for the variable
std::cout<<"Enter a value for the variable \n";
std::cin >> x ;

//Implementing the condition for the number being even
if (x % 2 == 0)
std::cout << "The number \""<< x <<"\" is an even number \n";

//If the number is not even then it will be odd
else 
std::cout << "The number \""<< x << "\" is an odd number \n";
}