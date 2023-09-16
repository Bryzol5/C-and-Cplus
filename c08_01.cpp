#include <iostream>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cout<<"Podaj ile ma byc wierszy: ";
    cin>> n;
    cout<<"Podaj ile ma byc kolumn: ";
    cin>> m;
    cout<<endl;
    for(k=0;k<=m;k++){
        cout<<k<<"\t";

    }
        cout<<endl<<endl;

  for(i=1;i<=n;i++) //wiersze
    {
        cout<<i<<"||"<<"\t";


    for(j=1;j<=m;j++) //kolumny
    {
       cout << (i*j) << "\t" ;
    }
cout <<"\n";
  }

    return 0;

}
