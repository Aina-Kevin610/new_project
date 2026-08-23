#include <SDL.h>
#include <stdio.h>

int main()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Erreur d'initialisation : %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Mon Projet SDL", 
                        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
                        800, 600, SDL_WINDOW_SHOWN);

    int running = 1;
    SDL_Event event;

    // Boucle principale
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = 0;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
