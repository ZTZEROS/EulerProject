/*
���� 5õ�� �̻��� ���� �̸����� ����ִ� 46KB¥�� �ؽ�Ʈ ���� names.txt �� �ֽ��ϴ� (��Ŭ���ؼ� �ٿ�ε� ��������).
���� �� �̸��� ���ؼ� �Ʒ��� ���� ������� ������ �ű���� �մϴ�.
���� ��� �̸��� ���ĺ� ������ �����մϴ�.
�� �̸��� ���ؼ�, �� �̸��� �̷�� ���ĺ��� �ش��ϴ� ����(A=1, B=2, ..., Z=26)�� ��� ���մϴ�.
���⿡ �� �̸��� ������ ���մϴ�.
���� ��� "COLIN"�� ���, ���ĺ��� �ش��ϴ� ���ڴ� 3, 15, 12, 9, 14�̹Ƿ� ���� 53, �׸��� �������� �� 938��°�� ���Ƿ� ���� ������ 938 �� 53 = 49714�� �˴ϴ�.
names.txt�� ����ִ� ��� �̸��� ������ ����ؼ� ���ϸ� ���Դϱ�?
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

void main()
{
	FILE* fileAddress;
	vector<string> namesV;
	//vector<vector<char>> namesV;

	fileAddress = fopen("names.txt", "r");

	char letterBuffer[2];
	char fullNameBuffer[32];
	bool readingName;

	while (!feof(fileAddress))
	{
		memset(letterBuffer, 0, sizeof(letterBuffer));
		memset(fullNameBuffer, 0, sizeof(fullNameBuffer));
		readingName = 0;

		letterBuffer[0] = fgetc(fileAddress);

		if (letterBuffer[0] == ',' && !readingName) continue;

		if (letterBuffer[0] == '\"' && !readingName) readingName = 1; //readingName = !readingName;

		while (readingName)
		{
			//vector<char> nameBuffersV;
			//
			//letterBuffer[0] = fgetc(fileAddress);
			//
			//if (letterBuffer[0] != '"' && readingName) nameBuffersV.push_back(letterBuffer[0]);
			//else
			//{
			//	namesV.push_back(nameBuffersV);
			//	readingName = 0;
			//	break;
			//}

			letterBuffer[0] = fgetc(fileAddress);

			if (letterBuffer[0] == '"' && readingName)
			{
				namesV.push_back(fullNameBuffer);
				readingName = 0;

				break;
			}

			strcat(letterBuffer, "\0");
			strcat(fullNameBuffer, letterBuffer);
		}
	}

	fclose(fileAddress);

	//sort

	sort(namesV.begin(), namesV.end());

	//qsort(&namesV[0], namesV.size(), sizeof(string), );

	unsigned int sum;
	unsigned int subSum;

	sum = 0;

	for (unsigned int i = 0; i < namesV.size(); ++i)
	{
		char names[32];

		memset(names, 0, sizeof(names));
		subSum = 0;

		for (unsigned int j = 0; j < namesV[i].size(); ++j)
		{
			names[j] = namesV[i][j];
		}

		for(unsigned int j = 0; j < 32; ++j)
		{
			if(names[j]) subSum += names[j] - 64; //subSum += atoi(&names[j] - 64);
		}

		sum += subSum * (i + 1);
	}

	cout << sum << endl;
}
//871198282
*/