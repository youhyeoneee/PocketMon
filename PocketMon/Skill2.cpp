#include "Skill2.h"



Skill2::Skill2()
{
}

Skill2::Skill2(int Code)
{

	if (Code == 11)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "ȭ�����";
			this->Type = "��";
			this->Force = 15;
		}

	}
	else if (Code == 12)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "��ȿ�ϱ�";
			this->Type = "��";
			this->Force = 20;
		}
	}
	else if (Code == 21)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "���������";
			this->Type = "��";
			this->Force = 15;

		}

	}
	else if (Code == 22)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "�����~!~!��";
			this->Type = "��";
			this->Force = 20;
		}
	}
	else if (Code == 31)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "�ٳ�������";
			this->Type = "Ǯ";
			this->Force = 15;
		}
	}
	else if (Code == 32)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "�´پƴϾ�";
			this->Type = "Ǯ";
			this->Force = 20;
		}
	}
}


Skill2::~Skill2()
{
}
