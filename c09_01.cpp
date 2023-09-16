#include <iostream>
#include <math.h>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main(){
fstream plik;
plik.open("dane.txt", ios::in);
fstream plik2;
plik2.open("wyniki.txt",ios::out);
if(plik.good()==false){
    cout<<"Nie otwiera sie";
    return 0;
}
        while( !plik.eof() ){
float a,b,c;
float x1,x2;
float delta;
cout << "Nasze rownanie: a*x^2+b*x+c=0\n";
plik >> a;
cout << "a: "<<a<<endl;
plik >> b;
cout << "b: "<<b<< endl;
plik >> c;
cout << "c: "<<c<<endl;
delta = (b*b-4*a*c);
cout <<"delta =" << delta << endl;
if (delta < 0){
    cout <<"Brak rozwiazan, delta ujemna.\n\n";plik2<<"delta ujemna \n";
    }
else if (delta == 0){
    x1=(-b)/(2*a);
    cout << "x1=" << x1 <<"\n\n";plik2<<"x1= \n"<<x1;
    }
else {
    x1=(-b-sqrt(delta))/(2*a);plik2<<"x1= "<<x1<<endl;
    x2=(-b+sqrt(delta))/(2*a);plik2<<"x2= "<<x2<<endl;
    cout<<"x1=" << x1 << " x2="<< x2<< "\n\n";
    }
            }
        plik.close();
        plik2.close();

return 0;
}
