#pragma once
#include <string>
#include <iostream>

using namespace std;
class Skill
{
public:
	string skillName;
	string Type; // 속성
	int Force; //위력
	float Accuracy; //명중률
	int Code;
public:
	Skill();
	Skill(int code);
	~Skill();
public:
	void Attack(int Code)
	{

		if (Code == 11)//파이리
		{
			cout << "불꽃세례를 사용하여 피해를 입혔습니다!" << endl;
		}
		else if (Code == 12)//은딱
		{
			cout << "핸드폰 던지기를 사용하여 피해를 입혔습니다!" << endl;
		}
		else if (Code == 21)//꼬부기
		{
			cout << "물대포를 사용하여 피해를 입혔습니다!" << endl;
		}
		else if (Code == 22)//아딱
		{
			cout << "별다줄을 사용하여 피해를 입혔습니다!" << endl;
		}
		else if (Code == 31)//이상해씨
		{
			cout << "덩쿨채찍을 사용하여 피해를 입혔습니다!" << endl;
		}
		else if (Code == 32)//지딱
		{
			cout << "지딱대기를 사용하여 피해를 입혔습니다!" << endl;
		}
	};
	
};
