#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int a,b,c,d;
set<int>k,ans;
set<int> :: iterator it;


void cube(){
    int x=max(d,-d);
    if(d%2==0) k.insert(d/2),k.insert(-d/2);
    for(int i=2;i*i<=x;++i)
    if(d%i==0) k.insert(i),k.insert(-i);
}

int main(){
    //freopen("input.txt","r",stdin);    freopen("output.txt","w",stdout);
    cin>>a>>b>>c>>d;
    if(!a&&!b&&!c&&!d){ cout<<-1; return 0;}
    // TODO сделть для квадратного ур-ия(а=0 или д=0 илиы)
    cube();
    for(it=k.begin();it!=k.end();++it)
    if(a**it**it**it+b**it**it+c**it+d==0) ans.insert(*it);
    cout<<ans.size()<<" ";
    for(it=ans.begin();it!=ans.end();++it) cout<<*it<<" ";
    return 0;
}
