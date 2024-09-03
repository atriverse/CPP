/**
 * This code reads in a series of triplets of floating-point numbers (A, B, C) and outputs them in various formatted styles.
 * 
 * For each triplet:
 * - A is output in hexadecimal with a leading '0x' and in lowercase
 * - B is output right-aligned in a field of width 15, with a leading '+' sign and 2 decimal places, padded with '_'
 * - C is output in scientific notation with 9 decimal places and in uppercase
 * 
 * The number of triplets to process is read in at the start of the program.
 */

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << left << hex 
    << showbase << nouppercase 
    << (long)A << endl;

    cout << right << fixed << setw(15) 
    << showpos << setprecision(2) 
    << setfill('_') << B << endl;

//cout << setiosflags(ios::uppercase) << setiosflags(ios::scientific); 
    cout << setprecision(9)
    << scientific << noshowpos << uppercase  
    << C << endl; 
	}
	return 0;

}