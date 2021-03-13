/*
n�� ����� �߿��� �ڽ��� ������ ���� ���� d(n)���� �������� ��,
���� �ٸ� �� ���� a, b�� ���Ͽ� d(a) = b �̰� d(b) = a �̸�
a, b�� ģȭ���̶� �ϰ� a�� b�� ���� ģȭ��(��ּ�)��� �մϴ�.

���� ��� 220�� ����� �ڽ��� �����ϸ� 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110 �̹Ƿ� �� ���� d(220) = 284 �Դϴ�.
�� 284�� ����� �ڽ��� �����ϸ� 1, 2, 4, 71, 142 �̹Ƿ� d(284) = 220 �Դϴ�.
���� 220�� 284�� ģȭ���� �˴ϴ�.

10000 ������ ģȭ������ ��� ã�Ƽ� �� ���� ���ϼ���.
*/
/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<unsigned int> divisorsV[10000];
	unsigned int sumOfDivisors[10000];
	vector<unsigned int> amicableNumbersV;
	unsigned int sumOfamicableNumbers;

	for (unsigned int i = 1; i < 10001; ++i)
	{
		for (unsigned int j = 1; j < (i / 2) + 1; ++j)
		{
			if ((i % j) == 0) divisorsV[i - 1].push_back(j);
		}
	}

	for (unsigned int i = 1; i < 10001; ++i)
	{
		unsigned int sumOfDivisor = 0;

		for (unsigned int j = 0; j < divisorsV[i - 1].size(); ++j)
		{
			sumOfDivisor += divisorsV[i - 1][j];
		}

		sumOfDivisors[i - 1] = sumOfDivisor;
	}

	for (unsigned int i = 1; i < 10001; ++i)
	{
		if (sumOfDivisors[i - 1] < 10001)
		{
			if (i == sumOfDivisors[sumOfDivisors[i - 1] - 1])
			{
				if (i != sumOfDivisors[i - 1]) amicableNumbersV.push_back(i);
			}
		}
	}

	sumOfamicableNumbers = 0;

	for (unsigned int i = 0; i < amicableNumbersV.size(); ++i)
	{
		sumOfamicableNumbers += amicableNumbersV[i];
	}

	cout << sumOfamicableNumbers << endl;
}
//31626
*/