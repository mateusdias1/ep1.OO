#ifndef CANDIDADO_HPP
#define CANDIDATO_HPP

#include <string>
#include "pessoa.hpp"

using namespace std;

class Candidato : public Pessoa {
    private:
    string NM_UE
    string DS_CARGO
    unsigned int NR_CANDIDATO
    string NM_URNA_CANDIDATO
    string NM_PARTIDO

    
    public: 
    Candidato();
    string getNM_UE;
    string getDS_CARGO;
    unsigned int getNR_CANDIDATO;
    string getNM_URNA_CANDIDATO;
    string getNM_PARTIDO;
}

#endif