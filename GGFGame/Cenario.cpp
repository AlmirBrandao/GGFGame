#include "cenario.h"
#include <cmath> // Biblioteca para fmod

// Vari�veis est�ticas para as texturas do cen�rio
static Texture2D background;
static Texture2D midground;
static Texture2D foreground;
static float larguraCenario;

// Carrega as texturas do cen�rio
void CarregarCenario() {
    background = LoadTexture("assets/Cenario/background.png");
    midground = LoadTexture("assets/Cenario/midground.png");
    foreground = LoadTexture("assets/Cenario/foreground.png");

    // Define a largura de uma textura (assumindo que todas t�m o mesmo tamanho horizontal)
    larguraCenario = static_cast<float>(background.width); // Convers�o expl�cita para float
}

// Desenha o cen�rio com repeti��o e ajuste de velocidade
void DesenharCenario(float cameraX) {
    // Ajuste a velocidade de movimento para cada camada
    float velocidadeBackground = 0.2f;  // Fundo mais lento
    float velocidadeMidground = 0.5f;   // Meio com velocidade intermedi�ria
    float velocidadeForeground = 1.0f; // Primeiro plano mais r�pido

    // Calcula a posi��o inicial de cada camada com paralaxe
    float bgOffset = fmod(-cameraX * velocidadeBackground, larguraCenario);
    float mgOffset = fmod(-cameraX * velocidadeMidground, larguraCenario);
    float fgOffset = fmod(-cameraX * velocidadeForeground, larguraCenario);

    // Desenha o fundo
    for (int i = -1; i <= 1; i++) {
        DrawTextureEx(background, Vector2{ bgOffset + i * larguraCenario, 0.0f }, 0.0f, 1.0f, WHITE);
    }

    // Desenha o meio
    for (int i = -1; i <= 1; i++) {
        DrawTextureEx(midground, Vector2{ mgOffset + i * larguraCenario, 0.0f }, 0.0f, 1.0f, WHITE);
    }

    // Desenha o primeiro plano
    for (int i = -1; i <= 1; i++) {
        DrawTextureEx(foreground, Vector2{ fgOffset + i * larguraCenario, 0.0f }, 0.0f, 1.0f, WHITE);
    }
}

// Libera as texturas da mem�ria
void LiberarCenario() {
    UnloadTexture(background);
    UnloadTexture(midground);
    UnloadTexture(foreground);
}
