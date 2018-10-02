#ifndef _PESSOA_
#define _PESSOA

#include <string>

using namespace std;

class Pessoa {
  protected:
     string nome;
  public:
     Pessoa();
     ~Pessoa();
     void setNome ();
     string getNome();
}

#endif
