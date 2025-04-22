#pragma once

class BaseObject
{
public:

	BaseObject() {}
	~BaseObject() { Release(); }

	//派生先で挙動を変える(上書きする)関数は仮想関数に
	virtual void Update();		//更新
	virtual void Draw();		//描画
	virtual void Init();		//初期化

	//protected : このクラスと派生先のクラス内空のみアクセス可能
protected:

	virtual void Release();

	KdTexture     m_tex;			//テクスチャ
	Math::Vector3 m_pos = {};		//座標
	bool          m_aliveFlg = true;//生存フラグ

};
