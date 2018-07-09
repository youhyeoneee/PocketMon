#pragma once
#include "Skill.h"
class Skill2 :
	public Skill
{
public:
	Skill2();
	Skill2(int Code);
	~Skill2();
public:
	void Attack(int Code)
	{
		cout << skillName << "(을)를 사용하여 피해를 입혔습니다!" << endl;
	};
	void getSkill2info(int code)
	{
		cout << "2. 기술명 : " << skillName << " / 위력 : " << Force << " / 명중률 : " << Accuracy << endl;
	};

};

