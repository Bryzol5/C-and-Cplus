#include <iostream>
#include <cmath>

using namespace std;

float pierw(float x)
{
	return sqrt(x);
}

float pierw(float x, float y)
{
	return pow( x,1.0/y );
}
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		cout<<"piwerwiatek kwadratowy z "<<i<<" wynosi "<<pierw(i)<<endl;
		cout<<"pierwiastek szescienny z "<<i<<" wynosi "<<pierw(i,3.0)<<endl;
	}

	return 0;
}
