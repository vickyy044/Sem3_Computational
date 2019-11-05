#include<iostream>
using namespace std;
float    lagrangefunc(int x[],float y[],int a);
float lagrangefunc(int x[],float y[],int a){
    float sum1= ((a-x[1])*(a-x[2])*(a-x[3])*(a-x[4])*y[0])/((x[0]-x[1])*(x[0]-x[4])*(x[0]-x[2])*(x[0]-x[3]));
    float sum2= ((a-x[0])*(a-x[2])*(a-x[3])*(a-x[4])*y[1])/((x[1]-x[0])*(x[1]-x[4])*(x[1]-x[2])*(x[1]-x[3]));
    float sum3= ((a-x[0])*(a-x[1])*(a-x[3])*(a-x[4])*y[2])/((x[2]-x[1])*(x[2]-x[4])*(x[2]-x[0])*(x[2]-x[3]));
    float sum4= ((a-x[0])*(a-x[1])*(a-x[2])*(a-x[4])*y[3])/((x[3]-x[1])*(x[3]-x[4])*(x[3]-x[2])*(x[3]-x[0]));
    float sum5= ((a-x[1])*(a-x[2])*(a-x[3])*(a-x[0])*y[4])/((x[4]-x[1])*(x[4]-x[0])*(x[4]-x[2])*(x[4]-x[3]));
    return sum1+sum2+sum3+sum4+sum5;
}
int main(){
    cout<<"-----------Interpolation using 'LAGRANGE'S FORMULAE'----------\n";
    cout<<"The no. of data entries : 5\n ";
    int x[5],a;float y[5];
    for(int i=0;i<5;i++){
        cout<<"x"<<i<<" =\t ";
        cin>>x[i];
        cout<<"y"<<i<<" =\t ";
        cin>>y[i];
        cout<<"\n";
   }
   cout<<"Enter the value of 'x' for which you want to find value of function 'y'\n";
   cin>>a;


   cout<<"\nValue of func. at x ="<<a<<"\t F(x) = "<<lagrangefunc(x,y,a)<<endl;
   return 0;
}
