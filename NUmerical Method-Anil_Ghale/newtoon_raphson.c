#include <stdio.h>
#include <conio.h>
#include <math.h>
float func (float x)
{
	return (x*x+4*x-9);
    
}
float diff(float x)
{
	return 2*x+4;
}
int main()
{
	int itr,maxitr;
	float h, x0, x1, allerr;
	printf("Enter initial guess");
	scanf("%f",&x0);
	printf("Enter allowed error\n");
	scanf("%f",&allerr);
	printf("Enter maximum iteration\n");
	scanf("%f",&maxitr);
	for(itr=1; itr<=maxitr; itr++)
	{
		h=func(x0)/diff(x0);
		x1=x0-h;
        printf(" At Iteration no. %d, x = %f\n", itr, x1);
        if (h < allerr)
        {
            printf("After %d iterations, root = %f\n", itr, x1);
            return 0;
        }
        x0=x1;
	
	}
	printf("error calculating error");
	return 0;
}
