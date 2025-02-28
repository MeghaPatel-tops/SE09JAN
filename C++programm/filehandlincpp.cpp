#include<iostream>
#include<fstream>
using namespace std;
main(){
	//char data[100];
	string data;
	//writing data into file
	ofstream f1("cppdata.txt");
	
	f1<<"SE 09 batch file created";
	f1<<"\n Welcome to cpp tutorials";
	
	f1.close();
	
	//Reading data from file
	ifstream f2("cppdata.txt");
	
	//f2>>data;
 	while(getline(f2,data)){
 		cout<<"\n"<<data;
	 }
	
	cout<<data;
	f2.close();
}
