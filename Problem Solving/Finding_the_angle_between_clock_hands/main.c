///////////////////////////////////////////////////////////////////
// this code calculate the smaller angle between the clock hands //
// ////////code input is the time hours and minuits////////////////
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>
int hours,minutes;
int angle1,angle2,final_angle;
int main()
{

    // Take the time from user
    printf("Enter the time rn.\nHours: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &hours);
    printf("Minutes: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &minutes);

    // claculate the angle between clock hands

    angle1 = (hours%12)*30;
    angle2 = (minutes%60)*6;
    final_angle = abs(angle1-angle2);
    if (final_angle>180)
    {
        final_angle = 360-final_angle;

    }
    printf("The angle between clock hands =  %d degree\n", final_angle);
    


    system("pause");
    return 0;
}