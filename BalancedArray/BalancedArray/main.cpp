//
//  main.cpp
//  BalancedArray
//
//  Created by Abhishek Kumar Shakya on 26/05/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n,i,sum1=0,sum2=0;
    cin>>n;
    int *array=new int[n];
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    for(i=0;i<n;i++){
        if(i<n/2){
            sum1+=array[i];
        }
        else
            sum2+=array[i];
    }
    if(sum1<=sum2)
        cout<<sum2-sum1;
    else
        cout<<sum1-sum2;
    cout<<"\n";
    return 0;
}
