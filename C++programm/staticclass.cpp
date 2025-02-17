#include<iostream>
using namespace std;
class User{
	public:
		static int userCount;
	User(){
		userCount++;
	}
	static void display(){
		cout<<"\n Count of user obj="<<userCount;
	}	
};
int User::userCount=0;//init
main(){
	User u1,u2,u3;
	User::display();
	cout<<"\n static varble="<<User::userCount;
}
