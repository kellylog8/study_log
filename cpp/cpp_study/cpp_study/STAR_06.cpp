#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int maxsize = 0;

	while (true)
	{
		cout << "숫자를 입력하시오(종료하려면 음수 입력) : ";
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