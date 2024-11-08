//Lógica dos Créditos
// creditos.cpp
#include "creditos.h"
#include "mouse.h"

void ExibirCreditos(TelaDoJogo* telaAtual, bool* botaoMenu) {
    int mouseX = GetMouseX();
    int mouseY = GetMouseY();

    *botaoMenu = (mouseX >= 340 && mouseX <= 460 && mouseY >= 300 && mouseY <= 340);

    if (*botaoMenu && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        *telaAtual = MENU;
    }

    ClearBackground(WHITE);
    DrawText("Créditos", 350, 100, 20, BLACK);
    DrawText("Desenvolvedores:", 300, 140, 20, BLACK);
    DrawText("Almir - Programação e Arte", 250, 160, 20, BLACK);
    DrawText("Hilberg - Arte", 320, 180, 20, BLACK);
    DrawText("Lucas - Programação", 280, 200, 20, BLACK);

    if (*botaoMenu) DrawRectangle(336, 300, 124, 25, GRAY);
    DrawText("Menu Inicial", 340, 300, 20, BLACK);
}