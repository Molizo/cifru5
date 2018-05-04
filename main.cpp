#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream in("cifru5.in");
ofstream out("cifru5.out");

int nr[10];

int main()
{int n,cifmax=-1,temp,dif,minmut=0,minn=999999;
    in>>n;
    for(int i=0;i<n;i++)
    {
        in>>temp;
        nr[temp]++;
        cifmax=max(cifmax,temp);
    }
    out<<cifmax<<"\n";
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            dif = abs(nr[i]-nr[j]);
            if(dif > 5) dif = 10 - dif;
            minmut += (dif * nr[j]);
        }
        if(minmut<minn)
        {
            minn=minmut;
            mincif = i;
        }
        minmut = 0;
    }
    out<<minmut;
    return 0;
}
