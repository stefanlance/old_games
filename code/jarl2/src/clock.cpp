#include "main.h"

Clock::Clock()
{
	time_init = 0;
}

Clock::~Clock()
{

}

void Clock::start()
{
	time_init = SDL_GetTicks();
}

int Clock::getTimeElapsed()
{
	return SDL_GetTicks() - time_init;
}
