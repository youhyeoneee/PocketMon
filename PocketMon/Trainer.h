#pragma once
#include "PocketMon.h"

class Trainer
{
public:
	string ID;
	//int *Monlist = new MonList[];
	//int *Pocketmon[];
	int money = 1000;
	int ball = 0;
	int potion = 0;
	PocketMon* Monlist[6];
	int monCnt = 0;
public:
	Trainer();
	Trainer(string ID);
	~Trainer();
	
public:
	void Buy(int i);
	void Sell(int i);
	void getinfo(Trainer &trainer); //������ �̸�, �� ����
	void Iteminfo(int i); // 1: ��ó�� ���� 2: ���ͺ� ����
	void Usepotion(Trainer &trainer, PocketMon &Mon);
	void Useball(Trainer &trainer, PocketMon &Enemy);
	void AddMon(Trainer &trainer, PocketMon &Mon);
};

