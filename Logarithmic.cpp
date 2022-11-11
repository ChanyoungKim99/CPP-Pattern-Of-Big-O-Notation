/*
O(log n) = Logarithmic

몇 번 나눠지느냐?
*/
void DoSomething(int x)
{
	while (x >= 1)
	{
		x /= 2;
	}
}

void DoSomething2(int x)
{
	for (int i = 1; i <= x; i *= 2)
	{
		// ex) x =32라면
		// 32, 16, 8, 4, 2, 1
	}
}

void DoSomething3(int x)
{
	if (x < 1)
	{
		return;
	}

	DoSomething3(x / 2);
}