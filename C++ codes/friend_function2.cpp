#include<iostream>
using namespace std;
class xyz;
class abc
{
	int a;
	public: 
	    void getdata(int i)
	    {
	    	a = i;
		}
		friend void max(abc,xyz);
};
class xyz
{
	int x;
	public: 
	    void getdata(int i)
	    {
	    	x = i;
		}
		friend void max(abc,xyz);
};
void max(abc m ,xyz n)
{
	if(m.a>n.x)
	 cout<<m.a;
	else
	  cout<<n.x;
}
int main()
{
	abc obj1;
	xyz obj2;
	obj1.getdata(10);
	obj2.getdata(20);
	max(obj1,obj2);
}
