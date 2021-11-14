#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "vjezba_3.h"
using namespace std;

int main()
{
    vector<string> v;
    int n = 5;

    string_vector_input(v, n);
    reverse_string(v);
    sort_vector_by_string(v);
	print_vector_string(v);
}