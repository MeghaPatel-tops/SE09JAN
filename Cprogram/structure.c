#include<stdio.h>
struct Student{
	int enroll;
	int rank;
	char name[20];
	char subject[20]
};
main(){
	int number,i;
    
	printf("\n enter the total number of student");
	scanf("%d",&number);
	struct Student s[number];
	for(i=0;i<number;i++){
			printf("\n Enter %d student enroll,rank,name,subject",i);
			scanf("%d %d %s %s",&s[i].enroll,&s[i].rank,s[i].name,s[i].subject);
	}
	for(i=0;i<number;i++){
	printf("\n Details of %d studen\n enroll=%d \n rank=%d \n name=%s \n subject=%s",i,s[i].enroll,s[i].rank,s[i].name,s[i].subject);
	
	}
	

}

