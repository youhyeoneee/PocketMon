#include "PocketMon.h"


PocketMon::PocketMon()
{
}

PocketMon::PocketMon(int Code)
{
	this->Code = Code;
	if (Code == 11)
	{
		this->Name = "���̸�";
		this->Type = "��";
		Skill Piri(11);
	}
	else if (Code == 12)
	{
		this->Name = "����";
		this->Type = "��";
		Skill Eun(12);
	}
	else if (Code == 21)
	{
		this->Name = "���α�";
		this->Type = "��";
		Skill Gbg(21);
	}
	else if (Code == 22)
	{
		this->Name = "�Ƶ�";
		this->Type = "��";
		Skill Ah(12);
	}
	else if (Code == 31)
	{
		this->Name = "�̻��ؾ�";
		this->Type = "Ǯ";
		Skill Ish(12);
	}
	else if (Code == 32)
	{
		this->Name = "����";
		this->Type = "Ǯ";
		Skill Ji(12);
	}
}


PocketMon::~PocketMon()
{
}
