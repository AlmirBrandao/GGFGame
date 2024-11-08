// Mantem o loop principal e configura a estrutura de inicialização e encerramento do jogo.

#include <raylib.h>
#include "menu.h"
#include "gameplay.h"
#include "creditos.h"
#include "GameEstado.h"

int main(void) 
{
    const int largura = 800;
    const int altura = 450;
    TelaDoJogo telaAtual = MENU;

    bool botaoIniciar = false, botaoCredito = false, botaoSair = false, botaoMenu = false;

    InitWindow(largura, altura, "Menu Inicial");
    SetTargetFPS(60);
        
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        if (telaAtual == MENU)
            AtualizarMenu(&telaAtual, &botaoIniciar, &botaoCredito, &botaoSair);
        else if (telaAtual == GAMEPLAY)
            ExibirGameplay();
        else if (telaAtual == CREDITOS)
            ExibirCreditos(&telaAtual, &botaoMenu);
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}