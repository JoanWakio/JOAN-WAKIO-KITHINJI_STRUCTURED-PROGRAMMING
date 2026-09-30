#include <stdio.h>
//#include [n()
int main()
{
//variables
double area ;
double radius;
const  double pi = 3.142;
//request radius
printf("please provide your radius\n");
scanf("%lf",&radius);
area=pi*radius*radius;
printf("The area is %lf\n", area);
 return 0;
}

