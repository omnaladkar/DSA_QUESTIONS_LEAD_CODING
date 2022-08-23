#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={0,1,0};
  int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    
        int area[n];
   
        for(int i=0;i<n;i++){
            area[i]=n*arr[i];
            n--;
       
        }
        
          sort(area, area + n);
          
          int t = area[n];
        
          cout<<t<<endl;

}

