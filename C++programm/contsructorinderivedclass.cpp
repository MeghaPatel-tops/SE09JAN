#include<iostream>
using namespace std;
class Parent{
	public:
	Parent(){
		cout<<"\n parent class constructor";
	}
};
class Child:public Parent{
	public:
		Child(){
			cout<<"\n child class constructor";	
		}
};
main(){
	Child c1;
}

