// lógica do Mouse
#include "mouse.h"

bool VerificaClique(int x, int y, int largura, int altura) {
    int mouseX = GetMouseX();
    int mouseY = GetMouseY();

    return (mouseX >= x && mouseX <= x + largura && mouseY >= y && mouseY <= y + altura &&
        IsMouseButtonPressed(MOUSE_LEFT_BUTTON));
}