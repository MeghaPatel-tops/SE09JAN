#include<iostream>
using namespace std;
class Parent{
	public:
		virtual  void display()=0;//pure virtual //abstract method
};
class Child:public Parent{
	public:
		void display(){
			cout<<"\n Child class Method called";
		}
};
main(){
	Child c1;
	c1.display();
}
