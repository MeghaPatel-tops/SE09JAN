#include<stdio.h>
main(){
	char str[20];
	int i=0;
	printf("\n Enter string");//tops
	scanf("%s",str);
	printf("\n str=%s",str);
	while(str[i] != '\0'){
		i++;
	}
	printf("\n str len=%d",i);
}
