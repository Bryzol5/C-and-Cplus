#include <iostream>
#include <cmath>

using namespace std;

inline float kwadrat(float x)
{
	return x*x;
}
class okrag
{
	public:
	float x, y, r;
	void nadaj()
	{
		cin>>x;
		cin>>y;
		cin>>r;
	}
	void postac()
	{
		if(x>0) cout<<"(x-"<<x<<")^2 + ";
		if(x<0) cout<<"(x+"<<(-1)*x<<")^2 + ";
		if(x==0) cout<<"x^2 + ";
		if(y>0) cout<<"(y-"<<y<<")^2 = "<<r*r<<endl;
		if(y<0) cout<<"(y+"<<(-1)*y<<")^2 = "<<r*r<<endl;
		if(y==0) cout<<"y^2 = "<<r*r<<endl;
	}
	void pisz()
	{
		cout<<"("<<x<<","<<y<<")"<<" i promieniu: r = "<<r<<endl;
	}
	void pole()
	{
		cout<<3.14*r*r<<endl;
	}
	void punkty_ws(okrag P)
	{
	if( sqrt(kwadrat(x-P.x) + kwadrat(y-P.y))>r+P.r || sqrt(kwadrat(x-P.x) + kwadrat(y-P.y))<r-P.r) cout<<"Dane okregi nie maja punktow wspolnych"<<endl;
	if( sqrt(kwadrat(x-P.x) + kwadrat(y-P.y))==r+P.r || sqrt(kwadrat(x-P.x) + kwadrat(y-P.y))==r-P.r) cout<<"Dane okregi maja jeden punkt wspolny"<<endl;;
	if( sqrt(kwadrat(x-P.x) + kwadrat(y-P.y))>r-P.r && sqrt(kwadrat(x-P.x) + kwadrat(y-P.y))<r+P.r) cout<<"Dane okregi maja dwa punkty wspolne"<<endl;
	}
};
int main()
{
	cout<<"Program 4.2"<<endl;
	okrag S1,S2,R;
	cout<<"Podaj wsp. srodka pierwszego okregu i promien:"<<endl;
	S1.nadaj();
	cout<<"Podaj wsp. srodka drugiego okregu i promien:"<<endl;
	S2.nadaj();
	cout<<"Okrag pierwszy o srodku: "; S1.pisz(); S1.postac();
	cout<<"Okrag drugi o srodku: "; S2.pisz(); S2.postac();

	cout<<"Pole okregu pierwszego wynosi: "; S1.pole();
	cout<<"Pole okregu drugiego wynosi: "; S2.pole();

	S1.punkty_ws(S2);

return 0;
}


