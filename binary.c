#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[20],first,last,n,i,mid,search;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the array dann");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("enter the search elements");
    scanf("%d",&search);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<last)
    {
         if(arr[mid]<search)
         {
         first=mid+1;
         }
         else if(arr[mid]<search)
         {
            printf("%d found at location%d\n",search,mid+1);
            break;
         }
         else if(first>last)
         {
         last=mid-1;
         mid=(first+last)/2;
         }
         if(first>last)
         {
             printf("not found!%d is not present in the list\n",&search);
         }
    getch();
         }
}

