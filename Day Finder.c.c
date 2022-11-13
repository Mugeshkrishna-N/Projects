#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d %d %d",&a,&b,&c);
    d=0;
    if(a!=0)
    {
        j=a;
    }
    switch(b)
    {
        case 1:
         d+=1;
         break;
        case 2:
         d+=4;
         break;
        case 3:
         d+=4;
         break;
        case 4:
         d+=0;
         break;
        case 5:
         d+=2;
         break;
        case 6:
         d+=5;
         break;
        case 7:
         d+=0;
         break;
        case 8:
         d+=3;
         break;
        case 9:
         d+=6;
         break;
        case 10:
         d+=1;
         break;
        case 11:
         d+=4;
         break;
        case 12:
         d+=6;
         break;
    }
    e=c%100;
    f=e/4;
    g=a+e+f+d;
    h=g%7;
    switch(c)
    {
        case 1600 ... 1699:
          i=h+5;
          break;
        case 1700 ... 1799:
          i=h+3;
          break;
        case 1800 ... 1899:
          i=h+1;
          break;
        case 1900 ... 1999:
          i=h+0;
          break;
        case 2000 ... 2099:
          i=h-1;
          break;
        case 2100 ... 2199:
          i=h-3;
          break;
        case 2200 ... 2299:
         i=h-5;
         break;
    }
    switch(i)
    {
        case 0:
          printf("Saturday");
          break;
        case 1:
          printf("Sunday");
          break;
        case 2:
         printf("Monday");
         break;
        case 3:
         printf("Tuesday");
         break;
        case 4:
         printf("Wednesday");
         break;
        case 5:
         printf("Thursday");
         break;
        case 6:
          printf("Friday");
          break;
    }
}
