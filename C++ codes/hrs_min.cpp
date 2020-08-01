#include<iostream>
using namespace std;
class time
{
	int hours, mins;
	public:
		void gettime(int h, int m)
		{
			hours = h;
		}
		void puttime()
		{
			cout<<hours<<mins;
		}
		void sum(time,time);
};
void time::sum(time t1, time t2)
{
	mins = t1.mins + t2.mins;
	hours = mins/60;
	mins = mins%60;
	hours = t1.hours + t2.hours + hours;
}
int main()
{
	time T1,T2,T3;
	T1.gettime(2,30);
	T2.gettime(3,45);
	T3.sum(T1,T2);
	T1.puttime();
	T2.puttime();
	T3.puttime();
	return 0;
}
