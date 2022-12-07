#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lld;

int main() {
    int iax,iay,ibx,iby,fax,fay,fbx,fby;
    scanf("%d %d %d %d %d %d %d %d",&iax,&iay,&ibx,&iby,&fax,&fay,&fbx,&fby);

    lld di = sqrt((iax-ibx)*(iax-ibx)+(iay-iby)*(iay-iby));
    lld df = sqrt((fax-fbx)*(fax-fbx)+(fay-fby)*(fay-fby));
    // cout << di << " " << df << endl;
    printf("%.9Lf", fmax(di, df));
}