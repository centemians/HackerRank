//
//  main.cpp
//  The Salesman
//
//  Created by Abhishek Kumar Shakya on 15/12/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t --){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        if(n == 1)
            cout<<0<<endl;
        if(n == 2)
            cout<<abs(arr[0]-arr[1])<<endl;
        
        if(n>2){
            sort(arr,arr+n);
            int dis = 0;
            for(int i=0;i<n-1;i++){
                dis += abs(arr[i+1]-arr[i]);
            }
            cout<<dis<<endl;
        }
    }
    return 0;
}
