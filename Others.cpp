/*
O(n^2)
ex) for문 2개

점근법 pattern에 의해 n^3, n^4 도 n^2에 포함된다
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

// Recusrvie(3)이라고 할 때,
// 3, 2, 1 후에 0에서 return 후, 
// 18번줄의 Recursive 에 1이 돌아가 다시 0이 되고 if에서 return
// 3을 기준으로 tree 형태로 나뉘어진다.
// 따라서 2^3 이 된다.



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