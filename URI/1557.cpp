#include<bits/stdc++.h>
using namespace std;

 void O(int n)
{
    int arr[n][n];
    int b=0;
    for(int i=0;i<n;i++){
        for(int j=i,c=0;j<n+i,c<n;j++,c++){
            b= pow(2,j);
            arr[i][c]=b;
        }
    }
    int x=0,y=arr[n-1][n-1];
    while(y>0)
    {
        y/=10;
        x++;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(j>0) printf(" ");
                printf("%*d",x, arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
   // cout<<log(exp(1))<<endl;
    int n;
    for(int i=1;;i++){
            scanf("%d",&n);
        if(n==0){
        break;
    }
    else
        O(n);
    }
}
