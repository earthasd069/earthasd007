#include<iostream>
#include<string>
using namespace std;
void ListStudent(int num[40],string namestu[40],int numsc[40]);
void Calgrade(int score);
int i;
int  main()
{
	int score[40],numstuden[40];
	string name[40];
	cout<<"input Number of student : ";
	cin>>numstuden[0];
	for(i = 0;i < numstuden[0];i++)
	{
		cout<<"input Name : ";
		cin>>name[i];
		cout<<"input score "<< i+1 <<" : ";
		cin>>score[i];
		cout<<endl;
	}
	ListStudent(numstuden,name,score);
	return (0);
}
void ListStudent(int nums[40],string namestu[40],int numsc[40])
{
	for(i = 0;i < nums[0];i++)
	{
		cout<<"studen Name : "<< namestu[i] <<" Score "<<i+1 <<" = "<<numsc[i];
		Calgrade(numsc[i]);
	}
}
void Calgrade(int score)
{
	if(score >= 50 && score <= 64)
	{
		cout<<" You grade is D "<<endl;
	}
	else if(score >= 65 && score <= 79)
	{
		cout<<" You grade is C "<<endl;
	}
	else if(score >= 80 && score <=89)
	{
		cout<<" You grade is B "<<endl;
	}
	else
	{
		cout<<" You grade is A "<<endl;
	}
