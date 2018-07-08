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
		int ipt, ID,mon;
		cout << "--------------------------------------" << endl;
		cout << "          < 포 켓 몬 스 터 >          " << endl;
		cout << "--------------------------------------" << endl;
		cout << "          1. 게임 시작                " << endl;
		cout << "          2. 종료                     " << endl;
		cout << "입력 ::"; cin >> ipt;

		if (ipt == 1)
		{
			system("cls");
			cout << "ID 입력 ::"; cin >> ID;
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << "       < 초기 포켓몬스터 선택 >       " << endl;
			cout << "--------------------------------------" << endl;
			cout << "            1. 이상해씨               " << endl;
			cout << "            2. 파이리                 " << endl;
			cout << "            2. 꼬부기                 " << endl;
			cout << "--------------------------------------" << endl;
			cout << "입력 ::"; cin >> mon;
			break;
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

