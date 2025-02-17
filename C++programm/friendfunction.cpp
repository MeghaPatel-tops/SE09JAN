#include<iostream>
using namespace std;
class Test{
		private:
		int a,b;
		public:
			Test(int x,int y){
				a=x;
				b=y;
			}
			// friend function declaration
			friend void add(Test& t1);//
};
void add(Test& t1){//Define
	int c;
	c=t1.a+t1.b;
	cout<<"\n addition="<<c;
}
main(){
	Test t1(12,40);
	add(t1);
	Test t2(1,2);
	add(t2);
}
