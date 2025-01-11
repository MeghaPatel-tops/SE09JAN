#include<stdio.h>
int findReverseNumber(int num);

main(){
	printf("\n%d",findReverseNumber(12345));
	//findReverseNumber(12345);	
}


int findReverseNumber(int num){
	int rev=0,rem;
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n revnum=%d",rev);
	return 0;
}
