#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
char odp[3];
float a,b,c;
float x1,x2;
float delta;
cout << "Nasze rownanie: a*x^2+b*x+c=0\n";
powturz:
cout << "Podaj a:";
cin >> a;
cout <<"Podaj b:";
cin >> b;
cout <<"Podaj c:";
cin >> c;
delta = (b*b-4*a*c);
cout <<"delta =" << delta << endl;
if (delta < 0){
    cout <<"Brak rozwiazan, delta ujemna.\n\n";
    }
else if (delta == 0){
    x1=(-b)/(2*a);
    cout << "x1=" << x1 <<"\n\n";
    }
else {
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    cout<<"x1=" << x1 << " x2="<< x2<< "\n\n";
    }
    cout <<"Czy chcesz podac nastepne dane do olbiczen?\n wpisz: Tak lub Nie\n";
    odpowiedz:
    cin >> odp;
    if (stricmp(odp, "tak") == 0)
        goto powturz;
        else if (stricmp(odp, "nie") == 0)
            return 0;
        else
            cout<<"Bledna odpowiedz\n";
            goto odpowiedz;

return 0;
}
