#include<iostream>
using namespace std;
main(){
	int num,i,flag,j;

	for(j=3;j<=10;j++){
		flag=0;
		for(i=2;i<=j/2;i++){
			if(j%i==0){
				flag=1;
			}
		}
		if(flag==0){
			cout<<"\t"<<j;
		}
		//cout<<"\nj="<<j<<"flag="<<flag;
//		cout<<"\nnumber "<<j<<"is"<<((flag==0)?"Prime":
//		"Not Prime");
	}

}
