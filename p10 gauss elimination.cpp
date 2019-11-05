#include<iostream>
using namespace std;
int main(){
    float aug[3][4];
    cout<<"----------Solving a Linear Equation using 'Gauss Elimination Method'-----------\n ";
    for(int i=0;i<3;i++){
                cout<<"Enter the Coeff. of X , Y, Z and constt for "<<i<<"  equation : \n";
                cout<<"a"<<i<<" =\t"; cin>>aug[i][0];
                cout<<" b"<<i<<" =\t"; cin>>aug[i][1];
                cout<<" c"<<i<<" =\t"; cin>>aug[i][2];
                cout<<" d"<<i<<" =\t"; cin>>aug[i][3];
                cout<<"\n";
            }
    for(int i=0;i<4;i++)
        aug[0][i]=aug[0][i]/aug[0][0];                  // '1' is created in A11
    for(int i=0;i<4;i++){
            aug[1][i]= aug[1][i]- aug[0][i]*aug[1][0];
            aug[2][i]= aug[2][i]- aug[0][i]*aug[2][0];            // '0, created in A11 and A21
    }

    for(int i=0;i<4;i++)
        aug[1][i]=aug[1][i]/aug[1][1];                  // '1' is created in A22
    for(int i=0;i<4;i++){
        aug[2][i] = aug[2][i] - aug[2][1]*aug[1][i];    // '0' is created in A32
        aug[0][i] = aug[0][i] - aug[0][1]*aug[1][i];    // '0' is created in A12
        }
    for(int i=0;i<4;i++)
        aug[2][i]= aug[2][i]/aug[2][2];                 // '1' is created in A33
    for(int i=0;i<4;i++){
        aug[0][i]= aug[0][i]- aug[2][i]*aug[0][2];      // '0' is created in A13
        aug[1][i]= aug[1][i]-aug[2][i]*aug[1][2];       //'0' is created in A23
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<aug[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"X = "<<aug[0][3]<<"\t Y = "<<aug[1][3]<<"\t Z = "<<aug[2][3]<<"\n";
    return 0;
}
