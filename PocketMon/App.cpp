#include "App.h"


App::App()
{
}


App::~App()
{
}

void App::Run()
{
	Start();
}

void App::Start()
{
	while(true)
	{
		int ipt, mon, Code;
		string ID;
		cout << "--------------------------------------" << endl;
		cout << "          < �� �� �� �� �� >          " << endl;
		cout << "--------------------------------------" << endl;
		cout << "          1. ���� ����                " << endl;
		cout << "          2. ����                     " << endl;
		cout << "--------------------------------------" << endl;
		cout << "�Է� ::"; cin >> ipt;

		if (ipt == 1)
		{
			system("cls");
			cout << "ID �Է� ::"; cin >> ID;
			trainer = Trainer(ID); //�Է¹��� ID���� Ʈ���̳� ����
			while (true)
			{
				system("cls");
				cout << "--------------------------------------" << endl;
				cout << "       < �ʱ� ���ϸ��� ���� >       " << endl;
				cout << "--------------------------------------" << endl;
				cout << "            1. ���̸�                 " << endl;
				cout << "            2. ���α�                 " << endl;
				cout << "            3. �̻��ؾ�               " << endl;
				cout << "--------------------------------------" << endl;
				cout << "�Է� ::"; cin >> mon;
				if (mon == 1)
				{
					cout << "���̸� ����!!!!!" << endl;
					Code = 11;
					PocketMon Piri(11);
					//Skill Piri(Piri);
					system("pause");
					system("cls");
					Menu(Piri, trainer);
					//trainer.SetMon(&Piri);
					break;
					
				}
				else if (mon == 2)
				{
					cout << "���α� ����!!!!!" << endl;
					Code = 21;
					PocketMon Gbg(21); 
					//Skill Gbg(Gbg);
					system("pause");
					system("cls");
					Menu(Gbg, trainer);
					//trainer.SetMon(&Gbg);
					break;
					
				}
				else if (mon == 3)
				{
					cout << "�̻��ؾ� ����!!!!!" << endl;
					Code = 31;
					PocketMon Ish(31); 
					system("pause");
					system("cls");
					Menu(Ish, trainer);
					//trainer.SetMon(&Ish);
					break;
					
				}
				else
				{
					cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
					system("pause");

				}
				break;
			} 
			
		}
		else if (ipt == 2)
		{
			exit(101);
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
			system("pause");
			system("cls");
		}
	}
	
}

