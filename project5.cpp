#include <iostream> 
#include <clocale> 
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
setlocale(LC_ALL, "Turkish");
	srand(time(NULL));

	int sayilar[500]; 
	int ortalama = 0;
	int toplam = 0;
	for (int i = 0; i<500; i++) {
	
		sayilar[i] = rand() % (35-10+1) + 10; 
		toplam += sayilar[i];
		ortalama = toplam / (i+1);
		while (ortalama > 30 || ortalama < 20) {
			toplam -= sayilar[i];
			sayilar[i] = rand() % (35-10+1) + 10;
			toplam += sayilar[i];
			ortalama = toplam / (i+1);
		}
	}
	cout<<"ortalama: "<<ortalama;
return 0;
}
