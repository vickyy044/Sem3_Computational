#include<iostream>
using namespace std;
float func(float x){
    float m= 1/(1+ x*x);
    return m;
    }
int main(){
    int a,b,n;
    cout<<"--------Numerical Integration using 'SIMPSON 3/8 RULE'-----------\n";
    cout<<"\t\t\tF(x) = 1/(1 + x^2) \n\n";
    cout<<"Enter the upper limit :\n ";
    cin>>b;
    cout<<"Enter the lower limit :\n ";
    cin>>a;
    cout<<"Enter the no. of intervals( 'N' must be multiple of 3) : n = \n";
    cin>>n;
    if(n%3!=0)
        cout<<"ERROR , 'n' must be a multiple of three\n";
    else{
     float h=(b-a)/n,sum1=0,sum2=0,sum3=0;
        for(int i=0;i<=n;i++){
                if(i==0||i==n)
                    sum1=sum1+func(a+i*h);
                else if(i%3==0)
                    sum2=sum2+ func(a+i*h);
                else sum3=sum3 + func(a+i*h);
                }
        float ans = (3*h*(sum1+ 2*sum2 + 3*sum3 ))/8;
        cout<<"\n\t\t\t Solution : \t"<<ans;
    }
    return 0;
}