void App::Menu(PocketMon& Mon, Trainer&trainer)
{

	Skill MonSkill(Mon.Code);
	Skill2 MonSkill2(Mon.Code); //�� ��ų ����

	int idx = trainer.monCnt;
	trainer.Monlist[idx] = &Mon;
	trainer.monCnt++;

	while (true)
	{
		system("cls");
		if (Mon.Exp >= 100) // ����ġ 100 ���޽� 
		{	
			cout << "������!" << endl;			
			system("pause");
			system("cls");
			LevelUp(Mon); //���� 1 �ø��� ����ġ �ʱ�ȭ, hp �ø���
			MonSkill.Force++; //��ų ���� �ø���
			if (Mon.Level % 3 == 0 )//3,6
		{
			system("cls");
			cout << Mon.Name << "(��)�� " << Mon.Name2 << "�� ��ȭ�Ͽ����ϴ�!" << endl;
			Evolution(Mon);
		}
		}
		
		int ipt;

		cout << "--------------------------------------" << endl;
		cout << "���� �̸� : " << trainer.ID << "  ��ǥ ���ϸ� : " << Mon.Name << endl;
		cout << "LV : " << Mon.Level << "  EXP : " << Mon.Exp << "% [ " << Mon.Exp << " / "<<Mon.FullExp << " ]" << endl;
		cout << "--------------------------------------" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1. �߻����� �̵� " << endl;
		cout << "2. User ���� ���� " << endl;
		cout << "3. ���ϸ� �������� �̵� " << endl;
		cout << "4. ���ϸ� �������� �̵� " << endl;
		cout << "5. ���� " << endl;
		cout << "--------------------------------------" << endl;
		cout << "�Է� ::"; cin >> ipt;
		if (ipt == 1)
		{
			Battle(Mon, trainer, MonSkill, MonSkill2);
		}
		
		else if (ipt == 2)//User ���� ����
 		{
			while (true)
				{
					system("cls");
					int info, po;
					cout << "--------------------------------------" << endl;
					cout << "1. ���ϸ� ��� ����" << endl;
					cout << "2. Item ��� ����" << endl;
					cout << "3. ����" << endl;
					cout << "--------------------------------------" << endl;
					cout << "�Է� ::"; cin >> info;
					if (info == 1) //���ϸ� ��� ����
					{
						while(true)
						{	
							system("cls");
							cout << "--------------------------------------" << endl;
							cout << "          < �� �� �� �� �� >          " << endl;
							cout << "		0. ����		   " << endl;
							ShowMon(trainer);
							cout << "--------------------------------------" << endl;
							cout << "		��ȣ �Է� :: "; cin >> po;
							if (po == 0)
								break;
							else if (po == trainer.monCnt)
							{
								int i;
								while (true)
								{
									system("cls");
									cout << "--------------------------------------" << endl;
									getMoninfo(Mon);
									cout << endl;
									MonSkill.getSkillinfo(Mon.Code);
									if (Mon.Evolution == 2)
										MonSkill2.getSkill2info(Mon.Code);
									cout << "--------------------------------------" << endl;

									cout << endl << "��ǥ ���ϸ����� �����Ͻðڽ��ϱ�?" << endl;
									cout << "1. ��" << endl;
									cout << "2. �ƴϿ�" << endl;
									cout << "--------------------------------------" << endl;
									cout << "�Է� ::"; cin >> i;
									if (i == 1)
									{
										Mon.isDaepyo = 1;
										system("pause");
										break;
									}
									else if (i == 2)
									{
										Mon.isDaepyo = 0;
										system("pause");
										break;
									}
									else
									{
										cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
										system("pause");
										system("cls");
									}
								}
								break;
							}
							else
							{
								cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
								system("pause");
								system("cls");
							}
						}
					}
					else if (info == 2) //Item ��� ����
					{
						system("cls");
						cout << "--------------------------------------" << endl;
						cout << "               < �� ó �� >           " << endl;
						trainer.Iteminfo(1);
						cout << "--------------------------------------" << endl;
						cout << "--------------------------------------" << endl;
						cout << "             < �� �� �� �� >          " << endl;
						trainer.Iteminfo(2);
						cout << "--------------------------------------" << endl;
						system("pause");

					}
					else if (info == 3) //����
						break;
					else
					{
						cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
						system("pause");
						system("cls");
					}
				}
				
		}
		else if (ipt == 3)
		{
			Shop(trainer);
		}
		else if (ipt == 4) //����
		{

			int hospital;
			while(true)
			{
				system("cls");
				cout << "--------------------------------------" << endl;
				cout << "          < �� �� �� �� �� >          " << endl;
				cout << " �̸� : " << Mon.Name; if (Mon.Hp == 0) cout << "(����)";cout << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
				cout << "--------------------------------------" << endl;
				cout << "--------------------------------------" << endl;
				cout << "1. ȸ��" << endl;
				cout << "2. ����" << endl;
				cout << "--------------------------------------" << endl;
				cout << "�Է� ::"; cin >> hospital;
				if (hospital == 1)
				{
					cout << "ȸ�� �Ϸ�" << endl;
					Mon.Hp = Mon.FullHP;
					system("pause");
				}
				else if (hospital == 2)
				{
					break;
				}
				else
				{
					cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
					system("pause");
					system("cls");
				}
			}

		}
		else if (ipt == 5)
		{
			exit(101);
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
			system("pause");
			system("cls");
		}
	}
}

