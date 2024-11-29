// Mantem o loop principal e configura a estrutura de inicialização e encerramento do jogo.


#include <raylib.h>
#include "GameEstado.h"
#include "menu.h"
#include "gameplay.h"
#include "creditos.h"
#include "Sair.h"

int main(void) {
    const int largura = 800;
    const int altura = 450;
    TelaDoJogo telaAtual = MENU;

    bool botaoIniciar = false, botaoCredito = false, botaoSair = false, botaoMenu = false;

    InitWindow(largura, altura, "Menu Inicial");
    SetTargetFPS(60);

    // Carrega recursos do jogo antes do loop principal
    CarregarRecursosGameplay();

    while (!WindowShouldClose() && telaAtual != SAIR) {
        BeginDrawing();
        ClearBackground(BLACK);

        if (telaAtual == MENU) {
            AtualizarMenu(&telaAtual, &botaoIniciar, &botaoCredito, &botaoSair);
            if (botaoSair && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                SairDoJogo(&telaAtual);
            }
        }
        else if (telaAtual == GAMEPLAY) {
            ExibirGameplay();
        }
        else if (telaAtual == CREDITOS) {
            ExibirCreditos(&telaAtual, &botaoMenu);
        }

        EndDrawing();
    }

    // Libera recursos do jogo antes de encerrar
    LiberarRecursosGameplay();

    CloseWindow();
    return 0;
}