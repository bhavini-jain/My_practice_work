 // C++ Program to swap two numbers using friend function 
#include <iostream> 
  
using namespace std; 
  
class Swap 
{
 
    int temp, a, b; 
  
public: 

    Swap(int a, int b) 
    { 
        this->a = a; 
        this->b = b; 
    } 
  
    friend void swap(Swap&); 
}; 

// Define the swap function outside class scope 
void swap(Swap& s1) 
{ 
    // Call by reference is used to passed object copy to 
    // the function 
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b; 
  
    // Swap operations with Swap Class variables 
    s1.temp = s1.a; 
    s1.a = s1.b; 
    s1.b = s1.temp; 
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b; 
} 
  
// Driver Code 
int main() 
{ 
    // Declare and Initialize the Swap object 
    Swap s(4, 6); 
    swap(s); 
    return 0; 
} 
