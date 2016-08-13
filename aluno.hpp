#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>

class Aluno{

private:
	string nome;
	int matricula;
	string curso;
	int cpf;
	float ira;

public:
	Aluno();
	Aluno(string nome, int matricula, string curso, int cpf, float ira);
	string getNome();
	setNome(string nome);
	int getMatricula();
	setMatricula(int matricula);
	string getCurso();
	setCurso(string curso);
	int getCpf();
	setCpf(int cpf);
	float getIra();
	setIra(float ira);
};

#endif
