#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
using namespace std;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"Turkish");
	int numbers[500];
	for(int i=0;i<500;i++){
		numbers[i]=rand()%(35-25+1)+25;
				cout<<"sayý["<<i+1<<"]: "<<numbers[i]<<endl;
	}
	return 0;
}
