#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

struct hdd
{
	char manufacturer[40];
	char obem[40];
	char skorostvrashenia[40];
	char interfeis[40];
	char bufer[40];
	char skorostobmena[40];
};

typedef struct hdd Hdd;

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "Rus");
	Hdd x;
	x = (Hdd){ ' ', ' ', ' ', ' ', ' ', ' ' };
	int n = 1;
	printf("������������� - 1\n����� - 2\n�������� �������� - 3\n��������� - 4\n����� ������(����) - 5\n�������� ������ ������ - 6\n����� ������ � ������� ����� - 7\n");
	while (n != 0)
	{
		scanf("%d", &n);
		switch (n)
		{
		case(1):
			printf("�������� �������������\n");
			scanf("%s", &x.manufacturer);
			break;
		case(2):
			printf("�������� �����\n");
			scanf("%s", &x.obem);
			break;
		case(3):
			printf("�������� �������� ��������\n");
			scanf("%s", &x.skorostvrashenia);
			break;
		case(4):
			printf("�������� ���������\n");
			scanf("%s", &x.interfeis);
			break;
		case(5):
			printf("�������� ����� ������(����)\n");
			scanf("%s", &x.bufer);
			break;
		case(6):
			printf("�������� �������� ������ ������\n");
			scanf("%s", &x.skorostobmena);
			break;
		case(7):
			printf("�������������: %s\n�����: %s\n�������� ��������: %s\n���������: %s\n����� ������(����): %s\n�������� ������ ������: %s\n", x.manufacturer, x.obem, x.skorostvrashenia, x.interfeis, x.bufer, x.skorostobmena);
			break;
		}
	}

}
