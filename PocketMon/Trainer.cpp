#include "Trainer.h"



Trainer::Trainer()
{
}

Trainer::Trainer(string ID)
{
	this->ID = ID;
}


Trainer::~Trainer()
{
}

void Trainer::Buy(int i)
{
	if (i == 1)
	{
		if (money < 300)
		{
			cout << "���� ���ڸ��ϴ�!!" << endl;
		}
		else
		{
			cout << "��ó�� ���� �Ϸ�!!" << endl;
			potion++;
			money -= 300;
		}
		system("pause");
	}
	else if (i == 2)
	{

		if (money < 200)
		{
			cout << "���� ���ڸ��ϴ�!!" << endl;
		}
		else
		{
			cout << "���ͺ� ���� �Ϸ�!!" << endl;
			ball++;
			money -= 200;
		}
		system("pause");

	}

};

void Trainer::Sell(int i)
{
	if (i == 1)
	{
		cout << "��ó�� �Ǹ� �Ϸ�!!" << endl;
		potion--;
		money += 150;
		system("pause");

	}
	else if (i == 2)
	{
		cout << "���ͺ� �Ǹ� �Ϸ�!!" << endl;
		ball--;
		money += 100;
		system("pause");

	}
};

void Trainer::getinfo(Trainer & trainer)
{
	cout << "--------------------------------------" << endl;
	cout << " ���� �̸� : " << trainer.ID << "  �� : " << trainer.money << endl;
};

void Trainer::Iteminfo(int i)
{
	if (i == 1) //��ó��
	{
		{
			cout << "1. ��ó�� : " << potion << "��" << endl;

		}
	}
	else if (i == 2) //���ͺ�
	{
		cout << "1. ���ͺ� : " << ball << "��" << endl;
	}

}
void Trainer::Usepotion(Trainer & trainer, PocketMon &Mon)
{
	if (trainer.potion > 0)
	{
		trainer.potion--;
		Mon.Hp += 20;
		cout << "20��ŭ HP�� ȸ���߽��ϴ� !" << endl;
	}
	else
		cout << "��ó���� ���ڸ��ϴ� ! " << endl;
}
void Trainer::Useball(Trainer & trainer, PocketMon & Enemy)
{
	if (trainer.ball > 0)
	{
		trainer.ball--;
		cout << Enemy.Name << "�� ��µ� �����߽��ϴ�!" << endl;
		int idx = trainer.monCnt;
		trainer.Monlist[idx] = &Enemy;
		trainer.monCnt++;
		for (int i = 0; i < trainer.monCnt; i++)
			cout << i + 1 << ":" << trainer.Monlist[i]->Name << endl;
	}
	else
		cout << "���ͺ��� ���ڸ��ϴ� ! " << endl;
}
void Trainer::AddMon(Trainer & trainer, PocketMon &Mon)
{


	/*if (trainer.Monlist[0] == ' ')
		strcpy(Monlist, Mon.Name.c_str());
	else
	{
		int i = 1;
		while (trainer.Monlist[i - 1] == ' ')
		{
			strcpy(Monlist, Mon.Name.c_str());
		}
	}*/
}
;

