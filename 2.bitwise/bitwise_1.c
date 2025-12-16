#include<stdio.h>
#include<stdint.h>
#define BV(n) (1<<(n))
void binary(uint8_t value)
{
	int i;
	for(i=7; i>=0; i--)
	{
		printf("%d",(value>>i)&1);
	}
}
int main()
{
	uint8_t reg = 42;
	reg = reg | BV(4);
	printf("Set: %x\nBinary: ", reg);
	binary(reg);
	
	reg = reg & (~BV(1));
	printf("\nClr: %x\nBinary:", reg);
	binary(reg);
	
	reg = reg ^ BV(5);
	printf("\nToggle 1: %x\nBinary:", reg);
	binary(reg);
	reg = reg ^ BV(5);
	printf("\nToggle 2: %x\nBinary:", reg);
	binary(reg);
	return 0;
}

