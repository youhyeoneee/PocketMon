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
			this->skillName = "화염방사";
			this->Type = "불";
			this->Force = 15;
		}

	}
	else if (Code == 12)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "포효하기";
			this->Type = "불";
			this->Force = 20;
		}
	}
	else if (Code == 21)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "아쿠아테일";
			this->Type = "물";
			this->Force = 15;

		}

	}
	else if (Code == 22)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "물들어~!~!♪";
			this->Type = "물";
			this->Force = 20;
		}
	}
	else if (Code == 31)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "잎날가르기";
			this->Type = "풀";
			this->Force = 15;
		}
	}
	else if (Code == 32)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "맞다아니야";
			this->Type = "풀";
			this->Force = 20;
		}
	}
}


Skill2::~Skill2()
{
}
