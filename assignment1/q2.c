#include<stdio.h>


int main(){
       int x= 567;
       int o,t,h,temp,rev;
       h=x/100;
       temp=x%100;
       t = temp/10;
       o= temp%10;
       rev = o*100+t*10+h;
       printf("Reverse is %d",rev);
       return 0;
}


