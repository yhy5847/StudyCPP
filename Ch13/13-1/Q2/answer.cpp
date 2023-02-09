#include <iostream>
using namespace std;

template <typename T>
T SumArray(T arr[], int len)
{
	T sum = (T)0;
	
	for (int i = 0; i < len; ++i)
	{
		sum += arr[i];
	}

	return sum;
}

int main(void)
{
	int intArr[5] = {1, 2, 3, 4, 5};
	double dblArr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	cout << SumArray(intArr, 5)<< ", " << SumArray(dblArr, 5);
	return 0;
}