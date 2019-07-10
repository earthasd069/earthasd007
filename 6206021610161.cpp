#include <iostream>

using namespace std;

int main()

{
	int score,math;
	cout<< "Enter grade : ";
	cin >>math;
	score =math;

	if(score>100) {
		cout<<("error")<<endl;
		cin >> score;
	}
	
	else 
	if((score<=100)&&(score>=90)){
		cout<<("A")<<endl;
		cin >>score;}
	else if((score<=89)&&(score>=80)){
		cout<<("B\n")<<endl;
		cin >>score;}
	
	else 
	if((score<=79)&&(score>=70)){
		cout<<("C\n")<<endl;
		cin >>score;}
	
	else
	if((score<=69)&&(score>=60)){
		cout<<("D\n")<<endl;
		cin >>score;
	}
		
	else
	if((score>=0)&&(score<=59)){
		cout<<("F\n")<<endl;
		cin >>score;
	}

}