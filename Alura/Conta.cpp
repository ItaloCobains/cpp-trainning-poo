#include "Conta.hpp"
#include <iostream>
#include <cstring>

int Conta::numeroDeContas = 0;

Conta::Conta(
	std::string numero, 
	std::string nomeTitular, 
	std::string cpfTitular): 
	numero(numero), 
	nomeTitular(nomeTitular), 
	cpfTitular(cpfTitular), 
	saldo(0) 
{
	numeroDeContas++;
}

void Conta::sacar(float valorASacar) {
	if (valorASacar < 0) {
		std::cout << "Não pode sacar valor negativo" << std::endl;
		return;
	}

	if (valorASacar > saldo) {
		std::cout << "Saldo Insuficiente" << std::endl;
		return;
	}

	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar < 0) {
		std::cout << "Não pode depositar valor negativo" << std::endl;
		return;
	}

	saldo += valorADepositar;
}

float Conta::recuperaSaldo() const { return saldo; }



std::string Conta::recuperaNumero() const {
	return numero;
}

std::string Conta::recuperaCpfTitular() const {
	return cpfTitular;
}

std::string Conta::recuperaNomeTitular() const {
	return numero;
}