#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double EPS = 1e-6;
    // koordinatite na tochkite na pyrviq triygylnik
    double point1X, point1Y, point2X, point2Y, point3X, point3Y;

    cin >> point1X >> point1Y;
    cin >> point2X >> point2Y;
    cin >> point3X >> point3Y;

    //koordinatite na tochkite na vtoriq triygylnik
    double point4X, point4Y, point5X, point5Y, point6X, point6Y;

    cin >> point4X >> point4Y;
    cin >> point5X >> point5Y;
    cin >> point6X >> point6Y;

    // presmqtame dyljinite na triygylnicite
    double triangle1Side1 = (point1X - point2X)*(point1X - point2X) +
                            (point1Y - point2Y)*(point1Y - point2Y);

    double triangle1Side2 = (point1X - point3X)*(point1X - point3X) +
                            (point1Y - point3Y)*(point1Y - point3Y);

    double triangle1Side3 = (point2X - point3X)*(point2X - point3X) +
                            (point2Y - point3Y)*(point2Y - point3Y);

    double triangle2Side1 = (point4X - point5X)*(point4X - point5X) +
                            (point4Y - point5Y)*(point4Y - point5Y);

    double triangle2Side2 = (point4X - point6X)*(point4X - point6X) +
                            (point4Y - point6Y)*(point4Y - point6Y);

    double triangle2Side3 = (point5X - point6X)*(point5X - point6X) +
                            (point5Y - point6Y)*(point5Y - point6Y);

    //podrejdame stranite na triygylnika po golemina
    triangle1Min = triangle1Side1;
    triangle1Middle = triangle1Side2;
    triangle1Max = triangle1Side3;

    if (triangle1Min > triangle1Middle)
    {
        swap(triangle1Min, triangle1Middle);
    }

    if (triangle1Min > triangle1Max)
    {
        swap(triangle1Min, triangle1Max);
    }

    if (triangle1Max < triangle1Middle)
    {
        swap(triangle1Max, triangle1Middle);
    }

    // syshtoto pravim za stranite na vtoriq triygylnik
    double triangle2Min, triangle2Middle, triangle2Max;

    triangle2Min = triangle2Side1;
    triangle2Middle = triangle2Side2;
    triangle2Max = triangle2Side3;

    if (triangle2Min > triangle2Middle)
    {
        swap(triangle2Min, triangle2Middle);
    }

    if (triangle2Min > triangle2Max)
    {
        swap(triangle2Min, triangle2Max);
    }

    if (triangle2Max < triangle2Middle)
    {
        swap(triangle2Max, triangle2Middle);
    }

    //proverqvame dali razlikata na dvete chisla e po-malka ot konstantata
    //EPS, tyi kato rabotim sys double chisla, a te sa chisla s plavashta zapetaq
    bool minCheck = fabs(triangle1Min - triangle2Min) <= EPS;
    bool averageCheck = fabs(triangle1Middle - triangle2Middle) <= EPS;
    bool maxCheck = fabs(triangle1Max - triangle2Max) <= EPS;

    cout << boolalpha << (minCheck &&
                          averageCheck &&
                          maxCheck) << endl;

    return 0;
}
