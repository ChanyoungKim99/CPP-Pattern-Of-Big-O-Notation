/*
O(1) - Constant
�Է¿��� ���� ������ ���� �ʴ� �˰���
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