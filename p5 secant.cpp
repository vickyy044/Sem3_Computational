#include<iostream>
using namespace std;
float f(float x){
    float y=x*x*x - x-1;
    return y;
}
int main(){
    float a,b,root;
    cout<<"Approximation of roots using SECANT Method \n";
    cout<<"F(x) = x^3 - x - 1\n";
    cout<<"Enter the values of 'a' and 'b' \n";
    cin>>a>>b;
    if(f(a)*f(b)>0)
        cout<<"Entered values of 'a' and 'b' are wrong \n";
    else{
        root= (a*f(b)-b*f(a))/(f(b)-f(a));
        while (f(root)==0.0000){
                a=root;
            root=(a*f(b)-b*f(a))/(f(b)-f(a));
        }
        cout<<"Root correct upto 4 decimal places : x = "<<root;
    }

}
