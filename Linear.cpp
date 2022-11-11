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

// Worst Case를 고려하면
// for문의 n, 재귀함수의 log n 
// 따라서 n * log n 이다.