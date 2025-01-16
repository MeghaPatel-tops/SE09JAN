#include<stdio.h>
main(){
	FILE* fp;
	int enroll;
	char name[200],ch;
	printf("\n Enter enroll num");
	scanf("%d",&enroll);
	printf("\n enter name");
	scanf("%s",name);
	
	fp=fopen("studentdata.csv","a+");
	//fprintf(fp,"Enroll,Name");
	fprintf(fp,"\n%d ,%s",enroll,name);
	fclose(fp);
	
}
