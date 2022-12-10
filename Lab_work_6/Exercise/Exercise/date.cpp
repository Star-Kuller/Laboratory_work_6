#include "date.h"

void date::reduction() {
	for (int i = 0; i < 12; i++)
	{
		if (month > 12)
			year++;
		month %= 13;
		if (month == 0)
			month++;
		if (day == 0)
			day++;
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day > 31)
			{
				day -= 31;
				month++;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day > 30)
			{
				day -= 30;
				month++;
			}
			break;
		case 2:
			if (day > 28)
			{
				day -= 28;
				month++;
			}
			break;
		default:
			break;
		}
	}
}
