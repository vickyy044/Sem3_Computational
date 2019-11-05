#include<iostream>
using namespace std;
float func(float x){
    float m= 1/(1+ x*x);
    return m;
    }
int main(){
    int a,b,n;
    cout<<"--------Numerical Integration using 'TRAPEZOIDAL RULE'-----------\n";
    cout<<"\t\t\tF(x) = 1/(1 + x^2) \n\n";
    cout<<"Enter the upper limit :\n ";
    cin>>b;
    cout<<"Enter the lower limit :\n ";
    cin>>a;
    cout<<"Enter the no. of intervals : n = \n";
    cin>>n;
    float h=(b-a)/n,sum1=0,sum2=0;
    for(int i=0;i<=n;i++){
            if(i==0||i==n){
                sum1=sum1+func(a+i*h);
            }
            else {
                sum2=sum2+ func(a+i*h);
            }
    }
    float ans = (h*(sum1+2*sum2))/2;
    cout<<"\n\t\t\t Solution : \t"<<ans;
    return 0;
}
