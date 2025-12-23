#include<stdio.h>
int count (int num)
{
	int count = 0;
	while(num > 0)
	{
		if(num & 1)
		count++;
		num = num >> 1;
	}
	return count;
}
	int main()
	{
		int num = 0b11101;
		printf("Number of 1 bits = %d", count(num));
		return 0;
	}

