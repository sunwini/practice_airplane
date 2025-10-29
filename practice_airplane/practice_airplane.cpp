#include <iostream>
#include "Airplane.h"
using namespace std;

int main()
{
    Airplane plane1(AirplaneType::CARGO, 2, 5);
    Airplane plane2(AirplaneType::AIRLINER, 200, 350);
    Airplane plane3(AirplaneType::HELICOPTER, 2, 6);
    Airplane plane4(AirplaneType::PRIVATE, 5, 15);
    Airplane plane5(AirplaneType::AIRLINER, 240, 400);

    plane1.print();
    cout << endl;
    plane2.print();
    cout << endl;
    plane3.print();
    cout << endl;
    plane4.print();
    cout << endl;
    
    cout << "Plane 1 == Plane 2 --- > " << boolalpha << (plane1 == plane2) << endl;
    cout << "Plane 2 == Plane 5 --- > " << boolalpha << (plane2 == plane5) << endl;

    cout << endl;

    ++plane4;
    --plane3;

    plane4.print();
    cout << endl;
    plane3.print();

    cout << "Plane 4 > Plane 3 --- > " << boolalpha << (plane4 > plane3) << endl;



}
