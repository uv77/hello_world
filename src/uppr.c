#include<stdio.h>
#include<string.h>
#include "uppr.h"
void sgs_clib_convert_to_upper(char*message){
   int i;
   char str[25];
   char*message;
   *message= str;
   

   printf("Enter the string:");
   scanf("%s",str);

   for(i=0;i<=strlen(str);i++){
      if(str[i]>=97&&str[i]<=122)
         str[i]=str[i]-32;
   }
   printf("\nString in uppercase is : %s",str);
   return 0;
}