#include <iostream>
#include <stdlib.h>

using namespace std;

void quick_sort(int[],int,int);
int partition(int[],int,int);
int r_partition(int[],int,int);

void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=r_partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
int r_partition(int a[],int p,int r)
 {
        int i=p+rand()%(r-p+1);
        int temp;
        temp=a[r];
        a[r]=a[i];
        a[i]=temp;
        return partition(a,p,r);
  }
int partition(int a[],int l,int u)
{
    int v,i,j,temp,k;


    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
int main()
{
    int a[50]={3,10,1,4},n=4,i;




    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:";

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[100];
int swap(int l,int h)
{

    int c;

    c=a[l];
    a[l]=a[h];
    a[h]=c;
}
int partition(int L ,int H)

        {
            int i,j,pivot,k;
             srand(time(0));
             k= L+rand()%H; //select pivot randomly


              i=L;
              j=H;
              pivot=a[k];

              while(i<j)
              {
              do{
                  i++;
              }while(a[i]<=pivot);

              do
              {
                  j--;
              }while(a[j]>pivot);
              if(i<j)
              swap(i,j);

}

              swap(k,j);


     return j;

        }
Quicksort(int L ,int H)
   {

       int j;
       if(L<H)
       {
       j=partition(L,H);
       Quicksort(L,j);
       Quicksort(j + 1,H);
   }

   }
int main()

     {
         int i, n,k;
         printf("\nENTER A SIZE OF DATABSE\n");
         scanf("%d",&n);
           for(i=0;i<n;i++)
           scanf("%d",&a[i]);
             k=rand()%n;
             swap(0,k);  //randmoized data base


           a[n]=999;

          Quicksort(0,n);

            for(i=0;i<n;i++)
              printf("\t%d",a[i]);
     }*/
