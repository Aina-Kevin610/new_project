#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow(
        "Mon jeu SDL2",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        720,
        480,
        SDL_WINDOW_SHOWN
    );
    SDL_Event   event;
    int running = 1;

    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                running = 0;
            if (event.type == SDL_KEYDOWN)
            {
                printf("keyboard pressed!\n");
                fflush(NULL);
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}