#include <iostream> 
using namespace std;
bool isPrime(int num)

;   int main()
{
	int array[14] = { 10,21,77,8,6,12,19,2,3,6,71,66,55,13 };
	bool check;
	int val;
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 14 - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				check = isPrime(j);
				if (array[j] % 2 != 0 && check == true)
				{
					int temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
				else
				{
					int temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}
	}

	//output    
	for (int i = 0; i < 14; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}



bool isPrime(int num)
{
	bool flag = true;
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)

		{
			flag = false;
			break;
		}
	}
	return flag;
}