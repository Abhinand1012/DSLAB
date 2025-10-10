#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 int arr1[30],arr2[30],i,n,a,b,temp,ch;
 clrscr();
 printf("\n1.CREATE");
 printf("\n2.UNION");
 printf("\n3.FIND");
 printf("\n4.EXIT");
 while(1)
 {
  printf("\nEnter the choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1://CREATE SET
	  printf("Enter the number of elements in the set\n");
	  scanf("%d",&n);
	  printf("Enter the elements in the  set\n");
	  for(i=0;i<n;i++)
	  {
	   scanf("%d",&arr1[i]);
	   arr2[i]=1;
	  }
	  break;
   case 2://UNION
	 printf("Enter the index of elements(2 indices)which are to be connected(Union):\n");
	 scanf("%d%d",&a,&b);
	 temp=arr2[a];
	 for(i=0;i<n;i++)
	 {
	  if(arr2[i]==temp)
	  arr2[i]=arr2[b];
	 }
	 printf("\n Element status after union\n");
	 for(i=0;i<n;i++)
	 {
	  printf("%d\t\t%d\n",arr1[i],arr2[i]);
	 }
	 printf("Elements have been successfully connected(Union operation)\n");
	 break;

   case 3://FIND return value if A and B are connected,else return false
	 printf("Enter the index of elements(2 indices)whose connection is to be checked(Find Operation):\n");
	 scanf("%d%d",&a,&b);
	 if(arr2[a]=arr2[b])
	 printf("Elements at indices %d & %d are connect\n",a,b);
	 else
	 {
	   printf("Elements at indices %d & %d are not connect\n",a,b);
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


