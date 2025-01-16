#include<stdio.h>
main(){
	FILE* fp;
	int enroll;
	char name[200];
	printf("\n Enter enroll num");
	scanf("%d",&enroll);
	printf("\n enter name");
	scanf("%s",name);

	fp=fopen("student.text","a+");
	fprintf(fp,"\n%d %s",enroll,name);
	fclose(fp);
	
	fp= fopen("student.text","r");
	fscanf(fp,"%d %s",&enroll,name);
	printf("\n reading data from file =%d and %s",enroll,name);
	fclose(fp);
	
}
