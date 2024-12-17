#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int array[500];
	for(int i=0;i<500;i++){
		array[i]=rand()%(100+1);
			cout<<"sayý["<<i+1<<"]: "<<array[i]<<endl;
	}
	return 0;
}
