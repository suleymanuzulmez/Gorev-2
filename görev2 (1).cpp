#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	cout << "Lütfen 0 ile 1000 (not inclusive) arasýnda bir sayý giriniz" << endl;
	int x;
	
	cin >> x;
		
	int a = x % 10;
	x = x - a;
	int b = (x / 10) % 10;
	x = x- (b*10);
	int c = x / 100;
	
	
	switch(c){
		case 0:
			break;
		case 1:
			cout << "yüz";
			break;
		case 2:
			cout << "ikiyüz";
			break;
		case 3:
			cout << "üçyüz";
			break;
		case 4:
			cout << "dörtyüz";
			break;
		case 5:
			cout << "beþyüz";
			break;
		case 6:
			cout << "altýyüz";
			break;
		case 7:
			cout << "yediyüz";
			break;
		case 8:
			cout << "sekizyüz";
			break;
		case 9:
			cout << "dokuzyüz";
			break;
	
	}
	switch (b){
		case 0:
			break;
		case 1:
			cout << "on";
			break;
		case 2:
			cout << "yirmi";
			break;
		case 3:
			cout << "otuz";
			break;
		case 4:
			cout << "kýrk";
			break;
		case 5:
			cout << "elli";
			break;
		case 6:
			cout << "altmýþ";
			break;
		case 7:
			cout << "yetmiþ";
			break;
		case 8:
			cout << "seksen";
			break;
		case 9:
			cout << "doksan";
			break;

			
	}
	switch(a){
		case 0:
			break;
		case 1:
			cout << "bir";
			break;
		case 2:
			cout << "iki";
			break;
		case 3:
			cout << "üç";
			break;
		case 4:
			cout <<"dört";
			break;
		case 5:
			cout <<"beþ";
			break;
		case 6:
			cout <<"altý";
			break;
		case 7:
			cout <<"yedi";
			break;
		case 8:
			cout <<"sekiz";
			break;
		case 9:
			cout <<"dokuz";
			break;
			
			
		
	}
	return 0;
}
