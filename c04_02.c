#include <iostream>
#include <sstream>
#include <cstring>
#include <ctime>
#include <cstdlib>

char uv[] = "AEIOUY";
char uc[] = "BCDFGHJKLMNPQRSTVWXZ";
char nmbr[] = "1234567890";
char sgn[] = "`~!@#$%^&*()";
char lv[] = "aeiouy";
char lc[] = "bcdfghjklmnpqrstvwxz";
char ctrl;
char rndlv() {                                    //m. samogloska
return(lv[rand() % std::strlen(lv)]);
}

char rnduv() {                                  //w. samogloska
return(uv[rand() % std::strlen(uv)]);
}

char rndlc() {                                    //m. spolgloska
return(lc[rand() % std::strlen(lc)]);
}

char rnduc() {                                    //w. spolgloska
return(uc[rand() % std::strlen(uc)]);

}

char rndnmbr() {                                //nr
return(nmbr[rand() % std::strlen(nmbr)]);
}

char rndsgn() {                                    //znak specjalny
return(sgn[rand() % std::strlen(sgn)]);
}

bool isok (std::string x) {  //funkcja sprawdzajace poprawnosc szkieletu
int a=x.size();
        if (x.find('3') == std::string::npos){
          return(false);
        }
        if (x.find('4') == std::string::npos){
           return(false);
        }
        if (x.find('2') == std::string::npos && x.find('1') == std::string::npos ){
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

    std::string szkielet, haslo;
    std::stringstream sszkielet, shaslo;

    int n;

    std::cout << "Witaj w generatorze hasel" << std::endl;
    start:
    std::cout << "Prosze podac liczbe znakow w hasle (minimum 3 znaki)" << std::endl; //Minimum 3 znaki, bo w mniejszej ilosci nie da sie spelnic wszystkich warunkow funkcji isok()
    std::cin >> n;
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
    std::cout << std::endl << "Wygenerowane haslo:  " << haslo << std::endl;
    wybur:
    std::cout << "Czy chcesz generowac jeszcze raz?(y/n)" << std::endl;
    std::cin >> ctrl;
    if (ctrl == 'y' || ctrl == 'Y')
    goto start;
    else if(ctrl =='n' || ctrl == 'N')
    return 0;
    else
    std::cout << "Nie ma takiej odpowiedzi\n";goto wybur;

    return 0;
}

/*#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int main()
{
    int h;

cout<<"jak dlugie ma byc haslo: ";
cin>>h;
    //char znak;
    int liczba;


	srand(time( NULL ) );
	for(int i=1;i<=h;i++){
    //A=rand()%65+90;

        string los;
        los =(( rand() %( 'Z' - 'A' ) ) + 'A' );
            char znak[] = "!@#$%^&*(),.";
    //znak=rand()%47+33;
    liczba=rand()%9+0;

    cout<<los<<"-DUZA "<<znak<<"-ZNAK "<<liczba<<"-LICZBA \n";
	}

    return 0;

}
*/
