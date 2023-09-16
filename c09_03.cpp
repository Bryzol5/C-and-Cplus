#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main() {
     unsigned long i;
     string tekst,temp_s;
     stringstream wiersze1;
     string wierszenapis;
     int wiersze=0, slowa=0, z_czarne=0, spacje=0;
     cout<<"Wpisz dowolny tekst i zakoncz go wyrazem 'koniec' w nowym wierszu:"<<endl;
     cin>>tekst;
     while(getline(cin,temp_s),temp_s!="KONIEC" && temp_s!="koniec")
     tekst+=(temp_s+'\n');
     for (i=1;i<=tekst.length();i++){
     if (tekst[i]=='\n') wiersze++;
     if (tekst[i]==' ') spacje++;
     if (tekst[i]!=' ' && tekst[i]!='\n' && tekst[i]!='\t') {z_czarne++;
     if (tekst[i-1]==' ' || tekst[i-1]=='\n') slowa++;
     }}
     wiersze1 << wiersze;
     wierszenapis = wiersze1.str();
     cout<<"\n---Wpisany tekst---\n"<<tekst<<"\n----Koniec tekstu---"<<endl<<endl;
cout<<"Spacje:"<<spacje<<" Znaki czarne:"<<z_czarne<<" Wiersze:"<<wierszenapis<<" Slowa:"<<slowa;
     return 0;
}
