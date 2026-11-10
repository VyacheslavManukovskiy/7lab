#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int task1();
int task2();
int task3();

void main() {
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
	task3();
}

int task1()
{
	char c;
	printf("Введите символы 'a' or 'b': ");
	scanf("%c", &c);
	switch (c)
	{
	case 'a':
		printf("Введено 'a'.\n");
		break;
	case 'b':
		printf("Введено 'b'.\n");
		break;
	default:
		if (isdigit(c)) {
			puts("Это цифра");
			break;
		}
		else if (isalpha(c)) {
			puts("Это буква");
			break;
		}
		printf("Неизвестный символ\n");
	}
	return 0;
}

int task2() {
	float x, y;
	char c;
	puts("\nВведите операцию без пробелов:\n ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c) {
	case '+':
		printf("=%f", x + y);
		break;
	case '-':
		printf("=%f", x - y);
		break;
	case '*':
		printf("=%f", x * y);
		break;
	case '/':
		printf("=%f", x / y);
		break;
	case '^':
		printf("=%f", pow(x, y));
		break;
	default:
		puts("неизвестный знак операции");
	}
	return 0;
}
int task3() {
    int age_months;

    // Ввод данных
    printf("Введите возраст ребенка в месяцах: ");
    if (scanf("%d", &age_months) != 1) {
        printf("Ошибка: введите целое число.\n");
        return 1;
    }

    // Проверка на корректность ввода
    if (age_months < 0) {
        printf("Ошибка: возраст не может быть отрицательным.\n");
        return 1;
    }
    switch (age_months) {
        // Новорожденный до 2 мес
    case 0:
    case 1:
        printf("Новорожденный\n");
        break;

    default:
        if (age_months < 12) {
            // Младенец до 12 мес
            printf("Младенец\n");
        }
        else if (age_months < 36) {
            // Раннее детство от 12 до 35 месяцев
            printf("Раннее детство\n");
        }
        else if (age_months < 84) {
            // Дошкольник от 36 до 83 мес
            printf("Дошкольник\n");
        }
        else if (age_months < 156) {
            // Школьник от 84 до 155 мес
            printf("Школьник\n");
        }
        else if (age_months < 204) {
            // Подросток от 156 до 203 мес
            printf("Подросток\n");
        }
        else {
            // Взрослый больше 203 мес
            printf("Взрослый\n");
        }
        break;
    }

    return 0;
}