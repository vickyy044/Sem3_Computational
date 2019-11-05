#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
float val[4],sum=0;
cout<<"Enter the values of root calculated by experimentation\n";
for(int i=0;i<4;i++)
{   cin>>val[i];
    sum=sum+val[i];
}
float avg=sum/4,absolute,rel,relpercentage;
cout<<"Average Value of Root is :\t"<<avg<<endl;
for(int i=0;i<4;i++){
    absolute=abs(val[i]- avg);
    rel=absolute/avg;
    relpercentage=(abs(val[i]- avg)/avg)*100;
    cout<<"Absolute error for observation no. "<<i+1<<" is "<<absolute<<endl;
    cout<<"Relative error for observation no. "<<i+1<<" is "<<rel<<endl;
    cout<<"Relative Percentage error for observation no. "<<i+1<<" is "<<relpercentage<<"%"<<endl;
    cout<<"\n\n\n";
}
return 0;
}
