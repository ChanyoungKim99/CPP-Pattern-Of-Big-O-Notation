/*
O(1) - Constant
입력에는 전혀 영향을 받지 않는 알고리즘
*/

int Add(int x, int y)
{
	return x + y;
}

int Cubic(int x)
{
	int result{ 1 };

	for (int i = 0; i < 3; i++)
	{
		result *= x;
	}

	return result;
}