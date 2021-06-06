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
	cout << "����     : " << m_age << endl;
	cout << "��ȭ��ȣ : " << m_phone << endl;
	cout << "������   : " << m_weight << endl;
	cout << "Ű       : " << m_height << endl;
}

void Person::SetAge(int age)
{
	if (age < 0)
	{
		cout << "�߸��� �Է������Դϴ�." << endl;
		return;
	}
	m_age = age;
}

void Person::SetHeight(float height)
{
	if (height < 0)
	{
		cout << "�߸��� �Է������Դϴ�." << endl;
		return;
	}
	m_height = height;
}