//
//  main.cpp
//  2
//
//  Created by 董依萌 on 2017/2/11.
//  Copyright © 2017年 董依萌. All rights reserved.
//

#include<iostream>
#include<string.h>
using namespace std;
int Sum(char *n)
{
    int temp = 0;
    while(*(n))
    {
        if(*(n)-'0'<=9&&*(n)-'0'>=0)
            temp+=*(n++)-'0';
        else
            n++;
    }
    return temp;
}
void PrintSum(int n)
{
    if(n/10==0){
        int temp = n%10;
        switch(temp)
        {
            case 0:
                cout<<"ling";
                break;
            case 1:
                cout<<"yi";
                break;
            case 2:
                cout<<"er";
                break;
            case 3:
                cout<<"san";
                break;
            case 4:
                cout<<"si";
                break;
            case 5:
                cout<<"wu";
                break;
            case 6:
                cout<<"liu";
                break;
            case 7:
                cout<<"qi";
                break;
            case 8:
                cout<<"ba";
                break;
            case 9:
                cout<<"jiu";
                break;
            default:break;
        }
    }
    else{
        PrintSum(n/10);
        cout<<' ';
        PrintSum(n%10);
    }
    
    
}

int main()
{
    char n[101];
    cin.get(n,101);
    char *temp = n;
    //cout<<Sum(n)<<endl;
    PrintSum(Sum(temp));
    return 0;
}
