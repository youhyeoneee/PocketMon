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
			cout << "돈이 모자릅니다!!" << endl;
		}
		else
		{
			cout << "상처약 구매 완료!!" << endl;
			potion++;
			money -= 300;
		}
		system("pause");
	}
	else if (i == 2)
	{

		if (money < 200)
		{
			cout << "돈이 모자릅니다!!" << endl;
		}
		else
		{
			cout << "몬스터볼 구매 완료!!" << endl;
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
		cout << "상처약 판매 완료!!" << endl;
		potion--;
		money += 150;
		system("pause");

	}
	else if (i == 2)
	{
		cout << "몬스터볼 판매 완료!!" << endl;
		ball--;
		money += 100;
		system("pause");

	}
};

void Trainer::getinfo(Trainer & trainer)
{
	cout << "--------------------------------------" << endl;
	cout << " 유저 이름 : " << trainer.ID << "  돈 : " << trainer.money << endl;
};

void Trainer::Iteminfo(int i)
{
	if (i == 1) //상처약
	{
		{
			cout << "1. 상처약 : " << potion << "개" << endl;

		}
	}
	else if (i == 2) //몬스터볼
	{
		cout << "1. 몬스터볼 : " << ball << "개" << endl;
	}

}
void Trainer::Usepotion(Trainer & trainer, PocketMon &Mon)
{
	if (trainer.potion > 0)
	{
		trainer.potion--;
		Mon.Hp += 20;
		cout << "20만큼 HP를 회복했습니다 !" << endl;
	}
	else
		cout << "상처약이 모자릅니다 ! " << endl;
}
void Trainer::Useball(Trainer & trainer, PocketMon & Enemy)
{
	if (trainer.ball > 0)
	{
		trainer.ball--;
		cout << Enemy.Name << "를 잡는데 성공했습니다!" << endl;
		int idx = trainer.monCnt;
		trainer.Monlist[idx] = &Enemy;
		trainer.monCnt++;
		for (int i = 0; i < trainer.monCnt; i++)
			cout << i + 1 << ":" << trainer.Monlist[i]->Name << endl;
	}
	else
		cout << "몬스터볼이 모자릅니다 ! " << endl;
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

