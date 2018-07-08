#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

class PocketMon
{
public:
	string Name;
	int Level =1;
	int Hp = 30; 
	int Exp = 0;
	int Price;
public:
	void LevelUp() //레벨업 함수
	{
		int Level, Exp;
		if (Exp == 100) //레벨 1 올리고 경험치 초기화 
			Level++; Exp = 0; Hp += 5;
	};
	
	void virtual Skill() = 0;
	void virtual Hit() = 0;
public:
	PocketMon();
	~PocketMon();
};

