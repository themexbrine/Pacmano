#include "stdafx.h"
#include "KPlatform.h"

void Initialize()
{
	KPlatform *platform = new KPlatform();
}

void Inputs()
{

}

void UpdateLogic()
{

}

void UpdateScreen()
{

}

int main(int argc, char *argv[])
{
	

	bool finish = false;
	Initialize();
	while (!finish)
	{
		Inputs();
		UpdateLogic();
		UpdateScreen();
	}
    return 0;
}