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
		cout << skillName <<"(��)�� ����Ͽ� ���ظ� �������ϴ�!" << endl;
	};
	void getSkillinfo(int code)
	{
		cout << "< Skiil ��� >" << endl;
		cout << "1. ����� : " << skillName << " / ���� : " << Force << " / ���߷� : 100" <<endl; 
	};
	
};
