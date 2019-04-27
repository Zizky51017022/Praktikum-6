#include <conio.h>
#include <iostream.h>

main () {
int A, B, C, Maks;
cout << "A : ";
cin >> A;
cout << "B : ";
cin >> B;
cout << "C : ";
cin >> C;
if  ((A > B) && (A > C))
Maks = A;
if  ((B > A) && (B > C))
Maks = B;
else
Maks = B;
cout <<"Bilangan Terbesar Adalah " << Maks;
getch ();
return 0;
}


