#include<iostream>
using namespace std;
int count = 0;
class sample
{
	public:
		sample()
		{
			count++;
			cout<<"object created"<<count<<endl;
		}
		~sample()
		{
			cout<<"object destroyed"<<count<<endl;
			count--;
		}
};
int main()
{
	sample A1,A2,A3,A4;
	{
		sample A5;
	}
	{
		sample A6;
	}
}
