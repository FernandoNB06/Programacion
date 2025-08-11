#include "BackAcount.h"

BackAcount::BackAcount(double saldo)
{
	this->saldo = saldo;
}

BackAcount::~BackAcount()
{
}

int BackAcount::retiroSaldo(int retiro)
{
	if (retiro>0)
	{
		if (retiro < saldo)
		{
			saldo = saldo - retiro;
		}
		else
		{
			throw runtime_error("Fondos Insuficientes");
		}
		
	}
	else
	{
		throw invalid_argument("Cantidad solicitada no adecuada");
	}
}

double BackAcount::getSaldo()
{
	return saldo;
}

