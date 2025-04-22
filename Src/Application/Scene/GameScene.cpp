#include "GameScene.h"

#include"../main.h"

#include"../Object/Player/Player.h"

#include"../Object/Enemy/Enemy.h"

GameScene::GameScene()
{
}

void GameScene::Update()
{
	m_player->Update();
}

void GameScene::Draw()
{
	m_player->Draw();
}

void GameScene::Init()
{
	m_player = new Player();
	m_player->Init();
}

void GameScene::Release()
{
	if (m_player)
	{
		delete m_player;
	}
}
