#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string week[] = {"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}, start;

int a[8], b[8] , ML[] = { 0,31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31} ,
     n , year;

bool v;

struct holiday{
 int d,m;
} h[367];


bool cmp(holiday a, holiday b){
    if(b.m == a.m ) return b.d > a.d;
    else return b.m > a.m;
}


int main(){

    cin>>n>>year;

    if( year % 400 == 0 || ( year % 100 && year % 4 == 0 ) ) v = true;

    if(v) ML[2]++;

    for(int i = 1 ; i <= n ; ++i){
        cin>>h[i].d>>start;
        if( start == "January" )    h[i].m = 1;
        if( start == "February" )   h[i].m = 2;
        if( start == "March" )      h[i].m = 3;
        if( start == "April" )      h[i].m = 4;
        if( start == "May" )        h[i].m = 5;
        if( start == "June" )       h[i].m = 6;
        if( start == "July" )       h[i].m = 7;
        if( start == "August" )     h[i].m = 8;
        if( start == "September" )  h[i].m = 9;
        if( start == "October" )    h[i].m = 10;
        if( start == "November" )   h[i].m = 11;
        if( start == "December" )   h[i].m = 12;
     }


    sort(h+1,h+n+1,cmp);

    //for(int i = 0 ; i < n ; ++i) cout<<h[i].f<<" "<<h[i].s<<endl;

    cin >> start;

    int x = 1;
    int p;

    for( int i = 1 ; i <= 7 ; ++i)
        if( start == week[i] ) p = i;

    for(int i = 1 ; i <= 12 ; ++i)
        for(int j = 1 ; j <= ML[i] ; ++j)
            if(h[x].m == i && h[x].d == j && x <= n ){
                a[p]++;
                b[p++]++;
                p %= 8;
                if(!p) p = 1;
                x++;
            }else{
                a[p++]++;
                p %= 8;
                if(!p) p = 1;
            }


    int mn = 9999,mx=-1,mxi,mni,all = 0;

    for(int i = 1 ; i <= 7 ; ++i) all += b[i];

    //cout<<all<<endl;

    for(int i = 1 ; i <= 7 ; ++i){
        //cout<<a[i]<<" ";
        if(mx < a[i] + all - b[i] ) mx = a[i] + all - b[i] ,mxi = i;
        if(mn > a[i] + all - b[i] ) mn = a[i] + all - b[i] ,mni = i;
    }

    //cout<<endl;
    //for(int i = 1 ; i <= 7 ; ++i)
        //cout<<b[i]<<" ";

    //cout<<endl<<mx<<" "<<mn<<" "<<mxi<<" "<<mni<<endl;

    cout<<week[mxi]<<" "<<week[mni];
    return 0;
}
