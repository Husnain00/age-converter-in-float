/*Made by Muhhamd husnain Afridi
version 1.0
in this program we will convert our age from years to months,weeks,days,hours,minutsandseconds
in float
*/


#include<stdio.h>
#include<conio.h>
int main (void)
{
	float years;
	float months;
	float weeks;
	float days;
	float hours;
	float minuts;
	//long unsigned int seconds;
	float seconds;
	printf("\nenter your age in years\n");
	scanf("%f",&years);
    months=years*12;
    printf("\nyour age in months %.0f\n",months);
    weeks=months*4;
    printf("\nyour age in weeks %.0f\n",weeks);
    days=years*365;
	printf("\nyour age in days %.0f\n",days);
	hours=days*24;
	printf("\nyour age in hours %.0f\n",hours);
	minuts=hours*60;
	printf("\nyour age in minuts %.0f\n",minuts);
	seconds=minuts*60;
	printf("\nyour age in seconds %.0f\n",seconds);
	return 0;	
	
	}
