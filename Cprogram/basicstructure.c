#include<stdio.h>
struct car{
	int carid;
	char carname[20];
	char carbrand[20];
};
main(){
	struct car car1={123,"bmw009","BMW"};
	struct car car2={124,"bmw00999","BMW"};
	struct car car3={125,"bmw00ccv9","BMW"};
	display(&car1);
	display(&car2);
	display(&car3);
}
void display(struct car car1){
	printf("\n carid=%d car name=%s car brand=%s",car1.carid,car1.carname,car1.carbrand);
}
