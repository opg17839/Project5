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
	printf("Производитель - 1\nОбъем - 2\nСкорость вращения - 3\nИнтерфейс - 4\nОбъем буфера(кеша) - 5\nСкорость обмена данных - 6\nВывод данных о жестком диске - 7\n");
	while (n != 0)
	{
		scanf("%d", &n);
		switch (n)
		{
		case(1):
			printf("Выберите производителя\n");
			scanf("%s", &x.manufacturer);
			break;
		case(2):
			printf("Выберите объем\n");
			scanf("%s", &x.obem);
			break;
		case(3):
			printf("Выберите скорость вращения\n");
			scanf("%s", &x.skorostvrashenia);
			break;
		case(4):
			printf("Выберите интерфейс\n");
			scanf("%s", &x.interfeis);
			break;
		case(5):
			printf("Выберите объем буфера(кеша)\n");
			scanf("%s", &x.bufer);
			break;
		case(6):
			printf("Выберете скорость обмена данных\n");
			scanf("%s", &x.skorostobmena);
			break;
		case(7):
			printf("Производитель: %s\nОбъем: %s\nСкорость вращения: %s\nИнтерфейс: %s\nОбъем буфера(кеша): %s\nСкорость обмена данных: %s\n", x.manufacturer, x.obem, x.skorostvrashenia, x.interfeis, x.bufer, x.skorostobmena);
			break;
		}
	}

}
