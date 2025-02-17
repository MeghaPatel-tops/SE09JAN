#include<iostream>
using namespace std;
class PrivateClass{
	private:
		int l,b;
	public:
		PrivateClass(){
			l=90;
			b=80;
		}
		friend class FriendClass;//
};
class FriendClass{
	public:
		void areaofRect(PrivateClass& p1){
			int area;
			area = p1.l* p1.b;
			cout<<"\n area of rect="<<area;
		}
};
main(){
	PrivateClass p1;
	FriendClass f1;
	f1.areaofRect(p1);
	
}
