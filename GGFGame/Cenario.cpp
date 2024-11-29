#include "cenario.h"
#include <cmath> // Biblioteca para fmod

// Variáveis estáticas para as texturas do cenário
static Texture2D background;
static Texture2D midground;
static Texture2D foreground;
static float larguraCenario;

// Carrega as texturas do cenário
void CarregarCenario() {
    background = LoadTexture("assets/Cenario/background.png");
    midground = LoadTexture("assets/Cenario/midground.png");
    foreground = LoadTexture("assets/Cenario/foreground.png");

    // Define a largura de uma textura (assumindo que todas têm o mesmo tamanho horizontal)
    larguraCenario = static_cast<float>(background.width); // Conversão explícita para float
}

// Desenha o cenário com repetição e ajuste de velocidade
void DesenharCenario(float cameraX) {
    // Ajuste a velocidade de movimento para cada camada
    float velocidadeBackground = 0.2f;  // Fundo mais lento
    float velocidadeMidground = 0.5f;   // Meio com velocidade intermediária
    float velocidadeForeground = 1.0f; // Primeiro plano mais rápido

    // Calcula a posição inicial de cada camada com paralaxe
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

// Libera as texturas da memória
void LiberarCenario() {
    UnloadTexture(background);
    UnloadTexture(midground);
    UnloadTexture(foreground);
}
