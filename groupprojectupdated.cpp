//Quiz 1 by Salleh Jahaf & Mohamad El Jawad Sleiman
#include <iostream>
#include <iomanip>

using namespace std;

//Salleh Jahaf
//define constants
const int COLS = 31;
const int ROWS = 16;
const double DISCOUNT = 0.7;
const double BLUE_PRICE = 30.0;
const double PINK_PRICE = 25.0;
const double GREEN_PRICE = 18.0;
const double SALES_TAX = 0.06;

//display function prototype
int display(int &);

int main()
{

//Mohamad El Jawad Sleiman
	//declare variables
	int date, time = 0;
	int nTickets, row, col, ticketsBought = 0;
	int discountEligible;
	int studentNumber, zipCode;
	double salesTax, ticketTotal = 0, grandTotal = 0;
	
	//function to display menu
	date = display(time);
	
	//initialize 2D array
	char seating[ROWS][COLS];
	
	//sets Row 0 on chart to blanks
	for(int i = 0; i < COLS; i++)
		seating[0][i] = ' ';
		
	//sets Seat 0 on chart to blanks	
	for(int i = 0; i < ROWS; i++)
		seating[i][0] = ' ';
	
	//fills chart with O's to represent unsold seats
	for(int i = 1; i < ROWS; i++)
    	for(int j = 1; j < COLS; j++)
        	seating[i][j] = 'O';

//Salleh Jahaf
	//displays seating chart
	cout << "\nO Seats available\n";
    cout << "S Reserved Seats\n";
    cout << "Seats:     1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30" <<  endl;
	for(int i = 1; i < ROWS; i++)
	{
    	cout << "Row" << setw(3) << i;
    	for(int j=0; COLS > j; j++)
    	    cout << setw(3) << seating[i][j];

    	cout << endl;
	
	}

	//ask user for the number of tickets they wish to purchase
	cout << "\nHow many tickets would you like to purchase?\n";
	cin >> nTickets;
	double ticketPrice[nTickets];
	
	
//Mohamad El Jawad SLeiman
	//ask user which seats they wish to purchase
	for(int x = 0; x < nTickets; x++)
	{	    
		cout <<"\nFor ticket " << x+1 << endl;
		cout << "Please choose Row: ";
		cin >> row;
		//validate row choice
		while(row < 1 || row > 15)
		{
			cout << "You entered an invalid Row number." << endl;
			cout << "Please choose Row: ";
			cin >> row;	
		}
		cout << "Enter a Seat Number: ";
		cin >> col;
		//validate seat choice
		while(col < 1 || col > 30)
		{
			cout << "You entered an invalid Seat number." << endl;
			cout << "Enter a Seat Number: ";
			cin >> col;	
		}
//Salleh Jahaf
		//set seats in 2D array based on user's choices 
		if(seating[row][col] == 'O')
		{
			seating[row][col] = 'S';
		}
	}
	//display seating chart with user's choices
	cout << "\nO Seats available\n";
    cout << "S Reserved Seats\n";
    cout << "Seats:     1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30" <<  endl;
	for(int i = 1; i < ROWS; i++)
	{
    	cout << "Row" << setw(3) << i;
    	for(int j=0; COLS > j; j++)
    	    cout << setw(3) << seating[i][j];
	
	    cout << endl;
	}
	
//Mohamad El Jawad Sleiman
	//If user chooses the either of the first two showtimes, multiply price of row with discount percent
	
	if(time == 1 || time == 2)
	{
		for(int i = 0; i < ROWS; i++)
		{
			for(int j = 0; j < COLS; j++)
			{
				//for blue section
				if(seating[i][j] == 'S' && (i > 0 && i < 6))
				{
					//assign price to member of ticketPrice array
					ticketPrice[ticketsBought] = BLUE_PRICE * DISCOUNT;
					//add one to ticketsBought counter
					ticketsBought++;
				}
				//for pink section
				if(seating[i][j] == 'S' && (i > 5 && i < 13))
				{
					//assign price to member of ticketPrice array
					ticketPrice[ticketsBought] = PINK_PRICE * DISCOUNT;
					//add one to ticketsBought counter
					ticketsBought++;
				}
				//for green section
				if(seating[i][j] == 'S' && (i > 12 && i < 16))
				{
					//assign price to member of ticketPrice array
					ticketPrice[ticketsBought] = GREEN_PRICE * DISCOUNT;
					//add one to ticketsBought counter
					ticketsBought++;
				}
			}
		}
	}
	
//Salleh Jahaf
	//if user chooses other two times, assign ticket price to tickets without discount
	else
	{
		for(int i = 0; i < ROWS; i++)
		{
			for(int j = 0; j < COLS; j++)
			{
				if(seating[i][j] == 'S' && (i > 0 && i < 6))
				{
					ticketPrice[ticketsBought] = BLUE_PRICE;
					ticketsBought++;
				}
				if(seating[i][j] == 'S' && (i > 5 && i < 13))
				{
					ticketPrice[ticketsBought] = PINK_PRICE;
					ticketsBought++;
				}
				if(seating[i][j] == 'S' && (i > 12 && i < 16))
				{
					ticketPrice[ticketsBought] = GREEN_PRICE;
					ticketsBought++;
				}
			}
		}
	}
	
	//ask user if he/she lives in dearborn or is a HFC student
	cout << "\nIf you are a student of HFC or a resident of Dearborn, you are eligible for a 10% discount" << endl;
	cout << "\nEnter 1 if you are a student of HFC." << endl;
	cout << "Enter 2 if you are a Dearborn resident." << endl;
	cout << "Enter 0 if you are neither." << endl;
	cout << "Enter 1, 2, or 0: ";
	cin >> discountEligible;
	
//Mohamad El Jawad Sleiman
	//if user enters 1
	if(discountEligible == 1)
	{
		//have user enter student id number
		cout << "Please enter your student ID number: ";
		cin >> studentNumber;
		//validate student id number
		while(studentNumber < 100000 || studentNumber > 999999)
		{
			//if student id number is not 6 digits
			cout << "That is not a valid ID number." << endl;
			cout << "Please enter a valid HFC student ID number or enter 0 to cancel: " << endl;
			cin >> studentNumber;
			//if user chooses to cancel entry of student id number, break out of loop
			if(studentNumber == 0)
			{
				discountEligible = 0;
				break;
			}
		}
	}
	//if user enters 2
	if(discountEligible == 2)
	{
		//ask user for zip code
		cout << "Please enter your zip code: ";
		cin >> zipCode;
		//validate zipcode with valid zipcodes
		while(zipCode != 48120 && zipCode != 48124 && zipCode != 48126 && zipCode != 48128)
		{
			//if zip code is not valid, have user reenter value or enter 0 to break and cancel zipcode entry
			cout << "That zip code does not exist in Dearborn." << endl;
			cout << "Please enter your zip code or enter 0 to cancel: " << endl;
			cin >> zipCode;
			if(zipCode == 0)
			{
				discountEligible = 0;
				break;
			}
		}
	}

//Salleh Jahaf
	
	//display which time and date user has chosen
	cout << "\nYou have purchased " << nTickets << " tickets for the Nutcracker Ballet on ";
	switch(date)
	{
		case 1:
			cout << "December 3rd ";
			break;
		case 2:
			cout << "December 4th ";
			break;
		case 3:
			cout << "December 10th ";
			break;
		case 4:
			cout << "December 11th ";
			break;
	}
	
	cout << " at ";
	
	switch(time)
	{
		case 1:
			cout << "11:30am ";
			break;
		case 2:
			cout << "1:00pm ";
			break;
		case 3:
			cout << "4:30pm ";
			break;
		case 4:
			cout << "7:30pm ";
			break;
	}
	
//Mohamad El Jawad Sleiman
	//show seat numbers user has chosen
	cout << "\n\nYou have selected seat numbers ";
	for(int r = 1; r < ROWS; r++)
	{
		for(int c = 1; c < COLS; c++)
		{
			if(seating[r][c] == 'S')
				cout << "Row-" << r << "-Seat-" << c << ", ";
		}
	}
	
	//show user prices of each ticket
	cout << "\n\nThe price per seat is: " << endl;
	
	//ticket prices for each ticket are stored in the ticketPrice array
	//use a loop to show each array member
	for(int t = 0; t < nTickets; t++)
	{
		cout << "$" << setprecision(2) << fixed << showpoint << ticketPrice[t] << " for Ticket " << t + 1 << endl;
		//add each array member to ticketTotal
		ticketTotal += ticketPrice[t];
	}
	
	//show ticket prices before discounts
	cout << "\nFor a ticket total of $" << ticketTotal;
	
//Salleh Jahaf
	//if user is a HFC student or dearborn resident, discount each ticket and display new ticket prices
	if(discountEligible == 1 || discountEligible == 2)
	{
		ticketTotal = 0;
		cout << "\n\nYou qualify for a discount of 10% off each ticket. Your new ticket prices are: " << endl;
		for(int i = 0; i < ticketsBought; i++)
		{
			ticketPrice[i] = ticketPrice[i] * 0.9;
			cout << "$" << setprecision(2) << fixed << showpoint << ticketPrice[i] << " for Ticket " << i + 1 << endl;
			ticketTotal += ticketPrice[i];
		}
	}
	
	//calculate sales tax and grand total
	salesTax = ticketTotal * SALES_TAX;
	grandTotal = ticketTotal + salesTax;
	
	//display state tax and grand total to user
	cout << "\nState of Michigan tax: $" << setprecision(2) << fixed << showpoint << salesTax << endl;
	cout << "For a grand total of : $" << setprecision(2) << fixed << showpoint << grandTotal;
	
	return 0;
}

//Mohamad El Jawad Sleiman
int display(int &time)
{
	//Menu Header
	cout << "Welcome to the Henry Ford Theater." << endl << endl;
	cout << "Welcome to the online box office for the annual production of The Nutcracker." << endl << endl;
	
	int date;
	
	//Menu to have the user choose the time and date
	cout << "Please choose a date for the performance." << endl << endl;
	cout << "(1) - 12/3" << endl << "(2) - 12/4" << endl << "(3) - 12/10" << endl << "(4) - 12/11" << endl;
	cout << "Enter 1, 2, 3, or 4: ";
	cin >> date;
	cout << "Please choose a showtime" << endl << endl;
	cout << "(1) - 11:30am" << endl << "(2) - 1:00pm" << endl << "(3) - 4:30pm" << endl << "(4) - 7:30pm" << endl;
	cout << "Enter 1, 2, 3, or 4: ";
	cin >> time;
	
	return date;
}
