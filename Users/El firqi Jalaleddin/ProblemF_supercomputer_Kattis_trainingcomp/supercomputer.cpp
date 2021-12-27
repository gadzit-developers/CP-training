#include<bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}
void intersection(int arr1[],int a,int b,int* h, int m){/*
    int arr[7]={1,2,3,4,5,6,7};
    intersection(arr,3,10,h,7);
    cout<<h[0]<<h[1];
    result is 37
*/  bubbleSort(arr1,m);
    int i = 0, j = 0;
    int n=b-a+1;
    int arr2[n];
    for(int i=a;i<=b;i++){
        arr2[j]=i;
        j++;
    }
    int k=0;i=0;j=0;
    while (i<m && j<n){
        if (arr1[i]<arr2[j])
            i++;
        else if (arr2[j]<arr1[i])
            j++;
        else
        {
            if(k==0) h[0]=arr2[j];
            h[1]=arr2[j];
            i++;
            j++;
            k++;
        }
    }
    if(k==0){h[0]=h[1]=0;}
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //start
    int n,k,s;//s actual manipulated size , n number of bits 
    // k number of operations
    int max,min;//to determine the interval of bits that is going to be affected 
    cin>>n>>k;//reading bit number and operation number
    int h[2]={0};
    int number=0;
    int u=0;
    char g;//for operation recognition 
    int f[k]={0};//flip operations indexes
    int c[k]={0};//count operations range 
    int j=0;int w=0;
    int aa,bb;aa=0;bb=0;
    int p[k]={0};//operations order 
    cin>>g;//reading first operation
    for(int i=0;i<k;i++){//testing and assigning the variables
        if(g=='F'){ 
            cin>>f[w];
            w++;//to count flip operatiosn number
        }else{
            p[i]=1;
            cin>>c[j];
            j++;
            cin>>c[j];
            j++;//to count the number of count operations 
            //( times 2 since each operation has 2 arguments )
        }
        cin>>g;
    }
    int nf[w];int nc[j];//declaring two new arrays 
    //resizing the array to fit how many 
    //flip operations there are
    for(int i=0;i<w;i++){
        nf[i]=f[i];
    }
    //resizing the array to fit how many 
    //count operations there are
    for(int i=0;i<j;i++){
        nc[i]=c[i];
    }
    max=nf[0];
    min=nf[0];
    for(int i=1;i<w;i++){//determining the actual bits affected 
        if(nf[i]>max)max=nf[i];
        else min=nf[i];
    }
    s=(max-min)+1;//the actual number of bits that will be counted
    int v[s]={0};//declaring an array of size of active bits
    for(int q=0;q<k;q++){
        if(!p[q]){// if p[i]=0 then it is a flip operation so we need "!"to use it 
            if(v[nf[aa]-min]==1) v[nf[aa]-min]=0; else v[nf[aa]-min]=1;
            aa++;
        }else{
            intersection(nf,nc[u],nc[u+1],h,w);u=u+2;
            if((h[0]==0)&&(h[1]==0)){
                cout<<0<<endl;
            }else{
            for(int i=h[0]-min;i<=h[1]-min;i++){
                if(v[i]==1) number++;
            }
            cout<<number<<endl;
            }
        }
        number=0;
    }
    return 0;
}