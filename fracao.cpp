#include <iostream>
#include "fracao.h"

Fracao::Fracao()
{
	//Nothing
}
Fracao::Fracao(int numerador_, int denominador_)
{
	numerador = numerador_;
	denominador = denominador_;
}

Fracao::~Fracao()
{
	//Nothing
}

int mmc(int a, int b)
{
	int resto, a_, b_;

	a_ = a;
	b_ = b;

	do
	{
		resto = a_ % b_;
		a_ = b_;
		b_ = resto;
	} while (resto !=0);

	return (a*b)/a_;
}

int Fracao::getNumerador()
{
	return numerador;
}

int Fracao::getDenominador()
{
	return denominador;
}

Fracao operator+(Fracao fracaoA, Fracao fracaoB)
{
	if (fracaoA.getDenominador() != fracaoB.getDenominador())
		{
			int novoNumerador;
			int novoDenominador;
			novoDenominador = mmc(fracaoA.getDenominador(), fracaoB.getDenominador());
			novoNumerador = ((novoDenominador/fracaoA.getDenominador())*fracaoA.getNumerador()) + ( (novoDenominador/fracaoB.getDenominador() ) * fracaoB.getNumerador() );
			return Fracao(novoNumerador, novoDenominador);
		}
	else
		{
			return Fracao(fracaoA.getNumerador()+fracaoB.getNumerador(), fracaoA.getDenominador());
		}
}