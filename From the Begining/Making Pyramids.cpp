#include<iostream>
using namespace std;
#include <cstdio>
int main()
{
  int row,a,b=17,c;
    c=b;
    for (row=1;row<=b;row++)  // কতগুলো  Row হবে সেটা প্রিন্ট করবে এই লুপ।
    {
    for (a=1;a<c;a++)       //   প্রত্যেকটা  লাইনের শুরুতে কিছু   White Space প্রিন্ট করা হয়েছে। সেই  White Space গুলো প্রিন্ট করবে এই লুপ।
    {
      cout<<" ";
    }
    c--;
    for (a=1;a<=2*row-1;a++) //  এই লুপের কাজ হবে প্রত্যেক Row তে স্টার গুলা প্রিন্ট করা।
    {
       cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}
