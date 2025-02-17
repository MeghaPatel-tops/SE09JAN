#include<iostream>
using namespace std;
//Use of scope resolution operator(::)
//1.Accessing Global Variables
//2.Namespace Resolution
//3.Define Class Member Function Outside Class
//4.Access Class’s Static Members
//5.Refer to Base Class Member in Derived Class

int count=0;
class Test{

	public:
		Test(){
			cout<<"\n global varible="<<::count;
		}
		void display();//function declaration
};
void Test :: display(){//function defenation
	cout<<"\n display method called";
}
main(){
	Test t1;
	t1.display();
}
