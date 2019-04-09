#include <iostream>
#include "fracao.h"

int main (void)
{
	Fracao a(3,4);
	Fracao b(5,6);

	Fracao c(a+b);

	std::cout << c.getNumerador() << "/" << c.getDenominador() << std::endl; 
}