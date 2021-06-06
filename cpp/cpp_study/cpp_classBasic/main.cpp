#include <iostream>
using namespace std;

#include <math.h>

#include "Person.h"

int main()
{
	Person p1;
	p1.SetAge(25);
	p1.SetPhone(1234);
	p1.SetWeigth(75.3f);
	p1.SetHeight(185.3f);
	p1.Print();

	// bmi 지수계산식 : 몸무게(kg) ÷ (신장(m) × 신장(m))
	
	float bmi = p1.GetWeight() / powf(p1.GetHeight(), 2);
	cout << "BMI = " << bmi << "입니다." << endl;

	cout << "--------------------------" << endl;

	//Person p2;
	//p2.SetAge(22);
	//p2.SetPhone(5678);
	//p2.SetWeigth(50.8f);
	//p2.SetHeight(160.5f);
	Person p2(22, 5678, 50.8, 160.5);
	p2.Print();

	bmi = p2.GetWeight() / powf(p2.GetHeight(), 2);
	cout << "BMI = " << bmi << "입니다." << endl;

	return 0;
}
