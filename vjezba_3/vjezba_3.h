#pragma once
#include<iostream>
#ifndef vjezba_3_h
#define vjezba_3_h
using namespace std;


void print_vector(vector<int> &v);
void vector_input(vector<int> &v, int n);
void vector_input_with_borders(vector<int> &v, int a, int b);
void vector_combining(vector<int> v1, vector<int> v2, vector<int> &v3);
void sort_vector(vector<int> &v);
void element_removal(vector<int> &v);
void number_of_substring_occurences(string str);
void string_vector_input(vector<string> &v, int n);
void reverse_string(vector<string> &v);
void sort_vector_by_string(vector<string> &v);
void print_vector_string(vector<string> &v);


#endif