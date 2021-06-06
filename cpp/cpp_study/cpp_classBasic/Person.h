#pragma once

class Person
{
public:
	Person();	// 기본 생성자
	~Person();	// 기본 소멸자

	// 생성자 (사용자 정의, 커스텀)
	Person(int age, int phone, float weight, float height);

	// 멤버 함수
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

	// 멤버 변수
private:
	int m_age;		// 나이
	int m_phone;	// 핸드폰번호
	float m_weight;	// 몸무게
	float m_height;	// 키
};