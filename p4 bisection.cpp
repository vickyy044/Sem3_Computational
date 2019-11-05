#include<iostream>
using namespace std;
float f(float x){
float y=(x*x*x)-x-4;
return y;
}
int main(){
    float a,b;
    int i=10;
    cout<<"Estimation of roots using Bisection Method\n\n";
    cout<<"F(x) = x^3 - x - 4\n";
    cout<<"Enter the values of 'a' and 'b' \n";
    cin>>a>>b;
    float root;
    if(f(a)*f(b)>0)
        cout<<"Entered Value of 'a' and 'b' is wrong\n";
    else{
        while(i>0)
        {   root=(a+b)/2;
            cout<<11-i<<" approx. root = "<<root<<"\n F(root) = "<<f(root)<<endl;
            if(f(root)<0)
                a=root;
            else b=root;
            i--;
        }
    cout<<"Final Approximate root using BISECTION METHOD : x = "<<root;
    }
    return 0;
}
