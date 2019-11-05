#include<iostream>
using namespace std;
float func(float x){
    float m = x*x*x-x-1;
    return m;
    }
float der(float x){
    float m= 3*x*x - 1;
    return m;
    }
int main(){
    float x0;   int i=1;
    cout<<"--------- Finding roots of an equation using 'NEWTON METHOD'----------\n\n";
    cout<<"F(x) = x^3 - x - 1\n";
    cout<<"F'(x) = 3x^2 -1\n";
    cout<<" Enter the value near the root : x0 = ";
    cin>>x0;
    float root=x0 - (func(x0)/der(x0));
    cout<<"F(x0) = "<<func(x0)<<endl;
    while(i<4){
            root = root - (func(root)/der(root));
            i++;
    }
    cout<<"\n\nROOT of above equation correct upto 6 decimal places : root =  "<<root<<endl;
    cout<<" F(root) = "<<func(root)<<endl;
    return 0;
}
