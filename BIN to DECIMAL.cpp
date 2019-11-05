#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int bin[8];
cout<<"Enter the 8-Bit binary number\n";
for(int j=0;j<8;j++)
cin>>bin[j];
int sum=0;
for(int i=0;i<8;i++){
    sum=sum+ bin[i]*pow(2,7-i);
}
cout<<"\nDecimal Equivalent of entered Binary no. is  : "<<sum;
return 0;
}
