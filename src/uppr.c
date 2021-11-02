#include<stdio.h>
#include<string.h>
#include "uppr.h"

void sgs_clib_convert_to_upper(char message[]){
 
  printf("\nNow in coverter..\n");
  printf("Enter the string :");
  
  gets(message);

   for(int i=0;i<=strlen(message);i++)
   {
      if(message[i]>=97&&message[i]<=122)

         (message[i])=(message[i])-32;
   }

 printf("\nString in Upper Case = %s", message);

}  