#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	cout << "L�tfen 0 ile 1000 (not inclusive) aras�nda bir say� giriniz" << endl;
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
			cout << "y�z";
			break;
		case 2:
			cout << "ikiy�z";
			break;
		case 3:
			cout << "��y�z";
			break;
		case 4:
			cout << "d�rty�z";
			break;
		case 5:
			cout << "be�y�z";
			break;
		case 6:
			cout << "alt�y�z";
			break;
		case 7:
			cout << "yediy�z";
			break;
		case 8:
			cout << "sekizy�z";
			break;
		case 9:
			cout << "dokuzy�z";
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
			cout << "k�rk";
			break;
		case 5:
			cout << "elli";
			break;
		case 6:
			cout << "altm��";
			break;
		case 7:
			cout << "yetmi�";
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
			cout << "��";
			break;
		case 4:
			cout <<"d�rt";
			break;
		case 5:
			cout <<"be�";
			break;
		case 6:
			cout <<"alt�";
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
