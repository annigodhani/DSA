#include<stdio.h>
int main()
{
  int a=1,k=4,v,l=3;
v = a || ++k || l++;
printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a++ || k-- || l++;
printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a++ || ++k || l--;
printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a-- || ++k || l++;
printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = --a || ++k || l++;
printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = ++a || ++k || --l;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a++ || k || l--;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a || ++k || l;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a && ++k && l++;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = ++a && ++k && l++;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a++ && k && l++;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a-- && ++k && l++;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = --a && k-- && l++;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = ++a && k-- && l;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a++ && --k && ++l;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);
v = a && k && l++;
  printf("a:%d,k:%d,v:%d,l:%d\n",a,k,v,l);

}