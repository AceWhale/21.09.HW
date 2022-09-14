#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date a(10, 2, 2004);
	Date b(70, 2, 1004);
	a - b;
	a.Print();
}