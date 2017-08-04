#include <iostream>
#include <iomanip>

using namespace std;

const int COLS = 31;
const int ROWS = 16;

int display(int &);

int main()
{
	int date, time = 0;
	int nTickets, row, col;
	
	date = display(time);
	
	char seating[ROWS][COLS];
	
	for(int i = 0; i < ROWS; i++)
    for(int j = 0; j < COLS; j++)
        seating[i][j] = 'O';

	
	cout << "* Seats available\n";
    cout << "# Reserved Seats\n";
    cout << "Seats:  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30" <<  endl;
	for(int i = 0; i < ROWS; i++)
{
    cout << "Row" << setw(3) << i;
    for(int j=0; COLS > j; j++)
        cout << setw(3) << seating[i][j];

    cout << endl;
	
}

cout << "How many tickets would you like to purchase?\n";
cin >> nTickets;

for(int x = 0; x < nTickets; x++)
{    
	cout <<"For ticket " << x+1 << endl;
	cout << "Please choose Row: ";
	cin >> row;
	cout << "Enter a Seat Number: ";
	cin >> col;
}

if(seating[row][col] == 'O')
{
	seating[row][col] = 'S';
}
cout << "* Seats available\n";
    cout << "# Reserved Seats\n";
    cout << "Seats:  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30" <<  endl;
	for(int i = 0; i < ROWS; i++)
{
    cout << "Row" << setw(3) << i;
    for(int j=0; COLS > j; j++)
        cout << setw(3) << seating[i][j];

    cout << endl;
}

	return 0;
}

int display(int &time)
{
	cout << "Welcome to the Henry Ford Theater." << endl << endl;
	cout << "Welcome to the online box office for the annual production of The Nutcracker." << endl << endl;
	
	int date;
	
	cout << "Please choose a date for the performance." << endl << endl;
	cout << "(1) - 12/3" << endl << "(2) - 12/4" << endl << "(3) - 12/10" << endl << "(4) - 12/11" << endl;
	cin >> date;
	cout << "Please choose a showtime" << endl << endl;
	cout << "(1) - 11:30am" << endl << "(2) - 1:00pm" << endl << "(3) - 4:30pm" << endl << "(4) - 7:30pm" << endl;
	cin >> time;
	
	return date;
}
