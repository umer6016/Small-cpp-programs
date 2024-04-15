#include <iostream>

int main(){
    //Initializing the variables 
    int a{0},a1{0},a2{0},a3{0},a4{0},a5{0};
    
    //Prompting the user to enter the 5 digit integer
    std::cout<<"Enter the 5 digit integer \n";
    std::cin>> a ;

    //Seperating the first digit
    a1 = (a/10000) ;

    //Seperating the 2nd digit
    a2 = (a/1000) % 10 ;

    //Seperating the third digit 
    a3 = (a/100) % 10 ;

    //Seperating the 4th digit
    a4 = (a/10) % 10 ;

    //Seperating the 5th digit
    a5 = (a%10);

    std::cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" \n";
}