#pragma once

enum Type {
	paddle,
	ball,
	wall,
	out
};

class GameObject
{
protected:
	float x, y;
	Type type;
public:
	void GetPosition(float &x, float &y);
	void SetPosition(float x, float y);
	void SetType(Type t);
	Type GetType();
	GameObject();
	~GameObject();
	int GetPositionX();
	void SetPositionX(float x);
	int GetPositionY();
	void SetPositionY(float y);
};