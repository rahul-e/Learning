//Self-referencing pointer
// Usecase:1 - When local variable’s name is same as member’s name
// Geekforgeeks
#include<iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:
int x;
public:
void setX (int v)
{
	// The 'this' pointer is used to retrieve the object's x
	// hidden by the local variable 'x' in main()
	this->x = v;
}
void print() { cout << "x = " << x << endl; }
};

// Usecase:2 - To return reference to the calling object
// Geekforgeeks

class Test1
{
private:
int x;
int y;
public:
Test1(int x = 0, int y = 0) { this->x = x; this->y = y; }
Test1 &setX(int a) { x = a; return *this; }
Test1 &setY(int b) { y = b; return *this; }
void print() { cout << "x = " << x << " y = " << y << endl; }
};


int main()
{
Test obj;
int x = 20;
obj.setX(x);
obj.print();

Test1 obj1(5, 5);

// Chained function calls. All calls modify the same object
// as the same object is returned by reference

obj1.setX(10).setY(20);

obj1.print();

return 0;
}

