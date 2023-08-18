#include<stdio.h>
int main()
{
 int a = 17;
 printf("a:%d,a:%d,a:%d,a:%d\n",a,++a,a++,a++);
 printf("a:%d,a:%d,a:%d,a:%d\n",++a,++a,a++,a);
 printf("a:%d,a:%d,a:%d\n",++a,a++,a++);
 printf("a:%d,a:%d,a:%d\n",++a,a++,a);
 printf("a:%d,a:%d,a:%d\n",++a,++a,a++);
 printf("a:%d,a:%d,a:%d\n",a,a++,a++);
 printf("a:%d,a:%d,a:%d\n,a:%d",a,a--,a--,--a);
 printf("a:%d,a:%d,a:%d\n",a--,--a,--a);
 printf("a:%d,a:%d,a:%d\n",a--,a--,a);
 printf("a:%d,a:%d,a:%d\n",--a,a--,--a);
 printf("a:%d,a:%d,a:%d\n",--a,a--,a--);
 printf("a:%d,a:%d,a:%d\n",--a,a--,a); 
}