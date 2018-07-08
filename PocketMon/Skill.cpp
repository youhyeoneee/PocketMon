#include "Skill.h"



Skill::Skill()
{
}

Skill::Skill(int code)
{
	if (code == 11)
	{
		this->skillName = "ºÒ²É¼¼·Ê";
		this->Type = "ºÒ";
		this->Force = 5;
	}
	else if (code == 12)
	{
		this->skillName = "ÇÚµåÆù´øÁö±â";
		this->Type = "ºÒ";
		this->Force = 10;
	}
	else if (code == 21)
	{
		this->skillName = "¹°´ëÆ÷";
		this->Type = "¹°";
		this->Force = 5;
	}
	else if (code == 22)
	{
		this->skillName = "º°´ÙÁÙ";
		this->Type = "¹°";
		this->Force = 10;
	}
	else if (code == 31)
	{
		this->skillName = "µ¢ÄðÃ¤Âï";
		this->Type = "Ç®";
		this->Force = 5;
	}
	else if (code == 32)
	{
		this->skillName = "Áöµü´ë±â";
		this->Type = "Ç®";
		this->Force = 10;
	}

}


Skill::~Skill()
{
}
