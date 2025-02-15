#ifndef BUILDERS_H_INCLUDED
#define BUILDERS_H_INCLUDED

#include "Interfaces.h"
#include "Controladoras.h"

class BuilderSistema {
    private:
        CntrApresentacaoControle* cntrApresentacaoControle;
        IApresentacaoAutenticacao* cntrApresentacaoAutenticacao;
        IApresentacaoUsuario* cntrApresentacaoUsuario;
        IApresentacaoProva* cntrApresentacaoProva;
        IServicoAutenticacao *cntrServicoAutenticacao;
        IServicoUsuario *cntrServicoUsuario;
        IServicoProva* cntrServicoProva;
    public:
        CntrApresentacaoControle* construir();
        ~BuilderSistema();
};

#endif // BUILDERS_H_INCLUDED

