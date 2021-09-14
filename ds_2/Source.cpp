#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale>
void main()
{
	setlocale(LC_ALL, "RUS");
	float A, B, C, S, p;
	printf_s("Введите A, B и С:");
	scanf_s(" %f %f %f", &A, &B, &C);
	p = A + B + C;
	S = sqrt(p*(p-A)*(p-B)*(p-C));
	if (A + B > C && A + C > B && B + C > A) printf_s("Площадь треугольника равна %.2f", S);
	else printf_s("Такого треугольника не существует!");
	_getche();
}