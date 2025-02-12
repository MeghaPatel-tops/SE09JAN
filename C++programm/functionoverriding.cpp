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
	Parent* p1;
	Child c1;
	p1 = &c1;;
	p1->display();
}
