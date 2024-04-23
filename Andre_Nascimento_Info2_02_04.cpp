/*
 * Andre_Nascimento_Info2_02_04.cpp
 *
 *  Created on: 2 de abr. de 2024
 *      Author: user
 */


#include <iostream>
#include <locale>
#include <fstream>
#include <string>
#include <vector>

class Pessoa{
public:
	std::string nome;
	int idade;
	int matricula;
	float peso;

	void imprime(){
		std::cout << "Nome: " << nome << " Idade: " << idade << " Matricula: " << matricula << " Peso: " << peso << std::endl;
	}
};

int main(int argc, char **argv){
	setbuf(stdout, NULL);
	setlocale(LC_CTYPE, "");
	std::cout << "Atividade de laboratório" << std::endl;
	std::cout << "Atividade 1: " << std::endl;

	Pessoa alisson;
	alisson.nome = "Alison";
	alisson.idade = 10;
	alisson.matricula = 1225;
	alisson.peso = 180.5f;
	alisson.imprime();

	//Atividade 2.

	std::cout << std::endl << "Atividade 2: " << std::endl;

	Pessoa pessoa1;
	pessoa1.nome = "André";
	pessoa1.idade = 16;
	pessoa1.matricula = 2266;
	pessoa1.peso = 70.5f;
	pessoa1.imprime();

	Pessoa pessoa2;
	pessoa2.nome = "Sophia";
	pessoa2.idade = 16;
	pessoa2.matricula = 3377;
	pessoa2.peso = 80.5f;
	pessoa2.imprime();

	//Atividade 3

	std::cout << std::endl << "Atividade 3: " << std::endl;
	std::vector <Pessoa> pessoas;

	Pessoa Pietro;
	Pietro.nome = "Pietro";
	Pietro.idade = 18;
	Pietro.matricula = 4488;
	Pietro.peso = 80.0f;

	pessoas.push_back(Pietro);


	Pessoa Isaque;
	Isaque.nome = "Isaque";
	Isaque.idade = 17;
	Isaque.matricula = 5599;
	Isaque.peso = 70.0f;

	pessoas.push_back(Isaque);

	Pessoa Vinicius;
	Vinicius.nome = "Vinicius";
	Vinicius.idade = 17;
	Vinicius.matricula = 6600;
	Vinicius.peso = 85.5f;

	pessoas.push_back(Vinicius);

	Pessoa Miguel;
	Miguel.nome = "Miguel";
	Miguel.idade = 17;
	Miguel.matricula = 7711;
	Miguel.peso = 85.0f;

	pessoas.push_back(Miguel);

	Pessoa romulo;
	romulo.nome = "Rômulo";
	romulo.idade = 18;
	romulo.matricula = 8822;
	romulo.peso = 100.0f;

	pessoas.push_back(romulo);

	for(int cont = 0; cont < 5; cont++){
		pessoas[cont].imprime();
	}


	return 0;
}
