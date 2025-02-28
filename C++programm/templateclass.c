#include<iostream>
using namespace std;
int i;
template <typename T> class sortArray{
		public:
			T a[5];
			
		template <typename t> T getData(){
			for(i=0;i<5;i++){
				cout<<"\n enter i="<<i;
				cin>>a[i];
			}
		}
		template <typename T> T display(){
			for(i=0;i<5;i++){
				cout<<"\n "<<a[i];
			}
		}	
}
main(){
	sortArray<int> a1;
	a1.getData();
	a1.display();
}
