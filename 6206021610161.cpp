#include<iostream>
#include<time.h>
using namespace std;
void checkNum(int,int);
int m = 0;
int main()
{
	srand(time(0));
	int num = rand()%10;
	int c;
	cout<<"### Welcome to guessing number game ###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	do{
	cout<<"Guess the number (1 to 10): ";
	cin>>c;
	checkNum(c,num);
	m=m+1;
	}while(c!=num);
	
	cout<<"The secret number is "<< num <<endl;
	cout<<"You made "<< m <<" guesses "<<endl;
	return (0);
	 
}
void checkNum(int a,int b)
{
		if(a==b)
		{
			cout<<"Congratulations!."<<endl;
		}
		else if(a > b)
		{
			cout<<"The secret number is higher"<<endl;
		}
		else
			cout<<"The secret number is lower"<<endl;
}