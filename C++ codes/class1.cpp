#include<iostream>
using namespace std;
class person
{
	char name[20];
	int age;
public: 
	void getdata()
	{
	cin>>name>>age;
	}
	void putdata()
	{
		cout<<name<<endl<<age;
	}
};
int main()
{
	person P[5];
    for(int i=0;i<5;i++)
	{
    	P[i].getdata();
	}
	for(int i=0;i<5;i++)
	{
    	P[i].putdata();
	}
	
	return 0;
}
