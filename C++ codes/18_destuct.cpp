#include<iostream>
using namespace std;
class student
{
char name [25];
int roll;
float height, weight;
public:
student()
{
roll=0;
height=0;
weight=0;
}
public:
void display()
{
cout<<"name"<<name<<endl;

cout<<"roll no"<<roll<<endl;

cout<<"\n Height"<<height<<endl;

cout<<"weight"<<weight<<endl;
}
~student()
{
cout<<"\n destroying object";
}
};
int main()
{
student S;
S.student();
S.display();

}
