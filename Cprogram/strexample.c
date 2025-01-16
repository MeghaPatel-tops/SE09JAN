#include<stdio.h>
main(){
	FILE* fp;
	char str[100];
	fp=fopen("simple.text","w");
	fprintf(fp,"hello wolrd");
	fclose(fp);
	
	fp=fopen("simple.text","r");
	fscanf(fp,"%s",str);
	printf("\n reading string from file=%s",str);
	fclose(fp);
	
	
}

