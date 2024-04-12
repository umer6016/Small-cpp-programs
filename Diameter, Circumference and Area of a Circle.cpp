#include <iostream>

//(Diameter, Circumference and Area of a Circle) 

int main(){

//Initializing the radius of the circle
int radius{0};

//Prompting the user to enter the radius of the circle
std::cout<<"Enter the radius of the circle \n";
std::cin>>radius;

//Printing the diameter
std::cout<<"The diameter of the circle is = "<<radius*2<<std::endl;

//Printing the circumference of the circle
std::cout<<"The circumference of the circle is = "<<2*radius*3.14159<<std::endl;

//Printing the area of the circle
std::cout<<"The area of the circle is = "<<3.14159*radius*radius<<std::endl;

}