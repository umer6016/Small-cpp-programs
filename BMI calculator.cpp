#include <iostream>


int main(){
    
    //Initializing variables for storing the body weight and height
    double body_weight{0}, height{0}; //List initialization is a feature in c++ 11

    //Prompting the user to enter their body weight in kilograms
    std::cout << "Enter your body weight in kilograms \n";

    //Taking the input from the user
    std::cin >> body_weight;

    //Prompting the user to enter their height in meters
    std::cout << "Enter your height in meters \n";

    //Taking the input from the user
    std::cin >> height;

    //Initializing a variable to store the value of BMI
    double BMI = body_weight / (height*height);

    //Giving prompts according to conditions set by some institution
    if (BMI < 18.5){
        std::cout<<"According to the Department of Health and Human Services/National Institutes of Health, " 
                 <<"you are under weight \n";
    }

    else if(BMI < 24.9){
        std::cout<<"According to the Department of Health and Human Services/National Institutes of Health, " 
                 <<"your BMI is normal \n";

    }

    else if(BMI < 29.9){
        std::cout<<"According to the Department of Health and Human Services/National Institutes of Health, " 
                 <<"you are overweight \n";

    }

    else {
        std::cout<<"According to the Department of Health and Human Services/National Institutes of Health, " 
                 <<"you are obese \n";

    }

    //Outputting the calculated BMI of the user
    std::cout<<"Your BMI is "<<BMI<<std::endl;

}