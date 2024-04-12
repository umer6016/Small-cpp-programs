#include <iostream>

//Implementing the main function
int main(){

//Initializing the variables which will be used for the arithmetic calculations
int a{0},b{0},c{0};

//Prompting the user to enter the variables' values
std::cout<<"Input three differen integers ";

//Taking the input for 3 the three different variables from the user
std::cin>>a>>b>>c;

//Implementing the sum of the 3 variables
std::cout<<std::endl<<"The sum is "<< a+b+c << std::endl;

//Implementing the average of the 3 variables
std::cout<<"The average is "<< (a+b+c)/3 << std::endl;

//Implementing the product of the 3 variables
std::cout<<"The product is "<< (a*b*c) << std::endl;

//Now for the largest and the smallest integer we will implement if statements
if(a>b && a>c)
std::cout<<"The largest is "<<a<<std::endl;

if(b>a && b>c)
std::cout<<"The largest is "<<b<<std::endl;

if(c>a && c>b)
std::cout<<"The largest is "<<c<<std::endl;

if (a<b && a<c)
std::cout<<"The smallest is "<<a<<std::endl;

if(b<a && b<c)
std::cout<<"The smallest is "<<b<<std::endl;

if(c<a && c<b)
std::cout<<"The smallest is "<<c<<std::endl;

}
