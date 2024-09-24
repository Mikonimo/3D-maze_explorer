#include "../headers/headers.h"


/**
 * cleanupSDL - cleans up the SDL
 * @window: the window to be cleaned up
 * @renderer: the renderer being cleaned up
 *
 */
void cleanupSDL(SDL_Window *window, SDL_Renderer *renderer)
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}