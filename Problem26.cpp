/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<vector<unsigned int>> decimalFractionsV;

	for (unsigned int i = 2; i < 1000; ++i)
	{
		vector<unsigned int> decimalFractionV;

		//1. ��ȯ�Ҽ��� �ƴ� ���� ����. �������̹Ƿ� ��� ��ȯ�Ҽ��̰ų� ����
		
		//2. ���� ���ڰ� ������ �����鼭�� ��ȯ�� �ƴ� ��� : 10�� �ڸ� ���ڶ�� ������ ���ڸ��� ���� �� �ڸ� ���ڸ� üũ, 100�� �ڸ� ���ڶ�� ������ ���ڸ��� ���� �� �ڸ� ���ڸ� üũ
		//3. ��ȯ���� float ������ �Ѿ�� ��� : �����⸦ ���� ������ �� �ڸ����� ���Ϳ� ����


		unsigned int dividend = 1;

		if (i < 10)
		{
			bool loop = 1;

			while (loop)
			{
				unsigned int quotient = 0;

				while (dividend >= i)
				{
					++quotient;
					dividend -= i;
				}

				decimalFractionV.push_back(quotient);

				for (unsigned int j = 0; j < decimalFractionV.size() - 1; ++j)
				{
					if (decimalFractionV.size() < 2) continue;

					if (decimalFractionV[j] == decimalFractionV[decimalFractionV.size() - 1]) loop = 0;
				}

				if (dividend > 0) dividend *= 10;
				else loop = 0;
			}
		}
		else if (i < 100)
		{
			bool loop = 1;

			while (loop)
			{
				unsigned int quotient = 0;

				while (dividend > i)
				{
					++quotient;
					dividend -= i;
				}

				decimalFractionV.push_back(quotient);

				for (unsigned int j = 1; j < decimalFractionV.size() - 1; ++++j)
				{
					if (decimalFractionV.size() < 3) continue;

					if (decimalFractionV[j] == decimalFractionV[decimalFractionV.size() - 1])
					{
						if (decimalFractionV[j - 1] == decimalFractionV[decimalFractionV.size() - 2]) loop = 0;
					}
					
				}

				if (dividend > 0) dividend *= 10;
				else loop = 0;
			}
		}
		else if (i < 1000)
		{
			bool loop = 1;

			while (loop)
			{
				unsigned int quotient = 0;

				while (dividend > i)
				{
					++quotient;
					dividend -= i;
				}

				decimalFractionV.push_back(quotient);

				for (unsigned int j = 2; j < decimalFractionV.size() - 1; ++++++j)
				{
					if (decimalFractionV.size() < 4) continue;

					if (decimalFractionV[j] == decimalFractionV[decimalFractionV.size() - 1])
					{
						if (decimalFractionV[j - 1] == decimalFractionV[decimalFractionV.size() - 2])
						{
							if (decimalFractionV[j - 2] == decimalFractionV[decimalFractionV.size() - 3]) loop = 0;
						}
					}
				}

				if (dividend > 0) dividend *= 10;
				else loop = 0;
			}
		}

		decimalFractionsV.push_back(decimalFractionV);
	}

	unsigned int longestDecimalFraction = 0;
	unsigned int base = 0;

	for (unsigned int i = 2; i < 1000; ++i)
	{
		if (longestDecimalFraction < decimalFractionsV[i - 2].size())
		{
			longestDecimalFraction = decimalFractionsV[i - 2].size();
			base = i;
		}
	}

	cout << base << endl;
}
983
*/