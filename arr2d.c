//program by LALITH SAGAR J
//date : 22/8/19 
//time : 8:51 pm
#include<stdio.h>
#include<stdlib.h>
int add(int m,int n,int p,int q,int a[m][n],int b[p][q]);
int sub(int m,int n ,int p,int q,int a[m][n],int b[p][q]);
int multiply(int m,int n,int p,int q,int a[m][n],int b[p][q]);
int search(int m,int n, int a[m][n],int e);
int main()
{
    int m,n;
    printf("enter the rows and columns of matrix 1 :");
    scanf("%d%d",&m,&n);
    int p,q;
    printf("enter the rows and columns of matrix 2 :");
    scanf("%d%d",&p,&q);
    int a[m][n],ch,b[p][q];
    printf("enter the elements of matrix 1:");
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix 2:");
    for(int i=0;i<p;i++)
       for(int j=0;j<q;j++)
           scanf("%d",&b[i][j]);
    while(1){
         printf("options:\n'1'.addition\n'2'.subtraction\n'3'.multiplication\n'4'.searching \n'0'.exit\n\n");
         scanf("%d",&ch);
         int e;
         if(ch==4)
         {
             printf("enter the element to be searched in matrix 1 :");
             scanf("%d",&e);
         }
         switch(ch)
         {
              case 0:exit(0);
                     break;
              case 1:add(m,n,p,q,a,b);
                     break;
              case 2:sub(m,n,p,q,a,b);
                     break;
              case 3:multiply(m,n,p,q,a,b);
                     break;
              case 4:search(m,n,a,e);
                     break;
              default:printf("wrong choice ..");
                     break;
         }
   }
         return 0;
}
int add(int m,int n,int p,int q,int a[m][n],int b[p][q])
{
     int sum[m][n];
     if((m==p)&&(n==q)){
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             sum[i][j]=a[i][j]+b[i][j];
         }
     }
     printf("the sum of two matrix is \n\n");
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           printf("%d  ",sum[i][j]);
        }
        printf("\n");
     }
     }
     else 
        printf("addition not possible\n\n ");
     return 0;
}
int sub(int m,int n,int p,int q,int a[m][n],int b[p][q])
{
     int sub[m][n],s;
     if((m==p)&&(n==q)){
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            s=a[i][j]-b[i][j];
            sub[i][j]=s;
        }
        s=0;
     }
     printf("the difference of two matrix is \n\n"); 
     for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             printf("%d  ",sub[i][j]);
         }
         printf("\n");
     }
     }
     else
         printf("subtraction not possible\n\n ");
     return 0;
}
int multiply(int m,int n,int p,int q,int a[m][n],int b[p][q])
{
     int sum=0,c[m][q];
     if(n!=p)
         printf("wrong order \n\n");
     else{
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<q;j++)
         {
             for(int k=0;k<p;k++)
             {
                 sum=sum+a[i][k]*b[k][j];
                 c[i][j]=sum;
             }
             sum=0;
         }
     }
     printf("the multiplication is \n");
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
           printf("%d   ",c[i][j]);
        }
        printf("\n");
     }
     }
     printf("\n\n");
     return 0;
}
int search(int m,int n,int a[m][n],int e)
{
     int i;
     for(i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(a[i][j]==e){
              printf("element is present in position [%d,%d]\n\n",i,j);
              break;
           }
        }
     }
     if(i==m)
         printf("searched completed \n\n");
     return 0;
}
