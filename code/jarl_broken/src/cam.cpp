#include "main.h"

Camera::Camera()
{
}

Camera::~Camera()
{
}

void Camera::init()
{
	viewer.x = 0;
	viewer.y = 0;
	viewer.w = GAME_WIDTH; // formerly SC...
	viewer.h = GAME_HEIGHT; // formerly SC...
}

void Camera::set_pos(int x, int y)
{
	viewer.x = x;
	viewer.y = y;
}

Rect *Camera::get_viewer()
{
	return &viewer;
}
