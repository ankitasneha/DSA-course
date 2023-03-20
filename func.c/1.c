//call by reference and call by value
#include <stdio.h>
void swapcallvalue(int x, int y) 
{
   int temp;
   temp=x;
   x=y;   
   y=temp; 
   return;
}
void swapcallreference(int *c,int *d)
{
   int t;
   t=*c; 
   *c=*d;   
   *d=t;
   return;
}
int main() 
{
   int a = 69;
   int b = 70;
   printf("a before swap: %d\n", a);
   printf("b before swap: %d\n", b);
   swapcallvalue(a, b);
   printf("a after swap: %d\n", a);
   printf("b after swap: %d\n", b);
   int f=100;
   int g=200;
   printf("f before swap: %d\n", f);
   printf("g before swap: %d\n", g);
   swapcallreference(&f, &g);
   printf("f after swap: %d\n", f);
   printf("g after swap: %d\n", g);
   return 0;
}
   