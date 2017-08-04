//Essay class
#ifndef ESSAY_H
#define ESSAY_H
#include "InClassTwo2.h"

class Essay : public GradedActivity
{
	private:
		double grammerPoints;
		double spellingPoints;
		double lengthPoints;
		double contentPoints;
		double totalPoints;
	public:
		Essay() : GradedActivity()
		{
			grammerPoints = 0;
			spellingPoints = 0;
			lengthPoints = 0;
			contentPoints = 0;
		}
		void setGrammerPoints(double d)
		{
			grammerPoints = d;
			addToTotal(grammerPoints);
		}
		void setSpellingPoints(double d)
		{
			spellingPoints = d;
			addToTotal(spellingPoints);
		}
		void setLengthPoints(double d)
		{
			lengthPoints = d;
			addToTotal(lengthPoints);
		}
		void setContentPoints(double d)
		{
			contentPoints = d;
			addToTotal(contentPoints);
		}
		double getGrammerPoints() const
		{
			return grammerPoints;
		}
		double getSpellingPoints() const
		{
			return spellingPoints;
		}
		double getLengthPoints() const
		{
			return lengthPoints;
		}
		double getContentPoints() const
		{
			return contentPoints;
		}
		void addToTotal(double p)
		{
			totalPoints += p;
			setScore(totalPoints);
		}
};
#endif
