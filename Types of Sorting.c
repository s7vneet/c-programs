#include<stdio.h>
void printarray(int a[],int n,int count)
{
    printf("\nThe Sorted Array is:- ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe Number of Swaps will be:- ");
    printf("%d\n",count);
}
void bubble(int a[],int n,int count)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count++;
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printarray(a,n,count);
}
void selection(int a[],int n,int count)
{
    int index;
    for(int i=0;i<n;i++)
    {
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[index])
            {
                index=j;
            }
        }
        if(a[i]!=a[index])
        {
            count++;
            int temp=a[index];
            a[index]=a[i];
            a[i]=temp;
        }
    }
    printarray(a,n,count);
}
void insertion(int a[],int n,int count)
{
    int key,j;
    for(int i=0;i<n;i++)
    {
      key=a[i];
      j=i-1;
      while(j>=0 && a[j]>key)
      {
        a[j+1]=a[j];
        j=j-1;
        count++;
      }
      if(a[j+1]!=key){
      a[j+1]=key;
        count++;
      }
    }
    printarray(a,n,count);
}
void main()
{
    int n,option;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    int a[n],count=0;
    printf("Enter Elements of Array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Choose your Preferred sorting Technique :-\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - insertion Sort\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
            {
                bubble(a,n,count);
            }
        case 2:
            {
                selection(a,n,count);
            }
        case 3:
            {
                insertion(a,n,count);
            }
    }
}
