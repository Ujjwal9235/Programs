#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include<bits/stdc++.h>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> v;
    int t;
    for(int i=0;i<n;i++)
      {
        cin>>t;
        v.push_back(t);
      }
    
    int freq;
    int x=1;
    int y;
    int z=0;
    for(int i=0;i<n;i++)
    {
        freq = count(v.begin(),v.end(),v[i]);
        if(freq>x)
        {
          y=v[i]; 
        }
        if(freq == 1 && v[i]>z)
        {
            z= v[i];
        }
    }
    
    cout<<abs(y-z);
    
    return 0;
}