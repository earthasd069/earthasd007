#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string Username,Username1;
	int Password,Password1;
	char menu;
	do{
		cout<<"///////////menu///////////"<<endl;
		cout<<"1.Register"<<endl;
		cout<<"2.Login"<<endl;
		cout<<"Q.Exit Program"<<endl;
		cout<<"Enter menu"<<endl;
		cin >> menu;
		if(menu=='1')
		{
			cout<<"*******Register*******"<<endl;
			cout<<"input Username : " ;
			cin >> Username;
			cout<<"input Password : " ;
			cin >> Password;

		}else if (menu=='2')
		{
			cout<<"*******Login*******"<<endl;
			cout<<"input Username : ";
			cin >> Username1;
			cout<<"input Password : ";
			cin >> Password1;
			if(Username1!=Username && Password1!=Password)
			{
				do
				{
					cout<<"!!!!Username or Password incorrect Please try again!!!!"<<endl;
					cout<<"input Username : ";
					cin >>Username1;
					cout<<"input Password :";
					cin >> Password1;

				}while(Username1!=Username || Password!=Password);
				cout<<"Username of Password correct ^_^"<<endl;

			}else  cout<<"Username of Password correct ^_^"<<endl;
		}
	}while(menu!='Q');
}