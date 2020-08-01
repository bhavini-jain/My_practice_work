//copy constructor
#include<iostream>
using namespace std;
class code
{
	int id;
	public:
		code()
		{
			id = 0;
		}
		code(int a)
		{
			id =a;
		}
		code(code &x)
		{
			id = x.id;
			
		}
		void show()
		{
			cout<<id<<endl;
		}
};
int main()
{
	code A(100);
	code B(A); //calling copy conrtuctor as an object is passed
	code C=A; //copy constructor
	code D; //default called
	D=A; //copy constructor not called
	A.show();
	B.show();
	C.show();
    D.show();	
}
