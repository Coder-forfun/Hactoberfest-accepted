#include<iostream>
using namespace std;

float knapsack(int *w,int *p,int n,int W)
 {
     float x[n];
     int weight=0;
     for(int i=0;i<n;i++)
        x[i]=0;
        for(int i=0;i<n;i++)
        {
            if(weight+w[i]<=W){
                x[i]=1;
            weight=weight+w[i];
            }
        else
        {
            x[i]=(W-weight)/(float)w[i];
            weight=W;
            break;
        }
        }
        float price=0;
        for(int i=0;i<n;i++)
            price=price+(p[i]*x[i]);
        return price;


 }
 void sort_array(int *p,int *w,int n)
 {
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n-i-1;j++)
         {
             if((p[j]/(float)w[j])<(p[j+1]/(float)w[j+1]))
                {
                    swap(p[j],p[j+1]);
                    swap(w[j],w[j+1]);
                }
         }
     }
 }

 int main()
 {
     int n,W;
     cout<<"Enter the number of objects:";
     cin>>n;
     cout<<"Enter the maximum weight possible:";
     cin>>W;
     int p[n],w[n];
     cout<<"Enter the object weights:\n";
     for(int i=0;i<n;i++)
        cin>>w[i];
     cout<<"Enter the object prices:\n";
     for(int i=0;i<n;i++)
        cin>>p[i];
        sort_array(p,w,n);
    cout<<"The maximum profit is:"<<knapsack(w,p,n,W);
        return 0;



 }
