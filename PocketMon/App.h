#pragma once
#include "PocketMon.h"
#include "Trainer.h"
#include "Skill2.h"
#include<ctime>
//할 것
//1. 몬스터볼로 잡고 몬스터리스트에 추가 -> 유저 정보서 확인 잘 안됨
//2. 야생 몬스터 레벨 다 1임
//3. (1해결하면) 대표 몬스터 변경
class App
{
private:
	Trainer trainer;
public:
	App();
	~App();
public:
	void Run();
	void Start(); //초기화면
	void Menu(PocketMon& Mon, Trainer&trainer); //메인메뉴
	void Battle(PocketMon& Mon, Trainer&trainer, Skill &MonSkill, Skill2 &MonSkill2); //전투
	int Random(); //적 랜덤 생성하기위한 난수함수
	void Shop(Trainer &ID); //상점
	void Plusdamage(Skill &Monskill, PocketMon &Enemy)//가해자, 피해자
	{
		if (Monskill.Type == "물" && Enemy.Type == "불" || Monskill.Type == "풀" && Enemy.Type =="물"  || Monskill.Type == "불" && Enemy.Type =="풀" )
		{
			Monskill.Force += 5;
		}
	};
	void LevelUp(PocketMon &Mon) //레벨업 함수
	{
			int i = Mon.Exp % 100;
			Mon.Level++; Mon.Exp = i; Mon.FullHP += 5; 
	};
	void Evolution(PocketMon &Mon) //진화 함수
	{
		
			Mon.Evolution++;
			Mon.FullHP += 5;
			Mon.Name = Mon.Name2;
		
	};
	
	void getMoninfo(PocketMon &Mon) //몬스터 정보 보여주기
	{
		cout << "<" << Mon.Name << ">" << endl;
		cout << "LV : " << Mon.Level << endl;
		cout << "EXP : " << Mon.Exp << "% [ " << Mon.Exp << " / " << Mon.FullExp << " ]" << endl;

	};
	void ShowMon(Trainer &trainer) 
	{
		for (int i = 0; i < trainer.monCnt; i++)
			cout << "		" << i + 1 << "." << trainer.Monlist[i]->Name << endl;
	};
	
};

/*void SetMon(PocketMon &Mon, Trainer &trainer)
{
int idx = trainer.monCnt;
trainer.Monlist[idx] = &Mon;
trainer.monCnt++;
};

};*/
