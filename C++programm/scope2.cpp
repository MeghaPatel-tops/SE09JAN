#include<iostream>
using namespace std;
class Parent{
	public:
		void display(){
			cout<<"\n parent method called";
		}
};
class Child:public Parent{
	public:
		void display(){
			cout<<"\n Child class Method called";
		}
};
main(){
		Child c1;
		c1.Parent::display();
		c1.display();
}
