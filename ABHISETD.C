#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 int set1[30],set2[30],s1,s2,uni[30],inter[30],diff[30],i,ch;
 clrscr();
 printf("Enter the number of elements in the 1st set\n");
 scanf("%d",&s1);
 printf("Enter the elements in the first set(only 0s and 1s\n");
 for(i=0;i<s1;i++)
 {
  scanf("%d",&set1[i]);
 }
 printf("Enter the number of elements in the 2nd set\n");
 scanf("%d",&s2);
 printf("Enter the elements in the 2nd set(only 0s and 1)\n");
 for(i=0;i<s2;i++)
 {
  scanf("%d",&set2[i]);
 }
 printf("\n1.UNION");
 printf("\n1.INTERSECTION");
 printf("\n1.DIFFERENCE");
 printf("\n1.EXIT");
 while(1)
 {
  printf("\nEnter the choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1://UNION
	 if(s1==s2)
	 {
	  printf("\nElements after Union operation");
	  for(i=0;i<s1;i++)
	  {
	   uni[i]=set1[i]|set2[i];
	   printf("%d",uni[i]);
	  }
	 }
	 else
	 {
	  printf("Set UNION not possible as sets are of different size\n");
	 }
	 break;


   case 2://INTERSECTION
	 if(s1==s2)
	 {
	  printf("\nElements after Intersection operation");
	  for(i=0;i<s1;i++)
	  {
	   inter[i]=set1[i]&set2[i];
	   printf("%d",inter[i]);
	  }
	 }
	 else
	 {
	  printf("Set INTERSECTION not possible as sets are of different size\n");
	 }
	 break;

   case 3://DIFFERENCE
	 if(s1==s2)
	 {
	  printf("\nElements after Difference operation");
	  for(i=0;i<s1;i++)
	  {
	   diff[i]=set1[i]&~set2[i];
	   printf("%d",diff[i]);
	  }
	 }
	 else
	 {
	  printf("Set UNION not possible as sets are of different size\n");
	 }
	 break;
   case 4:
	 exit(0);
	 break;
   default:printf("\nWrong choice please select a valid choice");
   break;
   }
  }
}


