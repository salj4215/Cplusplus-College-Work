//Movie Data

#include <iostream>

using namespace std;

struct MovieData
{
	string title;
	string director;
	int yearReleased;
	int runningTime;
};

void showMovieData(MovieData);

int main()
{
	MovieData movie1 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142};
	MovieData movie2 = {"The Green Mile", "Frank Darabont", 1999, 189};
	
	showMovieData(movie1);
	showMovieData(movie2);
	
	return 0;
}

void showMovieData(MovieData m)
{
	cout << endl << endl;
	cout << "******************************************" << endl << endl;
	cout << m.title << endl;
	cout << "------------------------------" << endl << endl;
	cout << "Directed by:\t\t\t" << m.director << endl;
	cout << "Year released:\t\t\t" << m.yearReleased << endl;
	cout << "Running time in minutes:\t" << m.runningTime;
}
