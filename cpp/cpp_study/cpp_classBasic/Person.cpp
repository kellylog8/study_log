#include "Person.h"

#include <iostream>
using namespace std;

Person::Person()
	: m_age(0)
	, m_phone(0)
	, m_weight(0.0f)
	, m_height(0.0f)
{
	//m_age = 0;
	//m_phone = 0;
}

Person::~Person()
{

}

Person::Person(int age, int phone, float weight, float height)
	: m_age(age)
	, m_phone(phone)
	, m_weight(weight)
	, m_height(height)
{
}

void Person::Print()
{
	cout << "나이     : " << m_age << endl;
	cout << "전화번호 : " << m_phone << endl;
	cout << "몸무게   : " << m_weight << endl;
	cout << "키       : " << m_height << endl;
}

void Person::SetAge(int age)
{
	if (age < 0)
	{
		cout << "잘못된 입력정보입니다." << endl;
		return;
	}
	m_age = age;
}

void Person::SetHeight(float height)
{
	if (height < 0)
	{
		cout << "잘못된 입력정보입니다." << endl;
		return;
	}
	m_height = height;
}