#include <iostream>
#include <fstream>
#include <cstdlib>
#include <memory.h>

using namespace std;
typedef long long LL;

LL M,N,k,mxo,mno,test,a[100*100*201 + 5];

void res(){
    int p = M;
    for(int i = 1 ; i <= N + M + 1 ; ++i){
        int n = ( i % k ? i % k : k );
        if( i <= M ) a[n] += i;
        else if( i > M && i <= N + 1 ) a[n] += M + 1;
        else a[n] += (p--);
    }

}

int main()
{
    /*freopen("stress.txt","w",stdout);

    for(int i = 1 ; i <= 10 ; ++i )
        for(int j = 1 ; j <=10 ; ++j )
            for(int k = 1 ; k <= i + j + 1 ; ++k)
            cout << i << " " << j << " " << k << endl;
    */
    ios_base::sync_with_stdio(false);

    freopen("stress.txt","r",stdin);
    freopen("errors.txt","w",stdout);

    ifstream I("answers.txt");
    ofstream O("sum.txt");

    while(cin>>N>>M>>k){

        if( M > N ) swap(M,N);

        I>>test>>mxo>>mno;

        LL mx = -1,mn = 100*100*201 + 5;

        res();

        O << "test № " << test << endl;

        for(int i = 1 ; i <= k ; ++i){
            O << a[i] << " ";
            mx = max( mx , a[i] );
            mn = min( mn , a[i] );
        }

        O << endl;

        if( mx != mxo || mn != mno )            cout<<"Ошибка тест № "<<test
                                                    <<":\n mx = " << mx <<" вместо "<<mxo
                                                    <<"\n mn = "<< mn <<" вместо "<<mno<<endl;
        memset(a,0,sizeof a);
    }

    return 0;
}
