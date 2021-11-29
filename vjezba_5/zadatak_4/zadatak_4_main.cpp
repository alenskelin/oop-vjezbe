#include <iostream>
#include <iomanip>
#include <stdlib.h> 
#include <vector>
#include <math.h>
#include "vjezba_5.h"
using namespace std;


int main()
{
    Target* targets;
    int n;

    cout << "How much targets do you want?";
    cin >> n;

    targets = new Target [n];

    for(int i = 0; i < n; i++)
        targets[i].generate_target();

    Weapon gun;
    Space bullet_location;
    int number_of_targets_hit = 0;
    string yes_or_no;

    bullet_location.set();

    gun.generate_weapon();

    gun.location.random_coordinate_generator(1, 10);

    while(gun.get_bullets_remaining() > 0)
    {
        cout << "Where do you want to shoot? :" << endl;
        cin >> bullet_location.x >> bullet_location.y >> bullet_location.z;

        gun.shoot();

        for(int i = 0; i < n; i++)
        {
            targets[i].target_hit(gun.location, bullet_location, number_of_targets_hit);
        }
        if(gun.get_bullets_remaining() == 0)
        {
            cout << "You hit " << number_of_targets_hit << " targets!!" << endl;

            cout << "Do you want to shoot again? y/N" << endl;
            cin >> yes_or_no;

            if(yes_or_no == "y")
            {
                gun.reload();
            }
            else
            {
                break;
            }
        }
    }