#include "C.h"
#include <iostream>
void C::init(int c, int d)
{
	C::a = c;
	C::b = d;
}

void C::add(C n)
{
	a += n.a;
	b += n.b;
}

void C::display()
{
	std::cout << a << ' ' << b << std::endl;
}