#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int ciro[5][12],year,year2;
	double ortciro[5],ceyrekciro[3];
	for(int i=0;i<5;i++){
		for(int j=0;j<12;j++){
			ciro[i][j]=rand()%(5000-100+1)+100;
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<12;j++){
			ortciro[i]+=ciro[i][j]/12;
		}
	}
	cout<<"girilen yýlýn ortalama cirosunu öðrenmek için yýl girin: ";
	cin>>year;
	if(year==1){
		for(int i=0;i<12;i++){
			if(ortciro[0]<ciro[0][i]){
				cout<<i+1<<". ay ciro:"<<ciro[0][i]<<endl;
			}
		}
	}
	else if(year==2){
				for(int i=0;i<12;i++){
			if(ortciro[1]<ciro[1][i]){
				cout<<i+1<<". ay ciro:"<<ciro[1][i]<<endl;
			}
		}
	}
	else if(year==3){
				for(int i=0;i<12;i++){
			if(ortciro[2]<ciro[2][i]){
				cout<<i+1<<". ay ciro:"<<ciro[2][i]<<endl;
			}
		}
	}
	else if(year==4){
				for(int i=0;i<12;i++){
			if(ortciro[3]<ciro[3][i]){
				cout<<i+1<<". ay ciro:"<<ciro[3][i]<<endl;
			}
		}
	}
	else if(year==5){
				for(int i=0;i<12;i++){
			if(ortciro[4]<ciro[4][i]){
				cout<<i+1<<". ay ciro:"<<ciro[4][i]<<endl;
			}
		}
	}
	cout<<"girilen yýlýn her çeyreðinin ortlamasýný öðrenmek için yýl girin: ";
	cin>>year2;
	if(year2==1){
			for(int i=0;i<3;i++){
				ceyrekciro[0]+=ciro[0][i]/3;
			}
			for(int i=3;i<6;i++){
				ceyrekciro[1]+=ciro[0][i]/3;
			}
			for(int i=6;i<9;i++){
				ceyrekciro[2]+=ciro[0][i]/3;
			}
			for(int i=9;i<12;i++){
				ceyrekciro[3]+=ciro[0][i]/3;
			}
	}
	if(year2==2){
			for(int i=0;i<3;i++){
				ceyrekciro[0]+=ciro[1][i]/3;
			}
			for(int i=3;i<6;i++){
				ceyrekciro[1]+=ciro[1][i]/3;
			}
			for(int i=6;i<9;i++){
				ceyrekciro[2]+=ciro[1][i]/3;
			}
			for(int i=9;i<12;i++){
				ceyrekciro[3]+=ciro[1][i]/3;
			}
	}
	if(year2==3){
			for(int i=0;i<3;i++){
				ceyrekciro[0]+=ciro[2][i]/3;
			}
			for(int i=3;i<6;i++){
				ceyrekciro[1]+=ciro[2][i]/3;
			}
			for(int i=6;i<9;i++){
				ceyrekciro[2]+=ciro[2][i]/3;
			}
			for(int i=9;i<12;i++){
				ceyrekciro[3]+=ciro[2][i]/3;
			}
	}
	if(year2==4){
			for(int i=0;i<3;i++){
				ceyrekciro[0]+=ciro[3][i]/3;
			}
			for(int i=3;i<6;i++){
				ceyrekciro[1]+=ciro[3][i]/3;
			}
			for(int i=6;i<9;i++){
				ceyrekciro[2]+=ciro[3][i]/3;
			}
			for(int i=9;i<12;i++){
				ceyrekciro[3]+=ciro[3][i]/3;
			}
	}
	if(year2==5){
			for(int i=0;i<3;i++){
				ceyrekciro[0]+=ciro[4][i]/3;
			}
			for(int i=3;i<6;i++){
				ceyrekciro[1]+=ciro[4][i]/3;
			}
			for(int i=6;i<9;i++){
				ceyrekciro[2]+=ciro[4][i]/3;
			}
			for(int i=9;i<12;i++){
				ceyrekciro[3]+=ciro[4][i]/3;
			}
	}
		for(int i=0;i<4;i++){
		cout<<i+1<<". çeyrek: "<<ceyrekciro[i]<<endl;
	}
	return 0;
}
