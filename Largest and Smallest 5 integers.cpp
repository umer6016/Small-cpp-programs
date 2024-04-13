#include <iostream>

int main(){

//Initializing the variables
int a{0},b{0},c{0},d{0},e{0};

//Prompting the user to enter the values for the variables
std::cout<<"Enter the values for evaluation /n";

//Collecting the input from the user
std::cin>>a>>b>>c>>d>>e;

//condition for 'a' being the largest
if(a>b && a>c && a>d && a>e)
std::cout<<a<<" is the largest \n";

//condition for 'a' being the largest
if(b>a && b>c && b>d && b>e)
std::cout<<b<<" is the largest \n";

//condition for 'a' being the largest
if(c>a && c>b && c>d && c>e)
std::cout<<c<<" is the largest \n";

//condition for 'a' being the largest
if(d>a && d>b && d>c && d>e)
std::cout<<d<<" is the largest \n";

//condition for 'a' being the largest
if(e>a && e>b && e>c && e>d)
std::cout<<e<<" is the largest \n";


//condition for 'a' being the smallest
if(a<b && a<c && a<d && a<e)
std::cout<<a<<" is the smallest \n";

//condition for 'a' being the smallest
if(b<a && b<c && b<d && b<e)
std::cout<<b<<" is the smallest \n";

//condition for 'a' being the smallest
if(c<a && c<b && c<d && c<e)
std::cout<<c<<" is the smallest \n";

//condition for 'a' being the smallest
if(d<a && d<b && d<c && d<e)
std::cout<<d<<" is the smallest \n";

//condition for 'a' being the smallest
if(e<a && e<b && e<c && e<d)
std::cout<<e<<" is the smallest \n";

}