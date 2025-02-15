#ifndef TELAS_H_INCLUDED
#define TELAS_H_INCLUDED

#include "Entidades.h"
#include <string.h>
#include <stdlib.h>
#ifdef WIN32
    #include "curses.h"
#else
    #include <ncurses.h>

#endif // WIN32

class TelaAutenticacao {
public:
    void apresentar(Matricula*, Senha*);
};

class TelaMensagem {
public:
    void apresentar(string);
};

class TelaCadastro {
public:
    void apresentar(Usuario*);
};

class TelaMenuUsuario {
public:
    char apresentar();
};

class TelaDescadastro {
public:
    char apresentar();
};

class TelaControle {
public:
    char apresentar();
};

class TelaMenu {
public:
    char apresentar();
};

class TelaMenuProva {
public:
    char apresentar();
};

class TelaCodigo {
public:
    void apresentar(Codigo*);
};

class TelaConsultaProva {
public:
    char apresentar(Prova*);
};

class TelaCadastroProva {
public:
    void apresentar(Prova*);
};

class TelaEdicaoProva {
public:
    void apresentar(Prova*);
};

class TelaConsultarUsuario {
public:
    char apresentar(Usuario);
};

class TelaEdicaoUsuario {
public:
    void apresentar(Usuario *);
};

class TelaCadastroQuestao {
public:
    void apresentar(Questao*);
};

class TelaConsultaQuestao {
public:
    char apresentar(Questao*);
};

class TelaEdicaoQuestao {
public:
    void apresentar(Questao *);
};

#endif // TELAS_H_INCLUDED
