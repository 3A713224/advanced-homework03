#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double money;
    double profit1 , profit2 , profit4 , profit6 , profit10 , profit ;
    printf ("�z���������G" ) ;
    scanf ( "%lf" ,& money ) ;
    profit1 = 100000 * 0.1 ;
    profit2 = profit1+100000 * 0.075 ;
    profit4 = profit2 + 200000 * 0.05 ;
    profit6 = profit4 + 200000 * 0.03 ;
    profit10 = profit6 + 400000 * 0.015 ;
    if ( money <= 100000 )
    {
	profit=money*0.1;
	printf("%1f",profit);
	}
	else if ( money <= 200000 )
    {
	profit=profit4+(money-200000)*0.075;
	printf("%1f",profit);
	}
	else if ( money <= 600000 )
    {
	profit=profit4+(money-400000)*0.03;
	printf("%1f",profit);
	}
	else if ( money <= 1000000 )
    {
	profit=profit6+(money-600000)*0.015;
	printf("%1f",profit);
	}
	else if ( money > 1000000 )
    {
	profit=profit10+(money-1000000)*0.01;
	printf("%1f",profit);
	}
} 
