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
	void Start(); //�ʱ�ȭ��
	void Menu(string ID, int code); //���θ޴�
	void Battle(int code);
	int Random();
};