//void App::Battle(int code)
void App::Battle(PocketMon& Mon, Trainer&trainer, Skill &MonSkill, Skill2 &MonSkill2)
{
	int battle;

	while (true)
	{
		if (Mon.Hp <= 0)
		{
			break;

		}
		int i = Random();
		PocketMon Enemy(i); //���������ؼ� �ϱ�
		Skill EnemySkill(i);
		Skill2 EnemySkill2(i);

		system("cls");
		cout << "--------------------------------------" << endl;
		cout << " �̸� : " << Enemy.Name << "  Ÿ�� : " << Enemy.Type << endl;
		cout << " LV : " << Enemy.Level << "  HP : " << Enemy.Hp << " / " << Enemy.FullHP << endl;
		cout << "--------------------------------------" << endl;
		cout << "--------------------------------------" << endl;
		cout << " �̸� : " << Mon.Name << "  Ÿ�� : " << Mon.Type << endl;
		cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
		cout << "--------------------------------------" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ����" << endl;
		cout << "--------------------------------------" << endl;
		cout << "�Է� ::"; cin >> battle;
		if (battle == 1)
		{
			if (Mon.Hp > 0 && Enemy.Hp >0)
			{ 
				while (true)
				{
					int ipt;

					system("cls");
					cout << "--------------------------------------" << endl;
					cout << " �̸� : " << Enemy.Name << "  Ÿ�� : " << Enemy.Type << endl;
					cout << " LV : " << Enemy.Level << "  HP : " << Enemy.Hp << " / " << Enemy.FullHP << endl;
					cout << "--------------------------------------" << endl;
					cout << "--------------------------------------" << endl;
					cout << " �̸� : " << Mon.Name << "  Ÿ�� : " << Mon.Type << endl;
					cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
					cout << "--------------------------------------" << endl;
					cout << "--------------------------------------" << endl;
					cout << "0. �ڷΰ���" << endl;
					cout << "1. " << MonSkill.skillName << endl;
					if (Mon.Evolution==2)
						cout << "2. " << MonSkill2.skillName << endl;
					cout << "--------------------------------------" << endl;
					cout << "�Է� ::"; cin >> ipt;
						
						
					if (ipt == 1)
					{
						cout << Mon.Name << "(��)��";
						MonSkill.Attack(Mon.Code);
						Plusdamage(MonSkill, Enemy);
						Enemy.Hit(Enemy.Name, MonSkill.Force);
						if (Enemy.Hp <= 0)
						{
							cout << endl;
							cout << "�¸��Ͽ����ϴ�!" << endl;
							cout << 50 * Enemy.Level << "�� ����ġ ȹ��" << endl;
							cout << 100 * Enemy.Level << "�� ȹ��" << endl;
							Mon.Exp += Enemy.Level * 50;
							trainer.money += 100 * Enemy.Level;
							system("pause");
							break;
						}
						cout << endl;
						cout << Enemy.Name << "��(��)";
						EnemySkill.Attack(Enemy.Code);
						Plusdamage(EnemySkill, Mon);
						Mon.Hit(Mon.Name, EnemySkill.Force);
						if (Mon.Hp <= 0)
						{
							cout << endl;
							cout << "�й��Ͽ����ϴ�!" << endl;
							cout << Mon.Name << "(��)�� �����߽��ϴ�!!" << endl;
							system("pause");
							break;

						}
						system("pause");
					}
					else if (ipt == 2)
					{
						cout << Mon.Name << "��(��)";
						MonSkill2.Attack(Mon.Code);
						Plusdamage(MonSkill2, Enemy);
						Enemy.Hit(Enemy.Name, MonSkill2.Force);
						if (Enemy.Hp <= 0)
						{
							cout << endl;
							cout << "�¸��Ͽ����ϴ�!" << endl;
							cout << 50 * Enemy.Level << "�� ����ġ ȹ��" << endl;
							cout << 100 * Enemy.Level << "�� ȹ��" << endl;
							Mon.Exp += Enemy.Level * 50;
							trainer.money += 100 * Enemy.Level;
							system("pause");
							break;
						}
						cout << endl;
						cout << Enemy.Name << "��(��)";
						EnemySkill2.Attack(Enemy.Code);
						Plusdamage(EnemySkill2, Mon);
						Mon.Hit(Mon.Name, EnemySkill2.Force);
						if (Mon.Hp <= 0)
						{
							cout << endl;
							cout << "�й��Ͽ����ϴ�!" << endl;
							cout << Mon.Name << "(��)�� �����߽��ϴ�!!" << endl;
							system("pause");
							break;

						}
						system("pause");
					}
					else if (ipt == 0)
						break;
					else
					{
						cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
						system("pause");
						system("cls");
					}

				}
					
			} 

		}
		else if (battle == 2) // ����
		{
			int bag;
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << " �̸� : " << Enemy.Name << "  Ÿ�� : " << Enemy.Type << endl;
			cout << " LV : " << Enemy.Level << "  HP : " << Enemy.Hp << " / " << Enemy.FullHP << endl;
			cout << "--------------------------------------" << endl;
			cout << "--------------------------------------" << endl;
			cout << " �̸� : " << Mon.Name << "  Ÿ�� : " << Mon.Type << endl;
			cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
			cout << "--------------------------------------" << endl;
			cout << "--------------------------------------" << endl;
			cout << "1. ��ó��" << endl;
			cout << "2. ���ͺ�" << endl;
			cout << "3. �ڷΰ���" << endl;
			cout << "--------------------------------------" << endl;
			cout << "�Է� ::"; cin >> bag;
			if (bag == 1)
			{
				while (true)
				{
					int ipt1;
					system("cls");
					cout << "--------------------------------------" << endl;
					cout << " �̸� : " << Mon.Name << "  Ÿ�� : " << Mon.Type << endl;
					cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
					cout << "--------------------------------------" << endl;
					cout << "--------------------------------------" << endl;
					cout << "               < �� ó �� >           " << endl;
					trainer.Iteminfo(1);
					cout << "2. �ڷΰ���" << endl;
					cout << "--------------------------------------" << endl;
					cout << "�Է� ::"; cin >> ipt1;
					if (ipt1 == 1)
					{
						trainer.Usepotion(trainer, Mon);
						system("pause");
					}
					else if (ipt1 == 2)
					{
						trainer.Useball(trainer, Enemy);
						
					}
				}

			}
			else if (bag==2)
			{
				while (true)
				{
					int ipt1;
					system("cls");
					cout << "--------------------------------------" << endl;
					cout << " �̸� : " << Mon.Name << "  Ÿ�� : " << Mon.Type << endl;
					cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
					cout << "--------------------------------------" << endl;
					cout << "--------------------------------------" << endl;
					cout << "             < �� �� �� �� >          " << endl;
					trainer.Iteminfo(2);
					cout << "2. �ڷΰ���" << endl;
					cout << "--------------------------------------" << endl;
					cout << "�Է� ::"; cin >> ipt1;
					if (ipt1 == 1)
					{
						trainer.Useball (trainer, Enemy);
						system("pause");
						break;
					}
					else if (ipt1 == 2)
					{
						break;
					}
				}
				break;

			}
		}
		else if (battle == 3)
		{
			cout << "�����ƽ��ϴ�!!!" << endl;
			system("pause");
			break;
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
			system("pause");
			system("cls");
		}
		break;
	}
}

int App::Random()
{
	srand((unsigned int)time(NULL));
	int arr[] = { 11,12,21,22,31,32 };
	int choice = rand() % 6;

	return arr[choice];
}

void App::Shop(Trainer &trainer)
{
	while (true)
	{
		int shop;
		system("cls");
		trainer.getinfo(trainer);
		trainer.Iteminfo(1);
		trainer.Iteminfo(2);
		cout << "--------------------------------------" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1. ��ó�� ����" << endl;
		cout << "2. ��ó�� �Ǹ�" << endl;
		cout << "3. ���ͺ� ����" << endl;
		cout << "4. ���ͺ� �Ǹ�" << endl;
		cout << "5. ����" << endl;
		cout << "--------------------------------------" << endl;
		cout << "�Է� ::"; cin >> shop;
		if (shop == 1)
		{	
			trainer.Buy(1);
		}
		else if (shop == 2)
		{
			trainer.Sell(1);
		}
		else if (shop == 3)
		{
			trainer.Buy(2);
		}

		else if (shop == 4)
		{
			trainer.Sell (2);

		}
		else if (shop == 5)
		{
			break;
		}
		else 
		{
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
			system("pause");
			system("cls");
		}
	}

	
}





