/*
1���� 5������ ���ڸ� ����� ���� one, two, three, four, five �̰�,
 �� �ܾ��� ���̸� ���ϸ� 3 + 3 + 5 + 4 + 4 = 19 �̹Ƿ� ���� ���ڴ� ��� 19���Դϴ�.

1���� 1,000���� ����� ���� ���� ��� �� ���� ���ڸ� ����ؾ� �ұ��?

����: �� ĭ�̳� ������('-')�� ������ �����ϸ�, �ܾ� ������ and �� ���� �ֽ��ϴ�.
   ���� ��� 342�� ����� ���� three hundred and forty-two �� �Ǿ 23 ����,
   115 = one hundred and fifteen �� ��쿡�� 20 ���ڰ� �˴ϴ�.
*/
/*
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	enum CurrentNumbers
	{
		ONE = 3,
		TWO = 3,
		THREE = 5,
		FOUR = 4,
		FIVE = 4,
		SIX = 3,
		SEVEN = 5,
		EIGHT = 5,
		NINE = 4,
		TEN = 3,
		ELEVEN = 6,
		TWELVE = 6,
		THIRTEEN = 8,
		FOURTEEN = 8,
		FIFTEEN = 7,
		SIXTEEN = 7,
		SEVENTEEN = 9,
		EIGHTEEN = 8,
		NINETEEN = 8,
		TWENTY = 6,
		THIRTY = 6,
		FORTY = 5,
		FIFTY = 5,
		SIXTY = 5,
		SEVENTY = 7,
		EIGHTY = 6,
		NINETY = 6,
		HUNDRED = 7,
		THOUSAND = 8,
		AND = 3
	};

	unsigned int from1To9 = ONE + TWO + THREE + FOUR + FIVE + SIX + SEVEN + EIGHT + NINE;
	unsigned int from10To19 = TEN + ELEVEN + TWELVE + THIRTEEN + FOURTEEN + FIFTEEN + SIXTEEN + SEVENTEEN + EIGHTEEN + NINETEEN;
	unsigned int from20To29 = TWENTY * 10 + from1To9;
	unsigned int from30To39 = THIRTY * 10 + from1To9;
	unsigned int from40To49 = FORTY * 10 + from1To9;
	unsigned int from50To59 = FIFTY * 10 + from1To9;
	unsigned int from60To69 = SIXTY * 10 + from1To9;
	unsigned int from70To79 = SEVENTY * 10 + from1To9;
	unsigned int from80To89 = EIGHTY * 10 + from1To9;
	unsigned int from90To99 = NINETY * 10 + from1To9;
	unsigned int from1To99 = from1To9 + from10To19 + from20To29 + from30To39 + from40To49 + from50To59 + from60To69 + from70To79 + from80To89 + from90To99;


	unsigned int from100To199 = (ONE + HUNDRED) * 100 + AND * 99 + from1To99;
	unsigned int from200To299 = (TWO + HUNDRED) * 100 + AND * 99 + from1To99;
	unsigned int from300To399 = (THREE + HUNDRED) * 100 + AND * 99 + from1To99;
	unsigned int from400To499 = (FOUR + HUNDRED) * 100 + AND * 99 + from1To99;
	unsigned int from500To599 = (FIVE + HUNDRED) * 100 + AND * 99 + from1To99;
	unsigned int from600To699 = (SIX + HUNDRED) * 100 + AND * 99 + from1To99;
	unsigned int from700To799 = (SEVEN + HUNDRED) * 100 + AND * 99 + from1To99;
	unsigned int from800To899 = (EIGHT + HUNDRED) * 100 + AND * 99 + from1To99;
	unsigned int from900To999 = (NINE + HUNDRED) * 100 + AND * 99 + from1To99;

	unsigned int from1To999 = from1To99 + from100To199 + from200To299 + from300To399 + from400To499 + from500To599 + from600To699 + from700To799 + from800To899 + from900To999;

	cout << from1To999 + ONE + THOUSAND << endl;
}
//21124
*/