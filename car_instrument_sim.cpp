//Car instrument Simulator
#include <iostream>

using namespace std;

class FuelGauge
{
	private:
		int carFuel;
	public:
		FuelGauge()
		{
			carFuel = 0;
		}
		int getGallons()
		{
			return carFuel;
		}
		void incrementGallons()
		{
			if(carFuel < 15)
				carFuel++;
			else
				cout << "Tank is full";
		}
		
		void burnFuel()
		{
			if(carFuel > 0)
				carFuel--;
			else
				cout << "Out of gas\n";
		}
};

class Odometer
{
	private:
		 int mileage;
		 FuelGauge *gas;
	public:
		Odometer(int m, FuelGauge *g)
		{
			mileage = m;
			gas = g;
		}
		void incrementMiles()
		{
			if(mileage == 999999)
				mileage = 0;
			else
				mileage++;
			if(mileage > 0 && (mileage % 24 == 0))
				gas->burnFuel();
		}
		int getMileage()
		{
			return mileage;
		}
};



int main()
{
	FuelGauge fuel;
	
	Odometer odometer(0, &fuel);
	
	for(int i = 0; i < 15; i++)
		fuel.incrementGallons();
		
	while(fuel.getGallons() > 0)
	{
		odometer.incrementMiles();
		
		cout << "Mileage: " << odometer.getMileage() << endl;
		cout << "Fuel level: " << fuel.getGallons() << " gallons\n";
		cout << "-------------------------------\n";
	}
	
	return 0;
}



