/*
O(n) - Linear

O(n * log n) - LogLinear
*/

#include <iostream>

void DoSomething(int numbers[], int count)
{
	for (int i = 0; i <= count; i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	// base case
	if (count < 1)
	{
		return;
	}

	// recursive case
	DoSomething(numbers, count / 2);
}

// Worst Case�� ����ϸ�
// for���� n, ����Լ��� log n 
// ���� n * log n �̴�.