// Lógica do GamePlay
#include "gameplay.h"
#include "cenario.h" // Incluímos o módulo do cenário

// Variáveis para controle da câmera (ou deslocamento do cenário)
static float cameraX = 0.0f;

// Função para carregar os recursos do gameplay
void CarregarRecursosGameplay() {
    CarregarCenario(); // Carrega as texturas do cenário
}

// Função para liberar os recursos do gameplay
void LiberarRecursosGameplay() {
    LiberarCenario(); // Libera as texturas do cenário
}

// Função principal do gameplay
void ExibirGameplay() {
    ClearBackground(DARKGREEN);

    // Atualização e renderização do cenário
    DesenharCenario(cameraX);
    cameraX += 2.0f; // Ajuste a velocidade de movimento da câmera

    // Exibe texto temporário (exemplo)
    DrawText("Imagina que você está jogando vendo o personagem.", 180, 50, 20, RED);
}