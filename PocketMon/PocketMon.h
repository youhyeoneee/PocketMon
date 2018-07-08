#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include "Skill.h"

using namespace std;

class PocketMon
{
public:
	string Name;
	string Type;
	int Level =1;
	int FullHP = 30;
	int Hp = 30; 
	int FullExp = 100;
	int Exp = 0;
	int Price;
	int Code = 0;
	bool isDaepyo = 0;
public:
	void LevelUp(int Level, int Exp, int FullHp) //������ �Լ�
	{
		if (Exp == 100) //���� 1 �ø��� ����ġ �ʱ�ȭ 
			Level++; Exp = 0; FullHp += 5;
	};
	void Hit(string Name, int force)
	{
		cout << endl;
		cout << Name << "(��)�� ���ظ� �Ծ����ϴ�!" << endl;
		Hp -= force;
		if (Hp < 0)
			Hp = 0;
	};
	void getinfo(int code)
	{
		cout << "<" << Name << ">" << endl;
		cout << "LV : " << Level << endl;
		cout << "EXP : " << Exp << "% [ " << Exp << " / " << FullExp << " ]" << endl;

	};


public:
	PocketMon();
	PocketMon(int Code);
	~PocketMon();
};

