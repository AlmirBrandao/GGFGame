//Evita múltiplas inclusões do mesmo arquivo
#ifndef CENARIO_H
#define CENARIO_H

#include "raylib.h"

// Funções para gerenciar o cenário
void CarregarCenario(); //Carrega as texturas do cenário
void AtualizarCenario(float cameraX); //Atualiza a lógica do cenário. 
void DesenharCenario(float cameraX); //Desenha o cenário na tela aplicando o efeito de paralaxe.
void LiberarCenario(); //Libera os recursos de memória usados pelas texturas.

#endif //Finaliza o include guard iniciado com #ifndef CENARIO_H.

#pragma once
