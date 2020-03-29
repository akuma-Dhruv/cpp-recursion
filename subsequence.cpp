#include<bits/stdc++.h>
using namespace std;
int sub(string input,string output[])
{
    if(input.empty())
    {
    output[0]=" ";
    return 1;
    }
    string subs =input.substr(1);
     int smalloutputsize =sub(subs,output);

    for(int i=0;i<smalloutputsize;i++)
    {
        output[i+smalloutputsize]=input[0]+output[i];

    }
    return 2*smalloutputsize;



}

int main()
{
string input;
cin>>input;
int s=input.size();
s=pow(2,s);
string *output= new string[s];

sub(input,output);
for(int i=0;i<s;i++)
    cout<<output[i]<<endl;
return 0;
}
