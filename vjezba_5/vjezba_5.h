#pragma once
#include<iostream>
#ifndef vjezba_5_h
#define vjezba_5_h
using namespace std;


class Space
{
    int x;
    int y;
    int z;

    public:
        void set();
        void print_coordinates();
        double return_coordinates();
        void random_coordinate_generator(int a, int b);
        void calculate_distance_between_two_coordinates_in_2d(Space &coordinate);
        void calculate_distance_between_two_coordinates_in_3d(Space &coordinate);
        int get_x();
        int get_y();
        int get_z();
        void set_x(int x_cor);
        void set_y(int y_cor);
        void set_z(int z_cor);
};


class Weapon
{
    int magazine;
    int bullets_remaining;

    public:
        Space location;
        void reload();
        void shoot();
        void generate_weapon();
        int get_bullets_remaining();
};


class Target
{
    bool hit;
    Space downward_left_coordinate;
    Space upper_right_coordinate;

    public:
        void generate_target();
        void target_hit(Space location, Space& bullet_location, int &number_of_targets_hit);
};


#endif
