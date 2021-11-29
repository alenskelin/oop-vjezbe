#include <iostream>
#include <iomanip>
#include <stdlib.h> 
#include <vector>
#include <math.h>
#include "vjezba_5.h"
using namespace std;

int main()
{
    Weapon gun;

    gun.generate_weapon();

    gun.shoot();

    gun.reload();
}