#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>   
#include <locale.h>   
#define _USE_MATH_DEFINES   
#include <math.h>
int task10();
int area_rectangle();
void draw_rectangle();
void name();
void rechtangle();

void main() {

	setlocale(LC_CTYPE, "RUS");
	task10();
}
int task10()
{

	int a = 2, b = 2;
	char symbol = '*';

	while (1) {
		int panel;

		puts("Выберите действия с фигурой:\n");
		printf("0. Создать фигуру\n");
		printf("1. Вывести фигуру на экран\n");
		printf("2. Рассчитать площадь фигуры\n");
		printf("3. Показать определение фигуры\n");
		printf("4. Выйти из программы\n");;
		scanf("%d", &panel);

		switch (panel)
		{
		default: case 5: printf("Введено неверное значение"); return 0;
		case 0:
			printf("Введите длину 1-й стороны: ");
			scanf("%d", &a);

			printf("Введите длину 2-й стороны: ");
			scanf("%d", &b);

			printf("Введите символ фигуры: ");
			scanf(" %c", &symbol);

			break;
		case 1:
			draw_rectangle(a, b, symbol);
			break;
		case 2:
			printf("Площадь = %d\n", area_rectangle(a, b));
			break;
		case 3:
			name(a, b);
			break;
		case 4:
			return 0;
		}

	}
}

void draw_rectangle(int a, int b, char symbol) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%c", symbol);
		}
		printf("\n");
	}
}

int area_rectangle(int a, int b) {
	int s;
	s = a * b;
	return s;
}

void name(int a, int b) {
	if (a == b)
	{
		printf("Это квадрат\n\n");
	}
	else
	{
		printf("Это прямоугольник\n\n");
	}
}

void rechtangle() {
	{
		int size, i, j;
		char symbol;

		printf("Input size: ");
		scanf("%d", &size);

		printf("Input symbol: ");
		scanf(" %c", &symbol);

		for (i = 0; i < size; i++) {
			for (j = 0; j < size; j++) {
				printf("%c", symbol);
			}
			printf("\n");
		}
	}
}