// Lógica do Menu
#include "menu.h"
#include "mouse.h"
#include "sair.h"

void AtualizarMenu(TelaDoJogo* telaAtual, bool* botaoIniciar, bool* botaoCredito, bool* botaoSair) {
    
    int mouseX = GetMouseX();
    int mouseY = GetMouseY();

    *botaoIniciar = (mouseX >= 340 && mouseX <= 460 && mouseY >= 180 && mouseY <= 200);
    *botaoCredito = (mouseX >= 355 && mouseX <= 460 && mouseY >= 200 && mouseY <= 220);
    *botaoSair = (mouseX >= 375 && mouseX <= 460 && mouseY >= 220 && mouseY <= 240);

    if (*botaoIniciar && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) 
    {
        *telaAtual = GAMEPLAY;
    }
    else if (*botaoCredito && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) 
    {
        *telaAtual = CREDITOS;
    }
    else if (*botaoSair && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) 
    {
        SairDoJogo(telaAtual);

    }

    DrawText("Menu", 373, 160, 20, RAYWHITE);
    if (*botaoIniciar) DrawRectangle(338, 178, 125, 25, DARKGREEN);
    DrawText("Iniciar Jogo", 340, 180, 20, RAYWHITE);

    if (*botaoCredito) DrawRectangle(352, 198, 94, 25, DARKGREEN);
    DrawText("Créditos", 355, 200, 20, RAYWHITE);

    if (*botaoSair) DrawRectangle(373, 218, 47, 25, DARKGREEN);
    DrawText("Sair", 375, 220, 20, RAYWHITE);
}