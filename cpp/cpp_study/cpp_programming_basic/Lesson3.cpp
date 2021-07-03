#include <iostream>
using namespace std;

int main1()
{
	int num;
	num = 3;
	cout << "변수 num의 값은" << num << "입니다.\n";

	return 0;
}

int main2()
{
	int num = 3;
	cout << "변수 num의 값은" << num << "입니다.\n";
	
	num = 5;
	cout << "변수 num의 값이 바뀌었습니다.\n";
	cout << "변수 num의 새로운 값은" << num << "입니다.\n";

	return 0;
}

int main3()
{
	int num1, num2;
	
	num1 = 3;
	cout << "변수 num1의 값은" << num1 << "입니다.\n";

	num2 = num1;

	cout << "변수 num1의 값을 num2에 대입했습니다.\n";
	cout << "변수 num2의 값은" << num2 << "입니다.\n";

	return 0;
}

int main4()
{
	int num1;
	double num2;
	
	num1 = 3.14;
	num2 = 3.14;

	cout << "변수 num1의 값은" << num1 << "입니다.\n";
	cout << "변수 num2의 값은" << num2 << "입니다.\n";

	return 0;
}

int main5()
{
	int num = 0;
	
	cout << "숫자를 입력하십시오.\n";

	cin >> num;

	cout << num << "(이)가 입력되었습니다. \n";

	return 0;
}

int main()
{
	int num1, num2;
	cout << "정수를2개 입력하십시오.\n";

	cin >> num1 >> num2;

	cout << "먼저" << num1 << "(이)가 입력되었습니다.\n";
	cout << "그 다음으로" << num2 << "(이}가 입력되었습니다.\n";

	return 0;
}