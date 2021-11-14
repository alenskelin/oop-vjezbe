#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "vjezba_3.h"
using namespace std;


int main()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int n = 5;

    vector_input(v1, n);
    vector_input(v2, n);

    print_vector(v1);
    print_vector(v2);

    vector_combining(v1, v2, v3);
}