#include <iostream>


/*
	new to allocate memory in heap
	delete to free memory
*/
int main(void)
{
	int *p = new int; // memory size int(4 byte), put the address in p
	*p = 10; // put 10 at p

	std::cout << *p << std::endl;

	delete p;
	return 0;
}

/*
	You can't delete local variable in stack
*/

#include <iostream>

int main() {
  int a = 5; // in stack

  delete &a;

  return 0;
}
