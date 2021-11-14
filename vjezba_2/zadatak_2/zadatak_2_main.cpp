#include<iostream>
using namespace std;


int &increment_element(int array[], int element)
{
    return array[element];
}


int main()
{
    int array[7] = {1,2,3,4,5,6,7};
    int element;

    cout << "Which value from the array do you want to increment" << endl;
    cin >> element;

    cout << "Element incremented " << increment_element(array, element)++ << endl;    
}