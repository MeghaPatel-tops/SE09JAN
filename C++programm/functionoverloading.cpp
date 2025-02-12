#include<iostream>
using namespace std;
class Maths{
	public:
		void add(int a,int b){
			cout<<"\nAddition of tow int="<<a+b;
		}
		
		void add(float a, float b, float c){
			cout<<"\n Addition of three float="<<a+b+c;
		}
};
main(){
	Maths m1;
	m1.add(12.3,45.56,34.7);
	m1.add(199,2);
}
