#include <iostream>
using namespace std;

int main1()
{
	int num;
	num = 3;
	cout << "���� num�� ����" << num << "�Դϴ�.\n";

	return 0;
}

int main2()
{
	int num = 3;
	cout << "���� num�� ����" << num << "�Դϴ�.\n";
	
	num = 5;
	cout << "���� num�� ���� �ٲ�����ϴ�.\n";
	cout << "���� num�� ���ο� ����" << num << "�Դϴ�.\n";

	return 0;
}

int main3()
{
	int num1, num2;
	
	num1 = 3;
	cout << "���� num1�� ����" << num1 << "�Դϴ�.\n";

	num2 = num1;

	cout << "���� num1�� ���� num2�� �����߽��ϴ�.\n";
	cout << "���� num2�� ����" << num2 << "�Դϴ�.\n";

	return 0;
}

int main4()
{
	int num1;
	double num2;
	
	num1 = 3.14;
	num2 = 3.14;

	cout << "���� num1�� ����" << num1 << "�Դϴ�.\n";
	cout << "���� num2�� ����" << num2 << "�Դϴ�.\n";

	return 0;
}

int main5()
{
	int num = 0;
	
	cout << "���ڸ� �Է��Ͻʽÿ�.\n";

	cin >> num;

	cout << num << "(��)�� �ԷµǾ����ϴ�. \n";

	return 0;
}

int main()
{
	int num1, num2;
	cout << "������2�� �Է��Ͻʽÿ�.\n";

	cin >> num1 >> num2;

	cout << "����" << num1 << "(��)�� �ԷµǾ����ϴ�.\n";
	cout << "�� ��������" << num2 << "(��}�� �ԷµǾ����ϴ�.\n";

	return 0;
}