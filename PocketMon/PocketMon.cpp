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
		this->Name2 = "���ڵ�";
		this->Type = "��";

	}
	else if (Code == 12)
	{
		this->Name = "����";
		this->Name2 = "��������";
		this->Type = "��";
		Skill Eun(12);
	}
	else if (Code == 21)
	{
		this->Name = "���α�";
		this->Name2 = "��Ϻα�";
		this->Type = "��";
	}
	else if (Code == 22)
	{
		this->Name = "�Ƶ�";
		this->Name2 = "�Ƶ��Ƶ�";
		this->Type = "��";

		Skill Ah(12);
	}
	else if (Code == 31)
	{
		this->Name = "�̻��ؾ�";
		this->Name2 = "�̻���Ǯ";
		this->Type = "Ǯ";
		Skill Ish(12);
	}
	else if (Code == 32)
	{
		this->Name = "����";
		this->Name2 = "��������";
		this->Type = "Ǯ";
		Skill Ji(12);
	}
}


PocketMon::~PocketMon()
{
}
