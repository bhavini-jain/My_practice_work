 //friend function to find maximum of two numbers
#include<iostream>
using namespace std;
class Sample
{
	int a,b;
public:
	void getdata(int x, int y)
	{
		a=x;
		b=y;
	}
	friend float max(Sample);
};
float max(Sample S)
{
	int big;
	if(S.a>S.b)
	{
		big = S.a;
	}
	else
	{
		big = S.b;
	}
	return big;
}
int main()
{
	Sample obj;
	obj.getdata(5,6);
	cout<<"Maximum number  is:"<<max(obj);	
}
