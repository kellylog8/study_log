#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int maxsize = 0;

	while (true)
	{
		cout << "���ڸ� �Է��Ͻÿ�(�����Ϸ��� ���� �Է�) : ";
		cin >> maxsize;

		//if (maxsize == -1)
		//if(abs(maxsize) != maxsize)
		if(maxsize < 0)
		{
			break;
		}

		for (int i = 0; i < maxsize; i++)
		{
			for (int j = 0; j < i + 1; j++)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << "\n---------------------------\n";
	}
	

	return 0;
}