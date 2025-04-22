#pragma once

#include"../BaseObject.h"

class Player : public BaseObject
{
public:

	Player() {}
	~Player() { Release(); }
	
	void Update() override;
	void Draw() override;
	void Init() override;

private:

	void Release() override;

};