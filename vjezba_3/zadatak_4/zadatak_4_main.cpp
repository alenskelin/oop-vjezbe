#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "vjezba_3.h"
using namespace std;


int main()
{
    vector<int> v;
    int n = 5;

    vector_input(v, n);

    element_removal(v);
}