#include <iostream>

using namespace std;

int main() {
    int  a11,b12,a21,b22,c1,c2,det1,det2,detG;
    //det1-детермінант за 1 стовпчиком
    //det2-детермінант за 2 стовпчиком
    //detG-загальний детермінант
    //x-перший розв'язок
    //у-другий розв'язок
    cout<<"Введіть перший коефіцієнт х: ";
    cin>>a11;
    cout<<"Введіть перший коефіцієнт y: ";
    cin>>b12;
    cout<<"Введіть другий коефіцієнт х: ";
    cin>>a21;
    cout<<"Введіть другий коефіцієнт у: ";
    cin>>b22;
    cout<<"Введіть перший результат с: ";
    cin>>c1;
    cout<<"Введіть другий результат с: ";
    cin>>c2;
    detG = a11*b22 - b12*a21;
    det1 = c1*b22 - c2*b12;
    det2 = a11*c2 - a21*c1;
    x = fixed(det1/detG);
    y = fixed(det2/detG);
    cout<<x<<" "<<y;
}
