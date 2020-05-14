#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main (){
char a[30];
float Nbonus;
int Nkasihan;
cout<< "Masukan nilai : ";
cin >> a;
Nkasihan = atoi (a) + 12.5;
Nbonus = atof (a) + 7.5;
cout << "Nilai Akhir A:"<<Nbonus;
cout << "\nNilai Akhir B:"<<Nkasihan;
getch ();
}
