#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;
int main(){
//ortalamay� veren b�l�m.
	int array[500],a;
	float ortalama=0;
	for(int i=0;i<500;i++){
		array[i]=rand()%(100-1+1)+1;
		ortalama+=(float)array[i]/500;
	}
	cout<<"ortalama: "<<ortalama<<endl<<endl;
//k���kten b�y��e s�ralayan b�l�m.
	cout<<"kucukten buyuge siralama"<<endl;
	for(int i=0;i<500;i++){
	for(int j=i+1;j<500;j++){
		if(array[j]<array[i]){
			a=array[i];
			array[i]=array[j];
			array[j]=a;
		}
	}
	}
	cout<<"en buyuk:"<<array[499]<<endl;
	cout<<"en kucuk:"<<array[0]<<endl;
	int i=0,sayi=0;;

	//hangi say�dan ka� tane oldu�unu g�steren b�l�m.
	while(i<500){
	if(array[i]==array[i+1]){
		sayi++;
	}
	else if(array[i]!=array[i+1]){
		cout<<array[i]<<"'den "<<sayi<<" tane var"<<endl;
		sayi=0;
	}
	i++;
	}


//dizideki tek ve cift olarak ayr� dizilere ay�ran b�l�m.

int tek=0,cift=0;
for(int i=0;i<500;i++){
	if(array[i]%2==0){
		cift++;
	}
else{
	tek++;
}
}
int teksayi[tek],ciftsayi[cift],t=0,c=0;
for(int i=0;i<500;i++){
	if(array[i]%2==0){
		ciftsayi[c]=array[i];
		c++;
	}
	else{
		teksayi[t]=array[i];
		t++;
	}
}

//ortalamadan k���k olanlar� ve di�erlerini ayr� dizilere atayan b�l�m
int ortkucuk=0,ortbuyuk=0;
for(int i=0;i<500;i++){
if(array[i]<ortalama){
	ortkucuk++;
}
else{
	ortbuyuk++;
}
}
int ortalamadan_buyukler[ortbuyuk],ortalamadan_kucukler[ortkucuk];
int b=0,k=0;
for(int i=0;i<500;i++){
	if(array[i]<ortalama){
		ortalamadan_kucukler[k]=array[i];
		k++;
	}
else{
		ortalamadan_buyukler[b]=array[i];
		b++;
}
}	
	return 0;
}
