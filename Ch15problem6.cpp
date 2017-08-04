// Chapter 15, Programming Challenge 6: Essay Class
#include <iostream>
#include "Essay.h"
using namespace std;

int main()
{
	Essay report;
	double points;

	// Assign grammer points.
	cout << "How many grammer points did the student earn? (0 - 30): ";
	cin >> points;
	while (points < 0 || points > 30)
	{
		cout << "Enter a number from 0 through 30: ";
		cin >> points;
	}
	report.setGrammerPoints(points);

	// Assign spelling points.
	cout << "How many spelling points did the student earn?  (0 - 20): ";
	cin >> points;
	while (points < 0 || points > 20)
	{
		cout << "Enter a number from 0 through 20: ";
		cin >> points;
	}
	report.setSpellingPoints(points);

	// Assign length points.
	cout << "How many points for length did the student earn?  (0 - 20): ";
	cin >> points;
	while (points < 0 || points > 20)
	{
		cout << "Enter a number from 0 through 20: ";
		cin >> points;
	}
	report.setLengthPoints(points);

	// Assign content points.
	cout << "How many points for content did the student earn?  (0 - 30): ";
	cin >> points;
	while (points < 0 || points > 30)
	{
		cout << "Enter a number from 0 through 30: ";
		cin >> points;
	}
	report.setContentPoints(points);

	// Display the scores and grade.
	cout << "Grammer points: " << report.getGrammerPoints() << endl;
	cout << "Spelling points: " << report.getSpellingPoints() << endl;
	cout << "Length points: " << report.getLengthPoints() << endl;
	cout << "content points: " << report.getContentPoints() << endl;
	cout << "Overall score: " << report.getScore() << endl;
	cout << "Grade: " << report.getLetterGrade() << endl;

	return 0;
}
