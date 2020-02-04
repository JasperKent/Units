#include <iostream>
#include <iomanip>
#include "WeighingMachine.h"
#include"Kilogram.h"
#include"Pound.h"
#include"Tonne.h"

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    WeighingMachine wm;

    wm.addItem(100.5_kg)
      .addItem(2_t)
      .addItem(205.67_lbs);

    cout << wm.getTotal() << endl;
    cout << Pound(wm.getTotal()) << endl;
    cout << Tonne(wm.getTotal()) << endl;
    cout << Kilogram(wm.getTotal()) << endl;
}

