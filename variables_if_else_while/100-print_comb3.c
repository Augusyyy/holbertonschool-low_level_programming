#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i); // 打印第一个数字
			putchar('0' + j); // 打印第二个数字
			if (i != 8 || j != 9)
			{
				putchar(','); // 打印逗号
				putchar(' '); // 打印空格
			}
		}
	}
	putchar('\n'); // 换行
	return (0);
}
