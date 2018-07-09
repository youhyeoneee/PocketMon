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
		this->Name2 = "¸®ÀÚµå";
		this->Type = "ºÒ";

	}
	else if (Code == 12)
	{
		this->Name = "Àºµü";
		this->Name2 = "ÀºµüÀºµü";
		this->Type = "ºÒ";
		Skill Eun(12);
	}
	else if (Code == 21)
	{
		this->Name = "²¿ºÎ±â";
		this->Name2 = "¾î´ÏºÎ±â";
		this->Type = "¹°";
	}
	else if (Code == 22)
	{
		this->Name = "¾Æµü";
		this->Name2 = "¾Æµü¾Æµü";
		this->Type = "¹°";

		Skill Ah(12);
	}
	else if (Code == 31)
	{
		this->Name = "ÀÌ»óÇØ¾¾";
		this->Name2 = "ÀÌ»óÇØÇ®";
		this->Type = "Ç®";
		Skill Ish(12);
	}
	else if (Code == 32)
	{
		this->Name = "Áöµü";
		this->Name2 = "ÁöµüÁöµü";
		this->Type = "Ç®";
		Skill Ji(12);
	}
}


PocketMon::~PocketMon()
{
}
