#include "Skill.h"



Skill::Skill()
{
}

Skill::Skill(int code)
{
	if (code == 11)
	{
		this->skillName = "�Ҳɼ���";
		this->Type = "��";
		this->Force = 5;
	}
	else if (code == 12)
	{
		this->skillName = "�ڵ���������";
		this->Type = "��";
		this->Force = 10;
	}
	else if (code == 21)
	{
		this->skillName = "������";
		this->Type = "��";
		this->Force = 5;
	}
	else if (code == 22)
	{
		this->skillName = "������";
		this->Type = "��";
		this->Force = 10;
	}
	else if (code == 31)
	{
		this->skillName = "����ä��";
		this->Type = "Ǯ";
		this->Force = 5;
	}
	else if (code == 32)
	{
		this->skillName = "�������";
		this->Type = "Ǯ";
		this->Force = 10;
	}

}


Skill::~Skill()
{
}
