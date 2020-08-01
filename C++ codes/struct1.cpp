#include<iostream>
using namespace std;
struct student
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
struct student S1;
cout<<"enter name,rollno and marks";
cin>>S1.name>>S1.rollno>>S1.marks;


cout<<"the values are"<<endl;
cout<<S1.name<<endl<<S1.rollno<<endl<<S1.marks;
return 0;

 
}
