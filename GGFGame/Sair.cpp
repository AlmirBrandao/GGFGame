//Lógica do botão sair
#include <raylib.h>
#include "GameEstado.h"
#include "Sair.h"


void SairDoJogo(TelaDoJogo* telaAtual) {
    if (telaAtual != NULL) {
        *telaAtual = SAIR;
    }    
}