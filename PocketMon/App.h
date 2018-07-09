#pragma once
#include "PocketMon.h"
#include "Trainer.h"
#include "Skill2.h"
#include<ctime>
//�� ��
//1. ���ͺ��� ��� ���͸���Ʈ�� �߰� -> ���� ������ Ȯ�� �� �ȵ�
//2. �߻� ���� ���� �� 1��
//3. (1�ذ��ϸ�) ��ǥ ���� ����
class App
{
private:
	Trainer trainer;
public:
	App();
	~App();
public:
	void Run();
	void Start(); //�ʱ�ȭ��
	void Menu(PocketMon& Mon, Trainer&trainer); //���θ޴�
	void Battle(PocketMon& Mon, Trainer&trainer, Skill &MonSkill, Skill2 &MonSkill2); //����
	int Random(); //�� ���� �����ϱ����� �����Լ�
	void Shop(Trainer &ID); //����
	void Plusdamage(Skill &Monskill, PocketMon &Enemy)//������, ������
	{
		if (Monskill.Type == "��" && Enemy.Type == "��" || Monskill.Type == "Ǯ" && Enemy.Type =="��"  || Monskill.Type == "��" && Enemy.Type =="Ǯ" )
		{
			Monskill.Force += 5;
		}
	};
	void LevelUp(PocketMon &Mon) //������ �Լ�
	{
			int i = Mon.Exp % 100;
			Mon.Level++; Mon.Exp = i; Mon.FullHP += 5; 
	};
	void Evolution(PocketMon &Mon) //��ȭ �Լ�
	{
		
			Mon.Evolution++;
			Mon.FullHP += 5;
			Mon.Name = Mon.Name2;
		
	};
	
	void getMoninfo(PocketMon &Mon) //���� ���� �����ֱ�
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
