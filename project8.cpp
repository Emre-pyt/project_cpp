#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	srand(time(NULL));
	float array[500];
	for(int i=0;i<500;i++){
		array[i]=(float)rand()/(float)RAND_MAX;
		cout<<array[i]<<endl;
	}
	return 0;
}
