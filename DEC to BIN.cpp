#include<iostream>
using namespace std;
int main(){
int dec,a[10];
cout<<"Enter the Decimal Number\n";
cin>>dec;
int q=dec;
cout<<"Binary Equivalent of entered Decimal no. is : \n";
for(int i=0;i<10;i++){
    a[i]=q%2;
    q=q/2;
}
for(int j=0;j<10;j++)
    cout<<a[9-j]<<"\t";
 return 0;
}
