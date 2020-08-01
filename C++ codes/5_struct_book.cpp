#include<iostream>
using namespace std;
struct book
{
	char book_name[30];
	int page_no;
	float price;
};
int main()
{
	struct book b[5];
	int i;
	
	
	for(i=0; i<5 ; i++)
	{
		cout << "Book " << i + 1 << endl;
		cout << " Enter Book name" << endl;
		cin >> b[i].book_name;
		cout << "Enter page no" << endl;
		cin >> b[i].page_no;
		cout << "Enter price" << endl;
		cin >> b[i].price;
	}
}
