//L�gica do bot�o sair
#include <raylib.h>
#include "GameEstado.h"
#include "Sair.h"


void SairDoJogo(TelaDoJogo* telaAtual) {
    if (telaAtual != NULL) {
        *telaAtual = SAIR;
    }    
}