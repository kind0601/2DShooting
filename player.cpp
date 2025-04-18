#include "player.h"

void Scene::playerInit()
{
	playerX = -480;
	playerY = 0;
}

void Scene::playerUpdate()
{
	if (GetAsyncKeyState('W'))
	{
		playerMoveY = +1;
	}
	if (GetAsyncKeyState('S'))
	{
		playerMoveY = -1;
	}
	if (GetAsyncKeyState('D'))
	{
		playerMoveX = +1;
	}
	if (GetAsyncKeyState('A'))
	{
		playerMoveX = -1;
	}

	playerX = +playerMoveX;
	playerY = +playerMoveY;
}
