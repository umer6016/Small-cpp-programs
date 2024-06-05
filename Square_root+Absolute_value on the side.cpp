#include<iostream>
using namespace std;

double abs_val(double a){
    if(a<0){
        return -a;
    }
    else{
        return a;
    }
}

int main(){
    double q,w{0};

    cout<<"Enter the number you want to find the square root of : "<<endl;
    cin>>q;
    w=0;
    while (abs_val(w*w-q)>0.2)
    {
        w+=0.1;
    }
    cout<<w;
}