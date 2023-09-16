#include <iostream>
#include <sstream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;

char uv[] = "AEIOUY";
char uc[] = "BCDFGHJKLMNPQRSTVWXZ";
char nmbr[] = "1234567890";
char sgn[] = "`~!@#$%^&*()";
char lv[] = "aeiouy";
char lc[] = "bcdfghjklmnpqrstvwxz";
char ctrl;
char rndlv() {                                    //m. samogloska
return(lv[rand() % strlen(lv)]);
}

char rnduv() {                                  //w. samogloska
return(uv[rand() % strlen(uv)]);
}

char rndlc() {                                    //m. spolgloska
return(lc[rand() % strlen(lc)]);
}

char rnduc() {                                    //w. spolgloska
return(uc[rand() % strlen(uc)]);

}

char rndnmbr() {                                //nr
return(nmbr[rand() % strlen(nmbr)]);
}

char rndsgn() {                                    //znak specjalny
return(sgn[rand() % strlen(sgn)]);
}

bool isok (string x) {  //funkcja sprawdzajace poprawnosc szkieletu
int a=x.size();
        if (x.find('3') == string::npos){
          return(false);
        }
        if (x.find('4') == string::npos){
           return(false);
        }
        if (x.find('2') == string::npos && x.find('1') == string::npos ){
           return(false);
        }

    for (int w=0; w <= a; ++w)
      if (x[w] == x[w-1] || x[w] +4 == x[w-1] || x[w] -4 == x[w-1]){
            return (false);
        }

    return (true);
}

int main () {
    srand(time(NULL));
    srand(time(NULL));

    string szkielet, haslo;
    stringstream sszkielet, shaslo;

    int n;

    cout << "Witaj w generatorze hasel" << endl;
    start:
    cout << "Prosze podac liczbe znakow w hasle (minimum 3 znaki)" << endl; //Minimum 3 znaki, bo w mniejszej ilosci nie da sie spelnic wszystkich warunkow funkcji isok()
    cin >> n;
generuj:
    sszkielet.str("");
        for (int i=0; i<n; ++i) {
            sszkielet << rand() % 6 +1;
        }

     szkielet = sszkielet.str();
if (isok(szkielet)==false) goto generuj;
// W tym miejscu mam juz wygenerowany i sprawdzony poprawny szkielet
    for (int p=0; p<=n; p++) {
        switch (szkielet[p]) {
            case '1' :
            shaslo << rnduv();
                break;

            case '2' :
            shaslo << rnduc();
                break;

            case '3' :
            shaslo << rndnmbr();
                break;

            case '4' :
            shaslo << rndsgn();
                break;

            case '5' :
            shaslo << rndlv();
                break;

            case '6' :
            shaslo << rndlc();
                break;
        }
    }
    haslo = shaslo.str();
    shaslo.str("");
    cout << endl << "Wygenerowane haslo:  " << haslo << endl;
    wybur:
    cout << "Czy chcesz generowac jeszcze raz?(y/n)" << endl;
    cin >> ctrl;
    if (ctrl == 'y' || ctrl == 'Y')
    goto start;
    else if(ctrl =='n' || ctrl == 'N')
    return 0;
    else
    cout << "Nie ma takiej odpowiedzi\n";goto wybur;

    return 0;
}
