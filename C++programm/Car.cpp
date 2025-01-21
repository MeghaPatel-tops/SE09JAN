#include<iostream>
using namespace std;
class Car{
	 public:
	 	int carId;
	 	char carName[20];
	 	char carBrand[20];
	 	
	 	void getCarDetails(){
	 		cout<<"\nEnter carName:";
	 		cin>>carName;
	 		cout<<"\n Enter carid";
	 		cin>>carId;
	 		cout<<"\n Enter car brand";
	 		cin>>carBrand;
		 } 
		 void displayCarDetails(){
		 	cout<<"\t"<<carId;
		 	cout<<"\t"<<carName;
		 	cout<<"\t"<<carBrand<<"\n";
		 }
	 	
};
main(){
	Car c[3];//array of object
	int i;
	for(i=0;i<3;i++){
		cout<<"\n enter Car Deatils:\n"<<i;
		c[i].getCarDetails();
	}
	for(i=0;i<3;i++){
		cout<<"\n\tCarID \t CarName \t CarBrand\n"<<i;
		c[i].displayCarDetails();
	}
	
}
