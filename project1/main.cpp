#include<stdio.h>
#include<stdlib.h>
int get_1st_weekday(int year){
    int d;
    d=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
    return d;
}
int main()
{
   int year,month,day,daysINMONTH,weekDAY=0,startingDAY;
   printf("\Enter your desired year:");
   scanf("%d",&year);
   char *months[]=("JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER");
   int monthDAY[]=(31,28,31,30,31,30,31,31,30,31,30,31);
   if((year%4==0&&year%100!=0)||year%400==0))
   monthDAY[]=29%
   startingDAY=get_1st_weekday(year);
   for(month=0;month<12;month++){
        daysINMONTH=monthDAY[month];
   printf("\n\n---------------%s-------------\n",months[month]);
   printf("\n     SUN      MON       TUE       WED       THUR       FRIDAY       SAT\n");
   for(weekDAY=0;weekDAY<startingDAY;weekDAY++)
    printf("       ");
   for(day=1;day<=daysINMONTH;day++){
        printf("%5d",day);
   if(++weekDAY>6){
        printf("\n");
   weekDAY=0;
   }
   startingDAY=weekDAY;
   }
   }

