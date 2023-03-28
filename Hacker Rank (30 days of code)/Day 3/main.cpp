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
using namespace std;


int main(){
    int N,M;
    cin >> N;
    M=N%2;
    if (M==1)
    {
        printf("Weird");
    }
    else if (M==0 && N>=2 && N<=5)
    {
        printf("Not Weird");
    }
    else if (M==0 && N>=6 && N<=20)
    {
        printf("Weird");
    }
    else
    {
        printf("Not Weird");
    }


    return 0;
}
