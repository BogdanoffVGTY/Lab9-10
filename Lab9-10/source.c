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

		puts("�������� �������� � �������:\n");
		printf("0. ������� ������\n");
		printf("1. ������� ������ �� �����\n");
		printf("2. ���������� ������� ������\n");
		printf("3. �������� ����������� ������\n");
		printf("4. ����� �� ���������\n");;
		scanf("%d", &panel);

		switch (panel)
		{
		default: case 5: printf("������� �������� ��������"); return 0;
		case 0:
			printf("������� ����� 1-� �������: ");
			scanf("%d", &a);

			printf("������� ����� 2-� �������: ");
			scanf("%d", &b);

			printf("������� ������ ������: ");
			scanf(" %c", &symbol);

			break;
		case 1:
			draw_rectangle(a, b, symbol);
			break;
		case 2:
			printf("������� = %d\n", area_rectangle(a, b));
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
		printf("��� �������\n\n");
	}
	else
	{
		printf("��� �������������\n\n");
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