#pragma once
#include <string>
#include <iostream>

using namespace std;
class Skill
{
public:
	string skillName;
	string Type; // �Ӽ�
	int Force; //����
	float Accuracy; //���߷�
	int Code;
public:
	Skill();
	Skill(int code);
	~Skill();
public:
	void Attack(int Code)
	{

		if (Code == 11)//���̸�
		{
			cout << "�Ҳɼ��ʸ� ����Ͽ� ���ظ� �������ϴ�!" << endl;
		}
		else if (Code == 12)//����
		{
			cout << "�ڵ��� �����⸦ ����Ͽ� ���ظ� �������ϴ�!" << endl;
		}
		else if (Code == 21)//���α�
		{
			cout << "�������� ����Ͽ� ���ظ� �������ϴ�!" << endl;
		}
		else if (Code == 22)//�Ƶ�
		{
			cout << "�������� ����Ͽ� ���ظ� �������ϴ�!" << endl;
		}
		else if (Code == 31)//�̻��ؾ�
		{
			cout << "����ä���� ����Ͽ� ���ظ� �������ϴ�!" << endl;
		}
		else if (Code == 32)//����
		{
			cout << "������⸦ ����Ͽ� ���ظ� �������ϴ�!" << endl;
		}
	};
	
};
