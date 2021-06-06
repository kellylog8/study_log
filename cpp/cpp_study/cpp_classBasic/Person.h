#pragma once

class Person
{
public:
	Person();	// �⺻ ������
	~Person();	// �⺻ �Ҹ���

	// ������ (����� ����, Ŀ����)
	Person(int age, int phone, float weight, float height);

	// ��� �Լ�
public:
	void Print();

	// getter | setter
public:
	int GetAge() { return m_age; }
	int GetPhone() { return m_phone; }
	float GetWeight() { return m_weight; }
	float GetHeight() { return m_height; }

	void SetAge(int age);
	//void SetAge(int age) { m_age = age; }
	void SetPhone(int phone) { m_phone = phone; }
	void SetWeigth(float weight) { m_weight = weight; }
	void SetHeight(float height);

	// ��� ����
private:
	int m_age;		// ����
	int m_phone;	// �ڵ�����ȣ
	float m_weight;	// ������
	float m_height;	// Ű
};