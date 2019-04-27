#include <iostream.h>
#include <conio.h>
void main()
{
int Bil;
clrscr();
cout<<"Masukkan Bilangan: ";
cin >> Bil;
switch (Bil)
{
case 1 : cout <<" Anda Memasukkan Bil.satu";
break;
case 2 : cout <<" Anda Memasukkan Bil.dua";
break;
case 3 : cout <<" Anda Memasukkan Bil.tiga";
break;
default : cout <<"Anda Memasukkan Bil Selain 1,2, dan 3";
break;
}
getch();
}
