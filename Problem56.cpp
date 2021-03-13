/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	unsigned int maxDigitsSum = 0;

	for (unsigned int i = 1; i < 100; ++i)
	{
		vector<unsigned int> currentNumberDigitsV;
		unsigned int currentDigitsSum;

		currentNumberDigitsV.push_back(1);

		//j�� ������ �����ϰ� ���� �ʾƵ� ���� �ӵ��� 100�� ��������Ƿ� ū ���ɺ�ȭ�� ������ �� �� ������ ����
		for (unsigned int j = 1; j < 100; ++j)
		{
			currentDigitsSum = 0;

			for (unsigned int k = 0; k < currentNumberDigitsV.size(); ++k)
			{
				currentNumberDigitsV[k] *= i;
			}
			
			for (unsigned int k = 0; k < currentNumberDigitsV.size(); ++k)
			{
				if (currentNumberDigitsV[k] > 9)
				{
					if(k + 1 < currentNumberDigitsV.size()) currentNumberDigitsV[k + 1] += currentNumberDigitsV[k] / 10;
					else currentNumberDigitsV.push_back(currentNumberDigitsV[k] / 10);

					currentNumberDigitsV[k] %= 10;
				}
			}

			for (unsigned int k = 0; k < currentNumberDigitsV.size(); ++k)
			{
				currentDigitsSum += currentNumberDigitsV[k];
			}

			if (maxDigitsSum < currentDigitsSum) maxDigitsSum = currentDigitsSum;
		}
	}

	cout << maxDigitsSum << endl;
}
//972
*/