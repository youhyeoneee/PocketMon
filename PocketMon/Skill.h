#pragma once
#include <string>
#include <iostream>
#include "PocketMon.h"
using namespace std;
class Skill
{
public:
	string skillName;
	string Type; // �Ӽ�
	int Force; //����
	float Accuracy =100; //���߷�
public:
	Skill();
	Skill(int Code);
	~Skill();
public:
	void Attack(int Code)
	{
		cout << skillName <<"(��)�� ����Ͽ� ���ظ� �������ϴ�!" << endl;
	};
	void getSkillinfo(int code)
	{
		cout << "< Skiil ��� >" << endl;
		cout << "1. ����� : " << skillName << " / ���� : " << Force << " / ���߷� : "<< Accuracy <<endl; 
	};
	
	
};
