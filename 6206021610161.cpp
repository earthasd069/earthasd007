#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	short bath;
	cout <<"Thaibaths :";
	cin  >>bath;
	cout <<endl;
	cout <<"**Exchange Rate"<< endl;
	cout <<bath<<" Baths is "<<setprecision(3)<<bath*0.03253<<"dollars.\n";
	cout <<bath<<" Baths is "<<setprecision(3)<<bath*0.02857<<"Euro\n";
	return(0);
}