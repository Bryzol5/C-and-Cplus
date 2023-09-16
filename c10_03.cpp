#include <iostream>
#include<fstream>
#include <cmath>
using namespace std;

void suma(int* tab,int numer)
{
    int suma=0;
  for(int i=0; i<numer;i++)
   suma+=tab[i];
   cout<<"suma: "<<suma<<endl;
}

void srednia_aryt(int* tab,int numer)
{
      int suma=0;
  for(int i=0; i<numer;i++)
   suma+=tab[i];
   cout<<"srednia arytmetyczna: "<<suma/numer<<endl;
}

void srednia_geom(int* tab,int numer)
{
      int iloczyn=1;
  for(int i=0; i<numer;i++)
   iloczyn*=tab[i];

   cout<<"srednia geometryczna: "<<pow(iloczyn,1.0/numer)<<endl;
}

typedef void (*funkcja)(int *,int);

int main()
{
fstream plik;
int *tab;
int numer;
funkcja nowa_funkcja=suma;
funkcja nowa_funkcja2=srednia_aryt;
funkcja nowa_funkcja3=srednia_geom;
plik.open("dane.txt");

plik>>numer;

tab = new int [numer];
for(int i=0; i<numer;i++)
    plik>>tab[i];

    plik.close();

nowa_funkcja(tab,numer);
nowa_funkcja2(tab,numer);
nowa_funkcja3(tab,numer);

delete(tab);
return 0;
}
