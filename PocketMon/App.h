#pragma once
#include "PocketMon.h"
#include "Trainer.h"
#include "Skill.h"
#include<ctime>

class App
{
public:
	App();
	~App();
public:
	void Run();
	void Start(); //초기화면
	void Menu(string ID, int code); //메인메뉴
	void Battle(int code);
	int Random();
};

