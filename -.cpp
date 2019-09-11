#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	void update_balance(int com,float dol,float &bal);
	float bal = 10000,dol;
	int com;
	cout<<"========================\n"<<endl;
	cout<<"You balance = 10,000.00\n"<<endl;
	cout<<"========================\n"<<endl;
	do{
	cout<<"Exit with 0"<<endl;
	cout<<"input command (1 or witch, 2 depost): ";
	cin>>com;
	cout<<"input amount : ";
	cin>>dol;
	update_balance(com ,dol,bal);
	}while(com!=0);
	return (0);
}
void update_balance(int com,float dol ,float &bal)
{
	bal;
	if(com == 1)
	{
		bal=bal-dol;
		cout<<"You balance : "<<fixed<<setprecision(2)<< bal <<endl;
	}
	else if (com == 2)
	{
		bal=bal+dol;
		cout<<"You balance :  "<<fixed<<setprecision(2)<<bal<<endl;
	}
}