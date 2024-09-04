#include <stdio.h>
#define ex00

/*** EXERCICIOS RECURSIVIDADE ***/

#ifdef ex01
/*
	DESAFIO: Crie a função de potência usando recursividade
*/
int main(int argc, char **argv)
{
	printf("");
    getchar();
	return 0;
}
#endif

#ifdef ex02
/*
	DESAFIO: Crie uma função recursova que calcula o máximo divisor comum (MDC)
  entre dois números inteiros positivos

  Algoritmo Euclidiano:

  O algoritmo Euclidiano é um método para calcular o MDC. Funciona assim:

  Para dois números inteiros positivos, a e b, onde a >= b, o MDC é igual ao MDC
  entre b e o resto da divisão entre a e b.

  MDC(a, b) = MDC (b, a % b)

  Quando o resto da divisão retornar 0, então o outro número é o MDC

  Exemplo:

  MDC(72, 42) = MDC(42, 72 % 42)
  MDC(42, 30) = MDC(30, 42 % 30)
  MDC(30, 12) = MDC(12, 30 % 12)
  MDC(12, 6) = MDC(6, 12 % 6)
  MDC(6, 0) => O MDC é 6‌

  A complexidade de tempo desse algoritmo é O(log(n)) o que significa que ele é
  extremamente eficiente. Também significa que é perfeito para calculos com
  números grandes.
*/
int main(int argc, char **argv)
{
	printf("");
    getchar();
	return 0;
}
#endif
