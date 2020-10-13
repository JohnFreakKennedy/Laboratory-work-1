#include <bits.stdc++h>

using namespace std;

int main() {
    int  a11,b12,a21,b22,c1,c2,det1,det2,detG;
    cin>>a11>>b12>>a21>>b22>>c1>>c2;
    detG = a11*b22 - b12*a21;
    det1 = c1*b22 - c2*b12;
    det2 = a11*c2 - a21*c1;
    x = det1/detG;
    y = round(det2/detG);
    cout<<x<<" "<<y;
}