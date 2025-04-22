#include "Player.h"

void Player::Update()
{
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		m_pos.x -= 5;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		m_pos.x += 5;
	}
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		m_pos.y += 5;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		m_pos.y -= 5;
	}
}

void Player::Draw()
{
}

void Player::Init()
{
	m_pos = {};//0,0Ç≈èâä˙âª
	m_aliveFlg = true;
}

void Player::Release()
{
}
