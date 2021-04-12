#include<iostream>
using namespace std;
int main(){
int n,a,i=0,p1,p2;
cin>>n>>p1;
int little[200];
for(i=0;i<p1;i++)
{
cin>>little[i];
}
cin>>p2;

for(i=p1;i<p1+p2;i++)
{
cin>>little[i];
}
n=n+1;   
bool arr[n],result;

  
for(i=0;i<n;i++)
{
arr[i]=false;
}
for(i=0;i<p1+p2;i++){
arr[little[i]]=true;

}

result=arr[1];
for(i=1;i<=n;i++)
{
result&=arr[i];
}
if(result){
cout<<"I become the guy.";
}
else{
cout<<"Oh, my keyboard!";
}
return 0;
}
