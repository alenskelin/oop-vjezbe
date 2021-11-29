#include <iostream>
#include <iomanip>
#include <stdlib.h> 
#include <vector>
#include <math.h>
#include "vjezba_5.h"
using namespace std;


void Weapon::generate_weapon()
{
    location.random_coordinate_generator(2, 10);
    magazine = 5;
    bullets_remaining = magazine;
}


void Weapon::reload()
{
    bullets_remaining = magazine;
}


void Weapon::shoot()
{
    bullets_remaining--;
}


int Weapon::get_bullets_remaining()
{
    return bullets_remaining;
}

void Space::print_coordinates()
{
    cout << "(" << x;
    cout << ", " << y;
    cout << ", " << z << ")" << endl;
}


double Space::return_coordinates()
{
    return x, y, z;
}

 void Space::random_coordinate_generator(int a, int b)
 {
    x = rand() % (b-a) + a;
    y = rand() % (b-a) + a;
    z = rand() % (b-a) + a;

 }


int Space::get_x()
{
    return x;
}


int Space::get_y()
{
    return y;
}


int Space::get_y()
{
    return z;
}


void Space::set_x(int x_cor)
{
    x = x_cor;
}

void Space::set_y(int y_cor)
{
    y = y_cor;
}


void Space::set_z(int z_cor)
{
    z = z_cor;
}


void Space::set()
{
    x = 0;
    y = 0;
    z = 0;
}


void Space::calculate_distance_between_two_coordinates_in_2d(Space &coordinate)
{
    cout << sqrt(pow(x - coordinate.x, 2) + pow(y - coordinate.y, 2)) << endl;
}


void Space::calculate_distance_between_two_coordinates_in_3d(Space &coordinate)
{
    cout << sqrt(pow(x - coordinate.x, 2) + pow(y - coordinate.y, 2) + pow(z - coordinate.z, 2));
}


void Target::generate_target()
{   
    downward_left_coordinate.set();
    downward_left_coordinate.random_coordinate_generator(1, 10);

    upper_right_coordinate.set();
    upper_right_coordinate.random_coordinate_generator(11, 20);

    cout << "x " << downward_left_coordinate.get_x() << " y " << downward_left_coordinate.get_y() << " z " << downward_left_coordinate.get_z() << endl;
    cout << "x " << upper_right_coordinate.get_x() << " y " << upper_right_coordinate.get_y() << " z " << upper_right_coordinate.get_z() << endl;


}


void Target::target_hit(Space location, Space& bullet_location, int &number_of_targets_hit)
{    
    if(bullet_location.get_x() >= downward_left_coordinate.get_x()  && 
        bullet_location.get_x() <= upper_right_coordinate.get_x() &&
        bullet_location.get_y() >= downward_left_coordinate.get_y() &&
        bullet_location.get_y()  <= upper_right_coordinate.get_y() && 
        bullet_location.get_z() >= downward_left_coordinate.get_z() &&
        bullet_location.get_z() <= upper_right_coordinate.get_z())
            number_of_targets_hit++;
    
}

