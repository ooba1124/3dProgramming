#pragma once
class Scene;
class C_Player
{
public:
	C_Player();
	~C_Player();

	void Init();
	void Draw();
	void Update();

	Scene* m_pOwner;
private:
	float PlayerX;
	float PlayerY;
};
