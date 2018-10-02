#ifndef ELEITOR_HPP
#define ELEITOR_HPP

#include <string>
#include "pessoa.hpp"

using namespace std;

class Eleitor : public Pessoa {
    private:
    unsigned int votoPresidente;
    unsigned int votoGovernador;
    unsigned int votoSenador;
    unsigned int votoDepEstadual;
    unsigned int votoDepDistrital;
    
    public: 
    Aluno();
    void setVotoPresidente (unsigned int votoPresidente);
    int getVotoPresidente;
    void setVotoGovernador (unsigned int votoGovernador);
    int getVotoGovernador;
    void setVotoSenador (unsigned int votoSenador);
    int getVotoSenador;
    void setVotoDepEstadual (unsigned int votoDepEstadual);
    int getVotoDepEstadual;
    void setVotoDepDistrital (unsigned int votoDepDistrital);
    int getVotoDepDistrital;
}

#endif