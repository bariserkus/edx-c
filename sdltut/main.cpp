#include <ctime>
#include <iostream>
#include "SDL.h"

using namespace std;

int main(int agrc, char *argv[]){

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    int a;

    if (SDL_Init( SDL_INIT_VIDEO ) < 0){
        cout << "Error: " << SDL_GetError() << endl;
        return 1;
    }

    cout << "SDL Init Succeeded" << endl;

    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT,
        SDL_WINDOW_SHOWN);

    if (window == NULL){
        cout << "Error : " << SDL_GetError() << endl;
        SDL_Quit();
        return 2;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer (window, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC,
                                             SCREEN_WIDTH, SCREEN_HEIGHT);

    if (renderer == NULL) {
        cout << "Could not create renderer" << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }

    if (texture == NULL) {
        cout << "Could not create texture" << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 4;
    }

    Uint32 * buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];
    memset(buffer, 0, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));

    buffer[30000] = 0xFFFFFFF;

    for (int i=0; i< SCREEN_WIDTH*SCREEN_HEIGHT; i++){
        buffer[i] = 0xFF0000FF;
    }

    SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    bool quit = false;

    SDL_Event event;

    while(!quit){

        while (SDL_PollEvent(&event)){
            if (event.type == SDL_QUIT){
                quit = true;
            }
        }
    }


    delete [] buffer;
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;



 /*   // Initialize the random number generator
    //time_t current_time;
    srand (time(NULL));

    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);

    // Open a 800x600 window and define an accelerated renderer
    SDL_Window* window = SDL_CreateWindow("SDL2 & Code::Blocks", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          800, 600, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    // Initial renderer color
    SDL_SetRenderDrawColor(renderer, rand(), rand(), rand(), 255);

    bool running = true;
    Uint32 old_time = 0, change_color_time = 1000, new_time;
    SDL_Event event;
    while (running)
    {
        // Check for various events (keyboard, mouse, touch, close)
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_KEYDOWN)
            {
                const char* key = SDL_GetKeyName(event.key.keysym.sym);
                if (strcmp(key, "Q") == 0 || strcmp(key, "Escape") == 0)
                {
                    running = false;
                }
            }
            else if (event.type == SDL_QUIT)
            {
                running = false;
            }
        }

	    // Clear buffer
	    SDL_RenderClear(renderer);

        // Draw here ...

	    // Switch buffers
	    SDL_RenderPresent(renderer);

	    new_time = SDL_GetTicks();
	    if(new_time - old_time > change_color_time)
        {
            SDL_SetRenderDrawColor(renderer, rand(), rand(), rand(), 255);
            old_time = new_time;
        }
    }

    // Release any of the allocated resources
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
*/
}
