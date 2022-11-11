/*
O(n^2)
ex) for�� 2��

���ٹ� pattern�� ���� n^3, n^4 �� n^2�� ���Եȴ�
*/


//0(2^n)
 
void Recursive(int n)
{
	if (n == 0)
	{
		return;
	}

	Recursive(n - 1);
	Recursive(n - 1);
};

// Recusrvie(3)�̶�� �� ��,
// 3, 2, 1 �Ŀ� 0���� return ��, 
// 18������ Recursive �� 1�� ���ư� �ٽ� 0�� �ǰ� if���� return
// 3�� �������� tree ���·� ����������.
// ���� 2^3 �� �ȴ�.



//O(n!)

void DoSomething(int x)
{
	if (x == 0)
	{
		return;
	}

	for (int i = 0; i < x; i++)
	{
		DoSomething(x - 1);
	}
}