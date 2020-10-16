#include <iostream>

using namespace std;

int main() {
    
    float x, y, a11, b12, a21, b22, c1, c2, det1, det2, detG;
    //det1-детермінант за 1 стовпчиком
    //det2-детермінант за 2 стовпчиком
    //detG-загальний детермінант
    //x-перший розв'язок
    //у-другий розв'язок
    cout<< " Dankov Artem,IS-01,10V "<<endl<<"Put first coefficient x: ";
    cin>>a11;
    cout<<"Put first coefficient y: ";
    cin>>b12;
    cout<<"Put second coefficient x: ";
    cin>>a21;
    cout<<"Put second coefficient y: ";
    cin>>b22;
    cout<<"Put first result c: ";
    cin>>c1;
    cout<<"Put second result c:";
    cin>>c2;
    detG = a11*b22 - b12*a21;
    det1 = c1*b22 - c2*b12;
    det2 = a11*c2 - a21*c1;
    x = det1/detG;
    y = det2/detG;
    cout<<x<<" "<<y;
}
