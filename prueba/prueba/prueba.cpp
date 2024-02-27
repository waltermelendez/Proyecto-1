#include <iostream>

class Point {
public:
    double x;
    double y;
};

int main()
{

    int* punteroInt1 = new int();
    int* punteroInt2 = new int();
    double* punteroDouble1 = new double(9.8);
    bool* punteroIntercambiar = new bool(false);

    /***
     * AGREGUE SU CODIGO A PARTIR DE ESTE ESPACIO
     ****/

     //1
    *punteroInt1 = -100;

    //2
    *punteroInt2 = 5;

    //3
    *punteroDouble1 = 7.89;

    //4
    std::cout << "Suma de punteroInt1 y punteroInt2: " << (*punteroInt1 + *punteroInt2) << std::endl;

    //5
    *punteroDouble1 = (*punteroInt1) * (*punteroDouble1);

    //6
    *punteroDouble1 += *punteroInt2;

    //7
    Point* point1 = new Point();
    point1->x = *punteroDouble1;
    point1->y = 8.9;

    //8
    while (*punteroInt2 != 0) {
        if (*punteroInt2 > 0)
            (*punteroInt2)--;
        else
            (*punteroInt2)++;
    }

    //9
    std::cout << "a. Valor de punteroInt1: " << *punteroInt1 << std::endl;
    std::cout << "b. Valor de punteroInt2: " << *punteroInt2 << std::endl;

    //10


/***
 * NO CAMBIE NI AGREGUE NADA A PARTIR DE ESTE ESPACIO
 ****/


    std::cout << punteroInt1 << ": " << *punteroInt1 << std::endl;
    std::cout << punteroInt2 << ": " << *punteroInt2 << std::endl;
    std::cout << punteroDouble1 << ": " << *punteroDouble1 << std::endl;
    std::cout << punteroIntercambiar << ": " << *punteroIntercambiar << std::endl;
    std::cout << point1 << ": " << point1->x << " " << point1->y << std::endl;

    delete punteroInt1;
    delete punteroInt2;
    delete punteroDouble1;
    delete punteroIntercambiar;
    delete point1;

    return 0;
}
