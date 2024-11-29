//Evita m�ltiplas inclus�es do mesmo arquivo
#ifndef CENARIO_H
#define CENARIO_H

#include "raylib.h"

// Fun��es para gerenciar o cen�rio
void CarregarCenario(); //Carrega as texturas do cen�rio
void AtualizarCenario(float cameraX); //Atualiza a l�gica do cen�rio. 
void DesenharCenario(float cameraX); //Desenha o cen�rio na tela aplicando o efeito de paralaxe.
void LiberarCenario(); //Libera os recursos de mem�ria usados pelas texturas.

#endif //Finaliza o include guard iniciado com #ifndef CENARIO_H.

#pragma once
