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
		cout << "          < �� �� �� �� �� >          " << endl;
		cout << "--------------------------------------" << endl;
		cout << "          1. ���� ����                " << endl;
		cout << "          2. ����                     " << endl;
		cout << "�Է� ::"; cin >> ipt;

		if (ipt == 1)
		{
			system("cls");
			cout << "ID �Է� ::"; cin >> ID;
			system("cls");
			cout << "--------------------------------------" << endl;
			cout << "       < �ʱ� ���ϸ��� ���� >       " << endl;
			cout << "--------------------------------------" << endl;
			cout << "            1. �̻��ؾ�               " << endl;
			cout << "            2. ���̸�                 " << endl;
			cout << "            2. ���α�                 " << endl;
			cout << "--------------------------------------" << endl;
			cout << "�Է� ::"; cin >> mon;
			break;
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

