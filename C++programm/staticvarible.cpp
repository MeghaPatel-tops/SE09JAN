#include<iostream>
using namespace std;
void incre(){
	int a=0;
	static int s=0;
	a++;
	s++;
	cout<<"\n a="<<a<<"\ts="<<s;
}
main(){
	int i;
	for(i=1;i<=3;i++){
		incre();
	}
}
