#pragma once
#include <string>

class Conta {
public:
	static int numeroDeContas;

private:
	std::string numero;
	std::string cpfTitular;
	std::string nomeTitular;
	float saldo;

public:
	Conta() = delete;
	Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;

	std::string recuperaNomeTitular() const;

	std::string recuperaNumero() const;

	std::string recuperaCpfTitular() const;	

};