#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

main ()
{
ifstream odczyt("dane.txt");
ofstream zapis("wyniki.txt");

string tab[10];
int i=0;

if (odczyt)
cout<<"tekst z pliku: "<<endl;
{
while(!odczyt.eof())

{
odczyt>>tab[i];
cout<<tab[i]<<" ";
i++;
}

cout<<endl;
}
cout<<"tekst zmieniony: "<<endl;
for (int j=0;j<i;j++)

{
tab[j][0]=toupper(tab[j][0]);
cout<<tab[j]<<" ";
zapis<<tab[j]<<" ";
}

cout<<endl;
zapis.close();
odczyt.close();


return 0;
}
