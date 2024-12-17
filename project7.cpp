#include <iostream>  
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	float sayilar[500]; 
	float tamsayilar[500];
	float kesirlisayilar[500];
	for (int i=0;i<500;i++) {
		tamsayilar[i]=rand() % (100-0+1)-0;
		kesirlisayilar[i]=(float)rand()/(float)RAND_MAX;
		sayilar[i]=tamsayilar[i]+kesirlisayilar[i];
		cout<<"["<<i+1<<"]: "<<sayilar[i]<<endl;
	}
return 0;
}
