#include <iostream>
#include "C.h"

int main()
{
	C n;

	n.init(4, 5);

	C b;
	b.init(6, 5);

	n.add(b);

	n.display();

	return 0;
}