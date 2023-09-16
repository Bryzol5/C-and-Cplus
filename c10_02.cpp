#include <iostream>
using namespace std;

void wczytaj_macierz (int m, int n, float macierz[3][3])
{
        cout << "Macierz " << endl;
        int i,j;
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
                cout << "Podaj element [" <<i+1 <<"]["<<j+1<<"]:" << endl;
                cin >> macierz[i][j];
        }

        cout<<"Pierwszy diagonal:"<< (macierz[0][0] + macierz[1][1] + macierz[2][2])<<endl;
        cout<<"Drugi diagonal:"<< (macierz[0][2] + macierz[1][1] + macierz[2][0])<<endl;


        cout << endl << endl;
}

void wypisz_macierz (int m,int n, float macierz[3][3])
{
        int i,j,s;
        cout << "Macierz " << " ma postac:" << endl;
        for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
                cout << macierz[i][j] << "   ";
                cout << endl;
        }

        cout<<"podaj liczbe skalarna przez jaka chcesz przemnozyc: ";
        cin>>s;

        cout<<"Macierz po przemnozeniu wyglada tak:\n";
        for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
                cout << macierz[i][j] *s << "   ";
                cout << endl;
        }
        cout<<endl;

        cout<<"Iloczyn tej macierzy przez sama siebie wynosi: \n";

        for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                        cout << macierz[i][j] * macierz[i][j] << "   ";
                        cout << endl;
                }
}

int main()
{

        int m=3,n=3;
        float A[3][3];

        cout << "Witaj w programie!" << endl << endl;


                wczytaj_macierz (m,n,A);
                wypisz_macierz (m,n,A);



        return 0;


}
