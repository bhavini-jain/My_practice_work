//static Data Members
#include<iostream>
using namespace std;
class item
{
	int number;
	static int count;
public: 
      void getdata(int a)
	  {
	  	number=a;
	  	count++;
		  }	
	void getcount()
	{
		cout<<count;
	}	  
};
int item ::count;
int main()
{
	
	item A,B,C;
	A.getcount();
	B.getcount();
	C.getcount();
	A.getdata(100);
	B.getdata(200);
	C.getdata(300);
	A.getcount();
	B.getcount();
	C.getcount();
	return 0;
	
	
}
