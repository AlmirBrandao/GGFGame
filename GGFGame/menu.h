// Definições do menu
// menu.h
#ifndef MENU_H
#define MENU_H

#include <raylib.h>
#include "GameEstado.h"

// Função para exibir e atualizar o menu principal
void AtualizarMenu(TelaDoJogo* telaAtual, bool* botaoIniciar, bool* botaoCredito, bool* botaoSair);

#endif
