#include<iostream>

//#include<conio.h>
using namespace std;

class student

{

private:

char name[25], gender[10];

int age;

public:

void getdata()
{

cout<<"\n enter the name";

cin>>name;

cout<<"\n enter the gender";

cin>>gender;

cout<<"\n enter the age";

cin>>age;

}

  	void putdata()
{
cout<<"\n name :"<<name;

cout<<"\n gender :"<<gender;

cout<<"\n age :"<<age;

}

};

void main ()

{

Student obj;

Obj.getdata();

Obj.putdata();

}
