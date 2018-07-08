#include "PocketMon.h"


PocketMon::PocketMon()
{
}

PocketMon::PocketMon(int Code)
{
	this->Code = Code;
	if (Code == 11)
	{
		this->Name = "ÆÄÀÌ¸®";
		this->Type = "ºÒ";
		Skill Piri(11);
	}
	else if (Code == 12)
	{
		this->Name = "Àºµü";
		this->Type = "ºÒ";
		Skill Eun(12);
	}
	else if (Code == 21)
	{
		this->Name = "²¿ºÎ±â";
		this->Type = "¹°";
		Skill Gbg(21);
	}
	else if (Code == 22)
	{
		this->Name = "¾Æµü";
		this->Type = "¹°";
		Skill Ah(12);
	}
	else if (Code == 31)
	{
		this->Name = "ÀÌ»óÇØ¾¾";
		this->Type = "Ç®";
		Skill Ish(12);
	}
	else if (Code == 32)
	{
		this->Name = "Áöµü";
		this->Type = "Ç®";
		Skill Ji(12);
	}
}


PocketMon::~PocketMon()
{
}
