#include "vector.hpp"
using namespace std;


void MyVector::vector_new (size_t sz)
{
    cout << "Enter vector size" << endl;
    cin >> sz;

    while(sz <= 0)
    {
        cout << "The minimum size for the vector is 1 repeat the input " << endl;
        cin >> sz;
    }

    size = 0;
    capacity = sz;

    arr = new int[capacity];

    for (size_t i = 0; i < capacity ; i++)
        arr[i] = 0;
    
}

void MyVector::vector_delete()
{
    delete[] arr;
    
    arr = 0;
    size = 0;
    capacity = 0;
}

void MyVector::vector_push_back(int n)
{
    arr[size] = n;
    size++;

    if(size == capacity)
    {
        int* temp = new int[capacity * 2];
        copy(arr, arr + capacity, temp);
        delete[] arr;

        arr = temp;
        capacity *= 2;
    }
}

void MyVector::vector_pop_back()
{
    arr[size - 1] = 0;
    size--;
}

int& MyVector::vector_front()
{
    return arr[0];
}

int& MyVector::vector_back()
{
    return arr[size - 1];
}

size_t MyVector::vector_size() 
{
    return size;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";

    std::cout << std::endl;
}