#pragma once

class BaseObject
{
public:

	BaseObject() {}
	~BaseObject() { Release(); }

	//�h����ŋ�����ς���(�㏑������)�֐��͉��z�֐���
	virtual void Update();		//�X�V
	virtual void Draw();		//�`��
	virtual void Init();		//������

	//protected : ���̃N���X�Ɣh����̃N���X����̂݃A�N�Z�X�\
protected:

	virtual void Release();

	KdTexture     m_tex;			//�e�N�X�`��
	Math::Vector3 m_pos = {};		//���W
	bool          m_aliveFlg = true;//�����t���O

};
