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
			Trainer trainer(ID); //�Է¹��� ID���� Ʈ���̳� ����
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
					break;
				}
				else if (mon == 2)
				{
					cout << "���α� ����!!!!!" << endl;
					Code = 21;
					PocketMon Gbg(21); 
					break;
				}
				else if (mon == 3)
				{
					cout << "�̻��ؾ� ����!!!!!"; 
					Code = 31;
					PocketMon Ish(31); 
					break;
				}
				else
				{
					cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
					system("pause");

				}
			
			} 
			system("cls");
		Menu(ID, Code);
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

void App::Menu(string ID, int code)
{
	while (true)
	{
		system("cls");
		int ipt;
		Trainer trainer(ID);
		PocketMon Mon(code);
		cout << "--------------------------------------" << endl;
		cout << "���� �̸� : " << ID << "  ��ǥ ���ϸ� : " << Mon.Name << endl;
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
			Battle(Mon.Code);
		}
		else if (ipt == 2)//User ���� ����
 		{
			int info;
			cout << "--------------------------------------" << endl;
			cout << "1. ���ϸ� ��� ����" << endl;
			cout << "2. Item ��� ����" << endl;
			cout << "3. ����" << endl;
			cout << "--------------------------------------" << endl;
			cout << "�Է� ::"; cin >> info;
		}
		else if (ipt == 3)
		{
		}
		else if (ipt == 4) //����
		{

			int hospital;
			while(true)
			{
				system("cls");
				cout << "--------------------------------------" << endl;
				cout << "          < �� �� �� �� �� >          " << endl;
				cout << " �̸� : " << Mon.Name << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
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

void App::Battle(int code)
{
	int battle;

	PocketMon Mon(code);
	Skill MonSkill(code);
	while (true)
	{
		if (Mon.Hp <= 0)
		{
			break;

		}
		PocketMon Enemy(Random()); //���������ؼ� �ϱ�
		Skill EnemySkill(Random());
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
			int ipt;
			do 
			{
				system("cls");
				if (Mon.Hp <= 0)
				{
					cout << endl;
					cout << Mon.Name << "��(��) �����߽��ϴ�!!" << endl;
					break;

				}
				
				cout << "--------------------------------------" << endl;
				cout << " �̸� : " << Enemy.Name << "  Ÿ�� : " << Enemy.Type << endl;
				cout << " LV : " << Enemy.Level << "  HP : " << Enemy.Hp << " / " << Enemy.FullHP << endl;
				cout << "--------------------------------------" << endl;
				cout << "--------------------------------------" << endl;
				cout << " �̸� : " << Mon.Name << "  Ÿ�� : " << Mon.Type << endl;
				cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
				cout << "--------------------------------------" << endl;
				cout << "--------------------------------------" << endl;
				cout << "1. " << MonSkill.skillName << endl;
				cout << "2. �ڷΰ���" << endl;
				cout << "--------------------------------------" << endl;
				cout << "�Է� ::"; cin >> ipt;

				if (ipt == 1)
				{
					
					
						MonSkill.Attack(Mon.Code);
						Enemy.Hit(Enemy.Name, MonSkill.Force);
						//if (Enemy.Hp <= 0) break;			
						cout << endl;
						EnemySkill.Attack(Enemy.Code);
						Mon.Hit(Mon.Name, EnemySkill.Force);
						system("pause");
						//if (Mon.Hp <= 0) break;
						//cout << "���� ����!" << endl;
				
	
				}
				else if (ipt == 2)
					break;
				else
				{
					cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
					system("pause");
					system("cls");
				}
			} while (ipt != 2);
			

		}
		else if (battle == 2)
		{
			break;
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
	}
}

int App::Random()
{
	srand((unsigned int)time(NULL));
	int arr[] = { 11,12,21,22,31,32 };
	int choice = rand() % 6;

	return arr[choice];
}



