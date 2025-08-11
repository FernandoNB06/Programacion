#pragma once
#include<iostream>
#include<stdexcept>
using namespace std;
class BackAcount
{
private:
	double saldo;

public:
	BackAcount(double saldo);
	~BackAcount();
	int retiroSaldo(int retiro);
	double getSaldo();
};

