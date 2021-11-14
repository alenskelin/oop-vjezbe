#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "vjezba_3.h"
using namespace std;


int main()
{
    vector<int> v;
    vector<int> drugi_unos_v;

    int n = 5;
    int a = 1;
    int b = 6;

    cout << "First input" << endl;
    vector_input(v, n);

    cout << "Second input" << endl;
    vector_input_with_borders(drugi_unos_v, a, b);

    print_vector(v);
    print_vector(drugi_unos_v);

}