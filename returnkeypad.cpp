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
int assignment(int num,string input)
{
    string str[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int d=10,numAr[10],Temp=0,l=-1;
    int lnum=num,i=0;
    while(l<0)
    {
        if (lnum>=d)
        {
          numAr[i]=lnum%d;
          lnum/=d;
          i++;
        }
        else
        {
           numAr[i]=lnum;
        l++;
        }

    }
    for(int w=0;w<=i;w++)
    {
        Temp=numAr[w];
        input+=str[Temp];
    }

int s=input.size();
s=pow(2,s);
string *output= new string[s];
 sub (input,output);
for(int i=0;i<s;i++)
    cout<<output[i]<<endl;
}




int main()
{
string input;
int in;
cin>>in;

assignment(in,input);
cout<<input;


return 0;
}

