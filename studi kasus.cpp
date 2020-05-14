#include<iostream>
#include <math.h>
using namespace std;

int main()
{
char NAMA_A[30], NAMA_B[30], NAMA_C[30],NAMA_D[30], NAMA_E[30];
char NIM_A[30], NIM_B[30], NIM_C[30], NIM_D[30], NIM_E[30];
float p,l,t,v;
float a,b,c,w,x,hasil,terkecil;

cout<<"=========bagian A=========";
cout<<"\nmasukkan nama:";
cin>>NAMA_A;
cout<<"masukkan NIM:";
cin>>NIM_A;
cout<<"\nmasukkan nama:";
cin>>NAMA_B;
cout<<"masukkan NIM:";
cin>>NIM_B;
cout<<"\nmasukkan nama:";
cin>>NAMA_C;
cout<<"masukkan NIM:";
cin>>NIM_C;
cout<<"\nmasukkan nama:";
cin>>NAMA_D;
cout<<"masukkan NIM:";
cin>>NIM_D;
cout<<"\nmasukkan nama:";
cin>>NAMA_E;
cout<<"masukkan NIM:";
cin>>NIM_E;
cout<<"=============================";
cout<<"\nNama ketua : "<<NAMA_A;
cout<<"\nNIM ketua : "<<NIM_A;
cout<<"\nNama anggota 1 : "<<NAMA_B;
cout<<"\nNIM anggota 1 : "<<NIM_B;
cout<<"\nNama anggota 2 : "<<NAMA_C;
cout<<"\nNIM anggota 2 : "<<NIM_C;
cout<<"\nNama anggota 3 : "<<NAMA_D;
cout<<"\nNIM anggota 3 : "<<NIM_D;
cout<<"\nNama anggota 4 : "<<NAMA_E;
cout<<"\nNIM anggota 4 : "<<NIM_E;
cout<<"=============================";

cout<<"\n\n=========bagian B=========";
cout<<"\n /NO.1\ \n";
cout<<"\nmasukan panjang balok :";
cin>>p;
cout<<"masukan lebar balok :";
cin>>l;
cout<<"masukan tinggi balok :";
cin>>t;
v=p*l*t;
cout<<"volume balok adalah :"<<v;

cout<<"\n / NO.2\ \n";
cout<<"\nAngka Terakhir Nim ketua: ";
cin>>a;
cout<<"Kelompok : ";
cin>>b;
cout<<"Angkatan : ";
cin>>c;
a++;
b--;
hasil =(pow(b,2)-4*a*c);
w = (sqrt(-hasil));
x = ((-b+w) / (2*a));
cout<< "x = "<<x<<endl;
terkecil= (x<v)?x:v;
cout<<"\n\nhasil terkecil adalah "<<terkecil;
return 0;}
