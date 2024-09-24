#include "../headers/headers.h"
#include <math.h>

int map[MAP_HEIGHT][MAP_WIDTH] = {
	{1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 1, 1, 0, 1, 0, 1},
	{1, 0, 1, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 0, 1, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1}
};

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	SDL_Window *window = NULL;
	SDL_Renderer *renderer = NULL;
	/*Start in the middle of the map*/
	Player player = {4.5, 4.5, 0.0};

	initSDL(&window, &renderer);
	bool running = true;
	SDL_Event event;

	while (running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				running = false;
			}
		}
		drawWalls(renderer, player, map);
		/*Delay for ~60 fps*/
		SDL_Delay(16);
	}
	cleanupSDL(window, renderer);
	return (0);
}

