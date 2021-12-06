
#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <iostream>
using namespace std;
#include <vector>
#include <cstring>
#include <sstream>


class Usuario
{
private:
		string nombre_;
        int id_;
        string correo_;
        string contra_;
        int limiteTiempo_;
        vector<int>limiteRecursos_;
        int tipoUsu_;

public:
	string getNombre(){return nombre_;};
        void setNombre(string nombre){
        	nombre_=nombre;
        }
        int getId(){return id_;}
        string getCorreo(){return correo_;}
        void setCorreo(string correo){correo_=correo;}
        int getLimiteTiempo(){return limiteTiempo_;}
        vector<int> getLimiteRecursos(){return limiteRecursos_;}
        int getTipoUsu(){return tipoUsu_;}
        void setTipoUsu(int tipo){tipoUsu_=tipo;}

	Usuario &operator=(const Usuario &aux)
	{
		_nombre=aux._nombre;
		_id=aux._id;
		_correo=aux._correo;
		_contra=aux._contra;
		_limiteTiempo=aux._limiteTiempo;
		_limiteRecursos=aux._limiteRecursos;
		_tipoUsu = aux._tipoUsu;
		

		return *this;

	}

	};