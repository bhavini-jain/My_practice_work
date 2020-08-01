//constructor
#include<iostream>
using namespace std;
class test
{
	int x,y;
	public:
		test()
		{
			x=y=0;
		}
		test(int a, int b)
		{
			x=a;
			y=b;
		}
		void show();
		
};
	void  test :: show()
		{
			cout<<x<<endl<<y;
		}
int main()
{
	test obj;
	test obj1(10,20); // implicit calling
	test obj2 = test(60,80); // explicit calling
	obj.show();
	obj1.show();
	obj2.show();
	return 0;
}
