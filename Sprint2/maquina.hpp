#ifndef MAQUINA_HPP
#define MAQUINA_HPP

#include <iostream>
using namespace std;
#include <vector>
#include <cstring>
#include <sstream>


class Maquina
{
private:
	int id_;
	int TipoRecursos;
	vector<int>limiteRecursos_;
	int limiteTiempo_;


public:

	int getId(){return id_;}
	int getLimiteTiempo(){return limiteTiempo_;}
    vector<int> getLimiteRecursos(){return limiteRecursos_;}


};