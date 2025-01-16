#include<stdio.h>
main(){
	FILE* fp;
	int enroll;
	char name[200],ch;
	printf("\n Enter enroll num");
	scanf("%d",&enroll);
	printf("\n enter name");
	scanf("%s",name);

	fp=fopen("student1.text","a+");
	fprintf(fp,"\n%d %s",enroll,name);
	fclose(fp);
	
	fp= fopen("student1.text","r");
	while((ch=getc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
	
}
