#include "Conta.hpp"
#include <iostream>

using namespace std;

void ExibeSaldo(const Conta& conta) {
	cout << conta.recuperaSaldo();
}

int main() {
	Conta umaConta("123", "Italo", "456.456.456-45");

	umaConta.depositar(200);

	cout << umaConta.recuperaSaldo();

	return 0;
}