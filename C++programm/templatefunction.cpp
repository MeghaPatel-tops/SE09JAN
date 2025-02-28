#include<iostream>
using namespace std;
//template function

template <typename T> T add(T a, T b){
	return a+b;
}

main(){
	int ans;
	float f1;
	ans = add<int>(12,34);
	f1= add<float>(2.45,56.8);
	cout<<"\n addition of two int="<<ans;
	cout<<"\n addition of two float="<<f1;
}
