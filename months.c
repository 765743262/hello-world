#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char ch[40];
	int i;
	int j;
	int sum = 0;
	struct month {
		char month[15];
		char abbr[10];
		int days;
		int number;
	};

	struct month year[12] = {
		{
			"January",
			"Jan.",
			31,
			1
		},
		{
			"Feburary",
			"Feb",
			28,
			2
		},
		{
			"March",
			"Mar.",
			31,
			3
		},
		{
			"April",
			"Apr",
			30,
			4
		},
		{
			"May",
			"May",
			31,
			5
		},
		{
			"June",
			"Jun.",
			30,
			6
		},
		{
			"July",
			"Jul.",
			31,
			7
		},
		{
			"August",
			"Aug.",
			31,
			8

		},
		{
			"September",
			"Sept.",
			30,
			9
		},
		{
			"October",
			"Oct.",
			31,
			10
		},
		{
			"November",
			"Nov.",
			30,
			11
		},
		{
			"December",
			"Dec",
			31, 
			12
		}
	};
	puts("Enter the number a month. (e.g 1 for January.)");
	scanf("%s", ch);
	for (i = 0; i < 12; i++)
	{
		if(strcmp(ch, year[i].month) == 0)
		{
			break;
		}
	}
	for (j = 0; j <= i; j++)
	{
		sum += year[j].days;
	}
	printf("%d days totally.\n", sum);
}
