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
					system("pause");
					break;
				}
				else if (mon == 2)
				{
					cout << "꼬부기 선택!!!!!" << endl;
					Code = 21;
					PocketMon Gbg(21); 
					system("pause");
					break;
				}
				else if (mon == 3)
				{
					cout << "이상해씨 선택!!!!!" << endl;
					Code = 31;
					PocketMon Ish(31); 
					system("pause");
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
	Trainer trainer(ID);
	PocketMon Mon(code);
	Skill MonSkill(Mon.Code);
	if (Mon.Exp == 100)
		Mon.LevelUp(Mon.Level, Mon.Exp, Mon.FullHP);
	while (true)
	{
		system("cls");
		int ipt;

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
			Battle(Mon, trainer);
		}
		else if (ipt == 2)//User 정보 보기
 		{
			while (true)
				{
					system("cls");
					int info, po;
					cout << "--------------------------------------" << endl;
					cout << "1. 포켓몬 목록 보기" << endl;
					cout << "2. Item 목록 보기" << endl;
					cout << "3. 종료" << endl;
					cout << "--------------------------------------" << endl;
					cout << "입력 ::"; cin >> info;
					if (info == 1) //포켓몬 목록 보기
					{
						system("cls");
						cout << "--------------------------------------" << endl;
						cout << "          < 포 켓 몬 목 록 >          " << endl;
						cout << "		0. 종료		   " << endl;
						cout << "		1. " << Mon.Name << endl;
						cout << "--------------------------------------" << endl;
						cout << "		번호 입력 :: "; cin >> po;
						if (po == 0)
							break;
						else
						{
							int i;
							while (true)
							{
								system("cls");
								cout << "--------------------------------------" << endl;
								Mon.getinfo(Mon.Code);
								cout << endl;
								MonSkill.getSkillinfo(Mon.Code);
								cout << "--------------------------------------" << endl;

								cout << endl << "대표 포켓몬으로 지정하시겠습니까?" << endl;
								cout << "1. 예" << endl;
								cout << "2. 아니오" << endl;
								cout << "--------------------------------------" << endl;
								cout << "입력 ::"; cin >> i;
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
									cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
									system("pause");
									system("cls");
								}
							}
						}


					}
					else if (info == 2) //Item 목록 보기
					{
						system("cls");
						cout << "--------------------------------------" << endl;
						cout << "               < 상 처 약 >           " << endl;
						trainer.Iteminfo(1);
						cout << "--------------------------------------" << endl;
						cout << "--------------------------------------" << endl;
						cout << "             < 몬 스 터 볼 >          " << endl;
						trainer.Iteminfo(2);
						cout << "--------------------------------------" << endl;
						system("pause");

					}
					else if (info == 3) //종료
						break;
					else
					{
						cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
						system("pause");
						system("cls");
					}
				}
				
		}
		else if (ipt == 3)
		{
			Shop(trainer);
		}
		else if (ipt == 4) //병원
		{

			int hospital;
			while(true)
			{
				system("cls");
				cout << "--------------------------------------" << endl;
				cout << "          < 포 켓 몬 상 태 >          " << endl;
				cout << " 이름 : " << Mon.Name; if (Mon.Hp == 0) cout << "(기절)";cout << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
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

//void App::Battle(int code)
void App::Battle(PocketMon& Mon, Trainer&trainer)
{
	int battle;
	Skill MonSkill(Mon.Code);
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
			while (true)
			{
				if (Mon.Hp > 0 && Enemy.Hp >0)
				{ 
					while (true)
					{
						int ipt;

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
						cout << "1. " << MonSkill.skillName << endl;
						cout << "2. 뒤로가기" << endl;
						cout << "--------------------------------------" << endl;
						cout << "입력 ::"; cin >> ipt;

						if (ipt == 1)
						{
							cout << Mon.Name << "이(가)";
							MonSkill.Attack(Mon.Code);
							Enemy.Hit(Enemy.Name, MonSkill.Force);
							if (Enemy.Hp <= 0)
							{
								cout << endl;
								cout << "승리하였습니다!" << endl;
								cout << 50 * Enemy.Level << "의 경험치 획득" << endl;
								cout << 100 * Enemy.Level << "원 획득" << endl;
								Mon.Exp += Enemy.Level * 50;
								trainer.money += 100 * Enemy.Level;
								system("pause");
								break;
							}
							cout << endl;
							cout << Enemy.Name << "이(가)";
							EnemySkill.Attack(Enemy.Code);
							Mon.Hit(Mon.Name, EnemySkill.Force);
							if (Mon.Hp <= 0)
							{
								cout << endl;
								cout << "패배하였습니다!" << endl;
								cout << Mon.Name << "(이)가 기절했습니다!!" << endl;
								system("pause");
								break;
								
							}
							system("pause");
						}
						else if (ipt == 2)
							break;
						else
						{
							cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
							system("pause");
							system("cls");
						}
					}
				}

				/*else if (Mon.Hp <= 0 && Enemy.Hp >0)
				{

					//cout << endl;
					//cout << Mon.Name << "(이)가 기절했습니다!!" << endl;
					//system("pause");
					//break;

				}
				else if (Enemy.Hp <= 0 && Mon.Hp >0)
				{
					//cout << 50 * Enemy.Level << "의 경험치 획득" << endl;
					//cout << 100 * Enemy.Level << "원 획득" << endl;
					//
					//break;
				}*/
				break;
			} 
			

		}
		else if (battle == 2) // 가방
		{
			int bag;
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
			cout << "1. 상처약" << endl;
			cout << "2. 몬스터볼" << endl;
			cout << "3. 뒤로가기" << endl;
			cout << "--------------------------------------" << endl;
			cout << "입력 ::"; cin >> bag;
			if (bag == 1)
			{
				while (true)
				{
					int ipt1;
					system("cls");
					cout << "--------------------------------------" << endl;
					cout << " 이름 : " << Mon.Name << "  타입 : " << Mon.Type << endl;
					cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
					cout << "--------------------------------------" << endl;
					cout << "--------------------------------------" << endl;
					cout << "               < 상 처 약 >           " << endl;
					trainer.Iteminfo(1);
					cout << "2. 뒤로가기" << endl;
					cout << "--------------------------------------" << endl;
					cout << "입력 ::"; cin >> ipt1;
					if (ipt1 == 1)
					{
						trainer.Usepotion(trainer, Mon);
						system("pause");
					}
					else if (ipt1 == 2)
					{
						break;
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
					cout << " 이름 : " << Mon.Name << "  타입 : " << Mon.Type << endl;
					cout << " LV : " << Mon.Level << "  HP : " << Mon.Hp << " / " << Mon.FullHP << endl;
					cout << "--------------------------------------" << endl;
					cout << "--------------------------------------" << endl;
					cout << "             < 몬 스 터 볼 >          " << endl;
					trainer.Iteminfo(2);
					cout << "2. 뒤로가기" << endl;
					cout << "--------------------------------------" << endl;
					cout << "입력 ::"; cin >> ipt1;
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
		cout << "1. 상처약 구매" << endl;
		cout << "2. 상처약 판매" << endl;
		cout << "3. 몬스터볼 구매" << endl;
		cout << "4. 몬스터볼 판매" << endl;
		cout << "5. 종료" << endl;
		cout << "--------------------------------------" << endl;
		cout << "입력 ::"; cin >> shop;
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
			cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
			system("pause");
			system("cls");
		}
	}

	
}





