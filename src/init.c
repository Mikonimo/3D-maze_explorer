#include "../headers/headers.h"

/**
 * initSDL - initializes SDL
 * @window: a pointer to the window object that will be created
 * @renderer: a pointer to the renderer, will handle drawing on the window
 *
 */
void initSDL(SDL_Window **window, SDL_Renderer **renderer)
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "SDL_Init Error: %s\n", SDL_GetError());
		exit(1);
	}
	*window = SDL_CreateWindow("3D Maze Explorer", SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH,
			SCREEN_HEIGHT, 0);
	if (!*window)
	{
		fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
		SDL_Quit();
		exit(1);
	}
	*renderer = SDL_CreateRenderer(*window, -1, SDL_RENDERER_ACCELERATED);
	if (!*renderer)
	{
		SDL_DestroyWindow(*window);
		fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
		SDL_Quit();
		exit(1);
	}
}
