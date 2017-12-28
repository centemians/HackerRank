//
//  main.cpp
//  Arrays: Left Rotation
//
//  Created by Abhishek Kumar Shakya on 28/12/17.
//  Copyright © 2017 Abhishek Kumar Shakya. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,d;
    cin>>n>>d;
    int num = d - n;
    int arr[n],temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[abs(i-num)%n] = temp;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
