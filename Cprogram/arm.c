#include<stdio.h>
#include<math.h>
main(){
	int number,rem,number1,number3,arm=0,pownum=0;
	printf("\n Enter the number");
	scanf("%d",&number);
	number1=number;
	number3=number;
	while(number != 0){
		pownum++;
		rem= number%10;
		printf("\n rem=%d",rem);
		number=number/10;
	}
	printf("\n pownum=%d",pownum);
	while(number1 !=0){
		rem= number1%10;
		printf("\n pow of %d=%d",rem,(int)pow(rem,pownum));
		arm+=(int)pow(rem,pownum);
		number1=number1/10;	
	}
	printf("\n arm=%d",arm);
	(number3==arm)?printf("\n yes"):printf("\n no");
	
	
	
	
}
