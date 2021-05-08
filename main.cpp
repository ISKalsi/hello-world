//
//  main.cpp
//  min and max element
//
//  Created by Madhvi Suri on 06/02/21.
//  Copyright © 2021 Madhvi. All rights reserved.
//

#include <iostream>
using namespace std;
#include<string>
int main()
{
    int a[20];
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    int maxe=a[0];
    int mine=INT_MAX;
    for(int i=1;i<N;i++ )
    {
        if(a[i]>maxe)
        {
            mine=min(mine,maxe);
            maxe=a[i];
        }
        else
        {
            mine=min(mine,a[i]);
        }
    }
    if(mine==INT_MAX)
    {
        mine=maxe;
        
    }
    cout<<maxe<<" "<<mine<<endl;
    
    return 1;
}
