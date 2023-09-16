#include <iostream>
#include <math.h>

using namespace std;

inline float kwadrat(float x)

{

	return x*x;

}

class punkt

{

	public:
	float x, y;
	void nadaj()

	{
		cin>>x;
		cin>>y;
	}

	void pisz()

	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}

	float odl(punkt P)

	{
		return sqrt(kwadrat(x-P.x) + kwadrat(y-P.y));
	}

	void przesuw (punkt P)

	{
		x+=P.x;
		y+=P.y;
		cout<<"("<<x<<","<<y<<")"<<endl;
	}

	void przesk (float a)

	{
		punkt R;
		R.x=x;
		R.y=y;
		x=((R.x*cos(a))-(R.y*sin(a)));
		x=((R.x*sin(a))+(R.y*cos(a)));
		cout<<"("<<x<<","<<y<<")"<<endl;
	}


};

int main()

{

	punkt A,B,W;
	float a;
	cout<<"Podaj wsp. A:"<<endl;
	A.nadaj();
	cout<<"Podaj wsp. B:"<<endl;
	B.nadaj();
	cout<<"Wsp. punktu A:";  A.pisz();
	cout<<"Wsp. punktu B:";  B.pisz();
	cout<<endl<<"Odleglosc miedzy punktami A i B: "<<A.odl(B)<<endl;
	cout<<"Podaj wsp. wektora W:"<<endl;
	cin>>W.x;
	cin>>W.y;
	cout<<"Wsp. wektora W:";  W.pisz();
	cout<<"Punkt A przesuniety o wektor W ma wsp: ";
	A.przesuw(W);
	cout<<"Podaj kat alfa: ";
	cin>>a;
	a=a*M_PI/180;
	cout<<"Punkt A przesuniety wzdledem poczatku ukladu wsp. o kat alfa: "<<a*180/M_PI<<" ma wsp: ";
	A.przesk(a);

return 0;

}

