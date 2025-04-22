#pragma once

class BaseObject;

class GameScene
{
public:		//�ǂ�����ł��A�N�Z�X��
	GameScene();					//�������ɌĂяo�����(�R���X�g���N�^)
	~GameScene() { Release(); }		//�j�����ɌĂяo�����(�f�X�g���N�^)

	void Update();		//�X�V
	void Draw();		//�`��
	void Init();		//������

private:	//���̃N���X�������A�N�Z�X��

	void Release();	//�������

	BaseObject* m_player = nullptr;	//���N���X
};