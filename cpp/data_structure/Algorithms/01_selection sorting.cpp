#include <iostream>
using namespace std;

void Print(int arr[10])
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int	arr[10] = { 7,6,3,10,2,4,9,1,5,8 };

	Print(arr);

	for (int i = 0; i < 10; i++)
	{
		cout << "式式 step" << i << "式式式式式式式式式式式式" << endl;

		int min = std::numeric_limits<int>::max();
		int min_idx = -1;

		for (int j = i; j < 10; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				min_idx = j;
			}
		}

		int temp = 0;
		temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;


		Print(arr);
		cout << endl;
	}

	return 0;
}