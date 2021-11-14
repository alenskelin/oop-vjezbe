//Definirati strukturu koja opisuje matricu. Napisati program za osnovne
//operacije s matricama čiji su elementi decimalni brojevi (float). Program
//treba imati sljedeće funkcije:
//• funkciju za unos matrice mxn,
//• funkciju za generiranje matrice mxn s elementima u rasponu [a,b],
//• funkcije za zbarajanje, oduzimanje, množenje matrica,
//• funkciju za trasponiranje matrice,
//• funkciju za ispisivanje matrice. Elementi matrice se ispisuju na četiri decimale, poravnati udesno.

#include <iostream>
#include <iomanip>
using namespace std;


typedef struct {
    int m;
    int n;
	float** elements;

} Matrix;

void create_martrix(Matrix& mx, int m, int n)
{
    mx.m = m;
    mx.n = n;

    mx.elements = new float* [m];
    for(int i = 0; i < mx.m; i++)
        mx.elements[i] = new float[n];
}

void generate_matrix(Matrix& mx, int min_bracket, int max_bracket)
{
    for(int i = 0; i < mx.m; i++)
		for(int j = 0; j < mx.n; j++) 
			mx.elements[i][j] = min_bracket + rand() % (max_bracket - min_bracket + 1);
}

void print_matrix(Matrix& mx)
{
    cout << "Matrix: " << endl;
	for (int i = 0; i < mx.m; i++) {
		for (int j = 0; j < mx.n; j++) {
			cout << setw(4) << right << mx.elements[i][j] << " ";
		}
		cout << endl;
	}

}

void matrix_addition(Matrix& mx1, Matrix& mx2, Matrix& mx_sum)
{
    if(mx1.m == mx2.m && mx1.n == mx2.n){
        for(int i = 0; i < mx1.m; i++)
            for(int j = 0; j < mx1.n; j++)
                mx_sum.elements[i][j] = mx1.elements[i][j] + mx2.elements[i][j];
    }
    else {
        cout << "The matrixes dont have the same number of rows and columns" << endl;
    }
}

void matrix_substraction(Matrix& mx1, Matrix& mx2, Matrix& mx_remainder)
{
    if(mx1.m == mx2.m && mx1.n == mx2.n){
        for(int i = 0; i < mx1.m; i++)
            for(int j = 0; j < mx1.n; j++)
                mx_remainder.elements[i][j] = mx1.elements[i][j] - mx2.elements[i][j];
    }
    else {
        cout << "The matrixes dont have the same number of rows and columns" << endl;
    }
}

void matrix_multiplication(Matrix& mx1, Matrix& mx2, Matrix& mx_multiplication)
{
	if(mx1.n == mx2.m) {
		for(int i = 0; i < mx_multiplication.m; i++) 
			for(int j = 0; j < mx_multiplication.n; j++) 
				mx_multiplication.elements[i][j] = 0; //Initiating the matrix values to 0

		for(int i = 0; i < mx_multiplication.m; i++) 
			for(int j = 0; j < mx_multiplication.n; j++) 
				for(int k = 0; k < mx_multiplication.m; k++) 
					mx_multiplication.elements[i][j] += mx1.elements[i][k] * mx2.elements[k][j];
	}

	else {
		cout << "The number of columns of the first matrix is not the same as the number of rows in the second matrix" << endl;
	}
}

void matrix_transponation(Matrix& mx1_transponated, Matrix& mx1)
{
    for(int i = 0; i < mx1_transponated.m; i++)
        for(int j = 0; j < mx1_transponated.n; j++)
            mx1_transponated.elements[j][i] = mx1.elements[j][i];
}


int main() {

	Matrix mx1;
	create_martrix(mx1, 3, 3);
	generate_matrix(mx1, 1, 10);
	print_matrix(mx1);
	Matrix mx2;
	create_martrix(mx2, 3, 3);
	generate_matrix(mx2, 1, 10);
	print_matrix(mx2);
	Matrix mx_sum;
    create_martrix(mx_sum, 3, 3);
	matrix_addition(mx1, mx2, mx_sum);
	Matrix mx_remainder;
    create_martrix(mx_remainder, 3, 3);
	matrix_substraction(mx1, mx2, mx_remainder);
	Matrix mx_multiplication;
    create_martrix(mx_multiplication, mx1.m, mx2.n);
	matrix_multiplication(mx1, mx2, mx_multiplication);
	Matrix mx1_transponated;
	create_martrix(mx1_transponated, mx1.n, mx1.m);
	matrix_transponation(mx1_transponated, mx1);
    print_matrix(mx_sum);
    print_matrix(mx_remainder);
    print_matrix(mx_multiplication);
    print_matrix(mx1_transponated);

}
