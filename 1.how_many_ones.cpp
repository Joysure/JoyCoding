#include <stdio.h>

int main()
{
	unsigned int input=63;

        printf("input the number: ");
        scanf("%d",&input);
        int cnt = 0;
	while(input)
	{
                cnt++;
		input=input&(input-1);
	}
        printf("%d\n",cnt);
	return input;
}
