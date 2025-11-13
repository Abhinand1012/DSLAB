#include<stdio.h>
#include<stdlib.h>
void main()
{
 int arr1[30],i,n,a,b,temp,arr2[30],ch;
 clrscr();
 printf("\n1.Create");
 printf("\n2.Union");
 printf("\n3.Find");
 printf("\n4.Exit");
 while(1)
 {
  printf("\n Enter choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:// Create Set
    printf("Enter No.of Element in Set:");
    scanf("%d",&n);
    printf("Enter Elements in Set:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr1[i]);
    arr2[i]=i;
    }
   case 2: //union
	printf("\nEnter the index of Element(2 Indicates) which are to be connected(union):\n");
	scanf("%d%d",&a,&b);
	temp=arr2[a];
	for(i=0;i<n;i++)
	{
	 if(arr2[i]==temp)
	  arr2[i]=arr2[b];
	}
       printf("\nElement Status after Union\n");
       for(i=0;i<n;i++)
       {
	printf("%d\t\t%d\n",arr1[i],arr2[i]);
       }
      printf("\nElement have been Successfully connrcted (union opertion)\n");
      break;
  case 3://Find-return true if A and B are connected, else returns false.
      printf("\n Enter the index of element(2 indicates)whose connection is to be checked(find opertion):\n");
      scanf("%d%d",&a,&b);
      if(arr2[a]==arr2[b])
       printf("\n Elements at indices %d & %d are connected\n",a,b);
      else
       printf("\nElement at indices %d & %d are not connected\n",a,b);
      break;
  case 4://Exit
       exit(0);
       break;
     default:
      printf("\n Wrong choice,please select a valid choice");
     break;
    }
   }
  }
