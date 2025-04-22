#pragma once

class BaseObject;

class GameScene
{
public:		//どこからでもアクセス可
	GameScene();					//生成時に呼び出される(コンストラクタ)
	~GameScene() { Release(); }		//破棄時に呼び出される(デストラクタ)

	void Update();		//更新
	void Draw();		//描画
	void Init();		//初期化

private:	//このクラス内だけアクセス可

	void Release();	//解放処理

	BaseObject* m_player = nullptr;	//基底クラス
};