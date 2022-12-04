#include <cstdio>
#include <algorithm>
#include <cmath>

int main() {
    using namespace std;
    int a,b,c,i,j,k;

    scanf("%d %d %d\n%d %d %d",&a,&b,&c,&i,&j,&k);

    double ar, br, cr;

    ar = a/(double)i;
    br = b/(double)j;
    cr = c/(double)k;

    double minratio = min(min(ar, br), cr);

    double aused = i*minratio;
    double bused = j*minratio;
    double cused = k*minratio;

    printf("%lf %lf %lf", a-aused, b-bused, c-cused);
}