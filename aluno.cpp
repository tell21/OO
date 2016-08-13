#include "aluno.hpp"

Aluno::Aluno() {
	
}

Aluno::Aluno(string nome, int matricula, string curso, int cpf, float ira){
	this->nome = nome;
	this.matricula = matricula;
	this->curso = curso;
	this.cpf = cpf;
	this.ira = ira;
}

string Aluno::getNome(){
	return nome;
}

Aluno::setNome(string nome){
	this->nome = nome;
}

int Aluno::getMatricula(){
	return matricula;
}

Aluno::setMatricula(int matricula){
	this.matricula = matricula;
}

string Aluno::getCurso(){
	return curso;
}

Aluno::setCurso(string curso){
	this->curso = curso;
}

int Aluno::getCpf(){
	return cpf;
}

Aluno::setCpf(int cpf){
	this.cpf = cpf;
}

float Aluno::getIra(){
	return ira;
}

Aluno::setIra(float ira){
	this.ira = ira;
}
