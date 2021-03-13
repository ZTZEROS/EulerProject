/*
�ڽ��� ������ ���(�����)�� ��� ���ϸ� �ڱ� �ڽ��� �Ǵ� ���� ��������� �մϴ�.
���� ��� 28�� 1 + 2 + 4 + 7 + 14 = 28 �̹Ƿ� �������Դϴ�.
��, ������� ���� �ڽź��� ������ ������, �ڽź��� Ŭ ���� �ʰ������ �մϴ�.
12�� 1 + 2 + 3 + 4 + 6 = 16 > 12 �μ� �ʰ��� �߿����� ���� �۽��ϴ�.
���� �ʰ��� �� ���� ������ ��Ÿ�� �� �ִ� �� �� ���� ���� ���� 24 (= 12 + 12) �Դϴ�.
�ؼ������� ����� ����ϸ�, 28123�� �Ѵ� ��� ������ �� �ʰ����� ������ ǥ�� �������� ���� ���� �ֽ��ϴ�.
�� �ʰ����� ������ ��Ÿ�� �� ���� ���� ū ���� �����δ� �� �Ѱ谪���� ������, �ؼ������� ������δ� �� �̻� �� �Ѱ谪�� ���� �� ���ٰ� �մϴ�.
�׷��ٸ�, �ʰ��� �� ���� ������ ��Ÿ�� �� ���� ��� ���� ������ ���� ���Դϱ�?
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	vector<unsigned int> abundantsV;
	//vector<unsigned int> pseudoPrimesV;
	vector<unsigned int> divisorsV[28123];
	unsigned int sumOfDivisors[28123];
	bool sumOfAbundants[28123];

	memset(sumOfDivisors, 0, sizeof(sumOfDivisors));
	memset(sumOfAbundants, 0, sizeof(sumOfAbundants));

	for (unsigned int i = 1; i < 28124; ++i)
	{
		for (unsigned int j = 1; j < (i / 2) + 1; ++j)
		{
			if ((i % j) == 0) divisorsV[i - 1].push_back(j);
		}
	}

	for (unsigned int i = 1; i < 28124; ++i)
	{
		for (unsigned int j = 0; j < divisorsV[i - 1].size(); ++j)
		{
			sumOfDivisors[i - 1] += divisorsV[i - 1][j];
		}

		if (i < sumOfDivisors[i - 1]) abundantsV.push_back(i);
		//if (i - 1 < sumOfDivisors[i - 1]) pseudoPrimesV.push_back(i - 1); //�Ҽ��� ��� �߷����� Ư�̻��� �߰�, 35�� ���� ����
	}

	for (unsigned int i = 0; i < abundantsV.size(); ++i)
	{
		//cout << abundantsV[i] << endl;

		for (unsigned int j = i; j < abundantsV.size(); ++j)
		{
			//if (abundantsV[i] + abundantsV[j] < 28124) sumOfAbundants[abundantsV[i] + abundantsV[j] - 1] = 1;
			//else break;

			if (abundantsV[i] + abundantsV[j] > 28123) break;
			
			sumOfAbundants[abundantsV[i] + abundantsV[j] - 1] = 1;
		}
	}

	unsigned int finalSum = 0;

	for (unsigned int i = 0; i < 28124; ++i)
	{
		if (sumOfAbundants[i]) continue;
		
		finalSum += i + 1;
	}

	cout << finalSum << endl;
}
//4179871
*/