#pragma once

class Scene
{
private:
	int playerX;
	int playerY;

	int playerMoveX;
	int playerMoveY;


public:

	void playerInit();
	void playerUpdate();
};