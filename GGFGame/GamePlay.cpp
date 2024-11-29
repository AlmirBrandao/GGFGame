// L�gica do GamePlay
#include "gameplay.h"
#include "cenario.h" // Inclu�mos o m�dulo do cen�rio

// Vari�veis para controle da c�mera (ou deslocamento do cen�rio)
static float cameraX = 0.0f;

// Fun��o para carregar os recursos do gameplay
void CarregarRecursosGameplay() {
    CarregarCenario(); // Carrega as texturas do cen�rio
}

// Fun��o para liberar os recursos do gameplay
void LiberarRecursosGameplay() {
    LiberarCenario(); // Libera as texturas do cen�rio
}

// Fun��o principal do gameplay
void ExibirGameplay() {
    ClearBackground(DARKGREEN);

    // Atualiza��o e renderiza��o do cen�rio
    DesenharCenario(cameraX);
    cameraX += 2.0f; // Ajuste a velocidade de movimento da c�mera

    // Exibe texto tempor�rio (exemplo)
    DrawText("Imagina que voc� est� jogando vendo o personagem.", 180, 50, 20, RED);
}