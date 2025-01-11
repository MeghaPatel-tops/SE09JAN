#include<stdio.h>
union car{
	int carid;
	char carname[20];
	char carbrand[20];
};
main(){
	union car car1={123,"bmw009","BMW"};

	display(&car1);

}
void display(union car car1){
	printf("\n carid=%d car name=%s car brand=%s",car1.carid,car1.carname,car1.carbrand);
}
