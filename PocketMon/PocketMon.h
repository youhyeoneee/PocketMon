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
	string Name2;
	string Type;
	int Level=1;
	int FullHP = 30;
	int Hp = 30; 
	int FullExp = 100;
	int Exp = 0;
	int Price;
	int Code = 0;
	int Evolution = 1;
	bool isDaepyo = 0;
public:
	
	void Hit(string Name, int force)
	{
		cout << endl;
		cout << Name << "(이)가 피해를 입었습니다!" << endl;
		Hp -= force;
		if (Hp < 0)
			Hp = 0;
	};
	
	
	

public:
	PocketMon();
	PocketMon(int Code);
	~PocketMon();
};

