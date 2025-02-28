#include<iostream>
using namespace std;
int i,j;
template <class T> 
class sortArray{
		public:	
			T a[5];			
		sortArray(int num){
			for(i=0;i<num;i++){
				cin>>a[i];
			}
		}
		void sortarrayfunction(){
			for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
					if(a[i]>a[j]){
						T temp=a[i];
						a[i]=a[j];
						a[j]=temp; 
					}
				}
			}
		}
		void display(){
			for(i=0;i<5;i++){
				cout<<"\ni "<<i<<"=\t"<<a[i];
			}
		}
			
};

main(){

	sortArray<int> a1(5);
	a1.sortarrayfunction();
	a1.display();
	cout<<"\n";
	sortArray<float>a2(5);
	a2.sortarrayfunction();
	a2.display();
}
