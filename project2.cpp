#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <iomanip>
using namespace std;
int main(){
setlocale(LC_ALL,"Turkish");
	int A[3][3],B[3][3],C[3][3],C2[3][3],detA,detB;
		cout<<"A matrisi"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "A[" << i << "][" << j << "]: ";
			cin>>A[i][j];
		}
	}
cout<<endl;
cout<<"B matrisi"<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout << "B[" << i << "][" << j << "]: ";
		cin>>B[i][j];
	}
}
cout<<"A+B"<<endl<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	C[i][j]=A[i][j] + B[i][j];	
	}
}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<C[i][j]<<" ";
	}
cout<<endl;
}
cout<<"A*B"<<endl<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            C2[i][j] = 0;
            for (int t = 0; t < 3; t++){
            C2[i][j] += A[i][t]*B[t][j];
            }
        }
    }
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<C2[i][j]<<" ";
	}
cout<<endl;
   cout<<"Det A:";
    detA=(A[0][0]*A[1][1]*A[2][2] + A[1][0]*A[2][1]*A[0][2] + A[2][0]*A[0][1]*A[1][2])-(A[0][2]*A[1][1]*A[2][0] + A[1][2]*A[2][1]*A[0][0] + A[2][2]*A[0][1]*A[1][0]);
    cout<<detA<<endl;
    cout<<"Det B:";
    detB=(B[0][0]*B[1][1]*A[2][2] + B[1][0]*B[2][1]*B[0][2] + B[2][0]*B[0][1]*B[1][2])-(B[0][2]*B[1][1]*B[2][0] + B[1][2]*B[2][1]*B[0][0] + B[2][2]*B[0][1]*B[1][0]);
    cout<<detB<<endl;
}
	return 0;

}
