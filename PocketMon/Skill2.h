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
		cout << skillName << "(��)�� ����Ͽ� ���ظ� �������ϴ�!" << endl;
	};
	void getSkill2info(int code)
	{
		cout << "2. ����� : " << skillName << " / ���� : " << Force << " / ���߷� : " << Accuracy << endl;
	};

};

