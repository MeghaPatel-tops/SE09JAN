#include<iostream>
using namespace std;
class Student{
	//Access specifiers(public,private,protected)
	private:
		//data member (variable list)
		int enroll;
		char name[20];
		int sub1,sub2,sub3;
	
			void getData(){
			cout<<"\n Enter enroll";
			cin>>enroll;
			cout<<"\n enter name";
			cin>>name;
			cout<<"\n enter three subject marks";
			cin>>sub1>>sub2>>sub3;
		}
		
	public:	
		//Member function
	
		void genReport(){
			getData();
			cout<<"\n Student name:"<<name;
			cout<<"\n Subject 1:"<<sub1;
			cout<<"\n Subject 2:"<<sub2;
			cout<<"\n Subject 3:"<<sub3;
			cout<<"\n Total ="<<(sub1+sub2+sub3);		
		}
	
};
main(){
	Student s1,s2;	
//	s1.getData();
	//s2.getData();
	//cout<<"\n first student"<<s1.name;
	//cout<<"\n sec student"<<s2.name;
	s1.genReport();
	s2.genReport();

}
