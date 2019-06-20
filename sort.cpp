//
//  main.cpp
//  pro
//
//  Created by s20181106115 on 2019/6/19.
//  Copyright © 2019 s20181106115. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int max;
    cin>>max;
    int a[max];
    for(int i = 0; i < max; i++)
    {
        cin>>a[i];
    }
    for(int j = 0; j < max; j++)
    {
        for(int k = 0; k < max; k++)-
        {
            if(a[k] > a[k+1])
            {
                a[max] = a[k];
                a[k] = a[k+1];
                a[k+1] = a[max];
            }
        }
    }
    for(int i = 0; i < max; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
