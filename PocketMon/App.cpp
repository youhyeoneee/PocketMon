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
		cout << "          < 포 켓 몬 스 터 >          " << endl;
		cout << "--------------------------------------" << endl;
		cout << "          1. 게임 시작                " << endl;
		cout << "          2. 종료                     " << endl;
		cout << "--------------------------------------" << endl;
		cout << "입력 ::"; cin >> ipt;

		if (ipt == 1)
		{
			system("cls");
			cout << "ID 입력 ::"; cin >> ID;
			Trainer trainer(ID); //입력받은 ID가진 트레이너 생성
			while (true)
			{
				system("cls");
				cout << "--------------------------------------" << endl;
				cout << "       < 초기 포켓몬스터 선택 >       " << endl;
				cout << "--------------------------------------" << endl;
				cout << "            1. 파이리                 " << endl;
				cout << "            2. 꼬부기                 " << endl;
				cout << "            3. 이상해씨               " << endl;
				cout << "--------------------------------------" << endl;
				cout << "입력 ::"; cin >> mon;
				if (mon == 1)
				{
					cout << "파이리 선택!!!!!" << endl;
					Code = 11;
					PocketMon Piri(11);
					break;
				}
				else if (mon == 2)
				{
					cout << "꼬부기 선택!!!!!" << endl;
					Code = 21;
					PocketMon Gbg(21); 
					break;
				}
				else if (mon == 3)
				{
					cout << "이상해씨 선택!!!!!"; 
					Code = 31;
					PocketMon Ish(31); 
					break;
				}
				else
				{
					cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
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
			cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
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
		cout << "유저 이름 : " << ID << "  대표 포켓몬 : " << Mon.Name << endl;
		cout << "LV : " << Mon.Level << "  EXP : " << Mon.Exp << "% [ " << Mon.Exp << " / "<<Mon.FullExp << " ]" << endl;
		cout << "--------------------------------------" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1. 야생으로 이동 " << endl;
		cout << "2. User 정보 보기 " << endl;
		cout << "3. 포켓몬 상점으로 이동 " << endl;
		cout << "4. 포켓몬 병원으로 이동 " << endl;
		cout << "5. 종료 " << endl;
		cout << "--------------------------------------" << endl;
		cout << "입력 ::"; cin >> ipt;
		if (ipt == 1)
		{
			Battle(Mon.Code);
		}
		else if (ipt == 2)//User 정보 보기
 		{
			int info;
			cout << "--------------------------------------" << endl;
			cout << "1. 포켓몬 목록 보기" << endl;
			cout << "2. Item 목록 보기" << endl;
			cout << "3. 종료" << endl;
			cout << "--------------------------------------" << endl;
			cout << "입력 ::"; cin >> info;
		}
		else if (ipt == 3)
		{
		}
		else if (ipt == 4) //병원
		{

			int hospital;
			while(true)
			{
				system("cls");
				cout << "--------------------------------------" << endl;
				cout << "          < 포 켓 몬 상 태 >          " << endl;
				cout << " 이름 : " << Mon.Name << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
				cout << "--------------------------------------" << endl;
				cout << "--------------------------------------" << endl;
				cout << "1. 회복" << endl;
				cout << "2. 종료" << endl;
				cout << "--------------------------------------" << endl;
				cout << "입력 ::"; cin >> hospital;
				if (hospital == 1)
				{
					cout << "회복 완료" << endl;
					Mon.Hp = Mon.FullHP;
					system("pause");
				}
				else if (hospital == 2)
				{
					break;
				}
				else
				{
					cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
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
			cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
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
		PocketMon Enemy(Random()); //난수생성해서 하기
		Skill EnemySkill(Random());
		system("cls");
		cout << "--------------------------------------" << endl;
		cout << " 이름 : " << Enemy.Name << "  타입 : " << Enemy.Type << endl;
		cout << " LV : " << Enemy.Level << "  HP : " << Enemy.Hp << " / " << Enemy.FullHP << endl;
		cout << "--------------------------------------" << endl;
		cout << "--------------------------------------" << endl;
		cout << " 이름 : " << Mon.Name << "  타입 : " << Mon.Type << endl;
		cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
		cout << "--------------------------------------" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1. 공격" << endl;
		cout << "2. 가방" << endl;
		cout << "3. 도망" << endl;
		cout << "--------------------------------------" << endl;
		cout << "입력 ::"; cin >> battle;
		if (battle == 1)
		{
			int ipt;
			do 
			{
				system("cls");
				if (Mon.Hp <= 0)
				{
					cout << endl;
					cout << Mon.Name << "이(가) 기절했습니다!!" << endl;
					break;

				}
				
				cout << "--------------------------------------" << endl;
				cout << " 이름 : " << Enemy.Name << "  타입 : " << Enemy.Type << endl;
				cout << " LV : " << Enemy.Level << "  HP : " << Enemy.Hp << " / " << Enemy.FullHP << endl;
				cout << "--------------------------------------" << endl;
				cout << "--------------------------------------" << endl;
				cout << " 이름 : " << Mon.Name << "  타입 : " << Mon.Type << endl;
				cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
				cout << "--------------------------------------" << endl;
				cout << "--------------------------------------" << endl;
				cout << "1. " << MonSkill.skillName << endl;
				cout << "2. 뒤로가기" << endl;
				cout << "--------------------------------------" << endl;
				cout << "입력 ::"; cin >> ipt;

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
						//cout << "게임 종료!" << endl;
				
	
				}
				else if (ipt == 2)
					break;
				else
				{
					cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
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
			cout << "도망쳤습니다!!!" << endl;
			system("pause");
			break;
		}
		else
		{
			cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
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



