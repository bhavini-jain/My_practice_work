//Friend function
#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		void getdata(int x,int y)
		{
			a = x;
			b=y;
		}
		friend float mean(sample S);
};
float mean(sample S)
{
	return (S.a+S.b)/2.0;
}
int main()
{
	sample obj;
	obj.getdata(5,6);
	cout<<"Mean Value="<<mean(obj);
}

