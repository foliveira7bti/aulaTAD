#ifndef FRACAO_H
#define FRACAO_H

class Fracao
{
	private:
		int numerador;
		int denominador;
	public:
		Fracao();
		Fracao(int numerador_, int denominador_);
		~Fracao();

		int getNumerador();
		int getDenominador();
		friend Fracao operator+ (Fracao fracaoA, Fracao fracaoB);
};
#endif