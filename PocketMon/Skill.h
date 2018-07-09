#pragma once
#include <string>
#include <iostream>
#include "PocketMon.h"
using namespace std;
class Skill
{
public:
	string skillName;
	string Type; // 속성
	int Force; //위력
	float Accuracy =100; //명중률
public:
	Skill();
	Skill(int Code);
	~Skill();
public:
	void Attack(int Code)
	{
		cout << skillName <<"(을)를 사용하여 피해를 입혔습니다!" << endl;
	};
	void getSkillinfo(int code)
	{
		cout << "< Skiil 목록 >" << endl;
		cout << "1. 기술명 : " << skillName << " / 위력 : " << Force << " / 명중률 : "<< Accuracy <<endl; 
	};
	
	
};
