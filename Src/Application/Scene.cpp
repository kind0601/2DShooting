#include "main.h"
#include "Scene.h"

void Scene::Draw2D()
{

}

void Scene::Update()
{
	
}

void Scene::Init()
{
	// �摜�̓ǂݍ��ݏ���
	charaTex.Load("player.png");
}

void Scene::Release()
{
	// �摜�̉������
	charaTex.Release();
}

void Scene::ImGuiUpdate()
{
	return;

	ImGui::SetNextWindowPos(ImVec2(20, 20), ImGuiSetCond_Once);
	ImGui::SetNextWindowSize(ImVec2(200, 100), ImGuiSetCond_Once);

	// �f�o�b�O�E�B���h�E
	if (ImGui::Begin("Debug Window"))
	{
		ImGui::Text("FPS : %d", APP.m_fps);
	}
	ImGui::End();
}
