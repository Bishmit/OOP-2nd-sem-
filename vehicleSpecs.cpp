#include <iostream>
using namespace std;
class Vehicle {
	protected:
    int mileage;
    double price;
  public:
    // Constructor to initialize data members
    Vehicle(int newmileage, double newprice){
    	mileage= newmileage;
    	price = newprice;
	}
    void Display(){
      cout << "Mileage: " << mileage<< endl;
      cout << "Price: " << price<< endl;
    }
};

class Car : public Vehicle {
	protected:
    double ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;
  public:
    Car(int newmileage, double newprice, double newownershipCost, int newwarranty, int newseatingCapacity, string newfuelType)
	:Vehicle(newmileage,newprice){
    	ownershipCost = newownershipCost;
    	warranty = newwarranty;
    	seatingCapacity = newseatingCapacity;
    	fuelType = newfuelType;
	}
     
    void Display(){
      cout << "Ownership cost: " << ownershipCost<< endl;
      cout << "Warranty: " << warranty<< " years" << endl;
      cout << "Seating capacity: " << seatingCapacity<< endl;
      cout << "Fuel type: " << fuelType<< endl;
      Vehicle::Display();
    }
};

class Bike : public Vehicle {
	protected:
    int cylinders;
    int gears;
    string coolingType;
    string wheelType;
    double fuelTankSize;
    double ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;
  public:
    Bike(int newmileage, double newprice, int newcylinders, int newgears, string newcoolingType, string newwheelType, 
	double newfuelTankSize,	double newownershipCost, int newwarranty, int newseatingCapacity, string newfuelType)
	:Vehicle(newmileage,newprice){
    		cylinders = newcylinders;
    	   	gears = newgears;
    		coolingType = newcoolingType;
    		wheelType = newwheelType;
    		fuelTankSize = newfuelTankSize;
    		ownershipCost = newownershipCost;
    		warranty = newwarranty;
    		seatingCapacity = newseatingCapacity;
    		fuelType = newfuelType;
		}
      
    // Function to display bike details
    void Display(){
      cout << "Number of cylinders: " << cylinders<< endl;
      cout << "Number of gears: " << gears<< endl;
      cout << "Cooling type: " << coolingType<< endl;
      cout << "Wheel type: " << wheelType<< endl;
      cout << "Fuel tank size: " << fuelTankSize<< " inches" << endl;
      cout << "Ownership cost: " << ownershipCost<< endl;
      cout << "Warranty: " << warranty<< " years" << endl;
      cout << "Seating capacity: " << seatingCapacity<< endl;
      cout << "Fuel type: " << fuelType<< endl;
      Vehicle::Display();
    }

};

class Audi : public Car {
	private:
    string modelType;
  public:
    // Constructor to initialize data members
    Audi(int newmileage, double newprice, double newownershipCost, int newwarranty, int newseatingCapacity, string newfuelType, string newmodelType)
      : Car(newmileage,newprice,newownershipCost,newwarranty,newseatingCapacity,newfuelType){
      	modelType = newmodelType;
	  }

    // Function to display Audi details
    void Display(){
      cout << "Model type: " << modelType << endl;
      Car::Display();
    }

  
};

class Ford : public Car {
	private:
    string modelType;
    public:
	Ford(int newmileage, double newprice, double newownershipCost, int newwarranty, int newseatingCapacity, string newfuelType, string newmodelType)
      : Car(newmileage,newprice,newownershipCost,newwarranty,newseatingCapacity,newfuelType){
      	modelType = newmodelType;
	  }
	  
	  void Display(){
	  	cout<<"Model type: "<<modelType<<endl;
	  	Car::Display();
	  }
 };
	class bajaj: public Bike{
	string makeType;
	public:
	bajaj(string newmaketype,int newmileage, double newprice, int newcylinders, int newgears, string newcoolingType,
	 string newwheelType, double newfuelTankSize,
	double newownershipCost, int newwarranty, int newseatingCapacity, string newfuelType): Bike(newmileage,newprice,
	newcylinders,newgears,newcoolingType,newwheelType,newfuelTankSize,
	newownershipCost,newwarranty,newseatingCapacity,newfuelType){
		makeType = newmaketype;
	}
	 void Display(){
	 	cout<<"Make type: "<<makeType<<endl;
	 	Bike::Display();
	 }
 };
 
 	class TVS: public Bike{
	string makeType;
	public:
	TVS(string newmaketype,int newmileage, double newprice, int newcylinders, int newgears, string newcoolingType,
	 string newwheelType, double newfuelTankSize,
	double newownershipCost, int newwarranty, int newseatingCapacity, string newfuelType):Bike(newmileage,newprice,
	newcylinders,newgears,newcoolingType,newwheelType,newfuelTankSize,
	newownershipCost,newwarranty,newseatingCapacity,newfuelType){
		makeType = newmaketype;
	}
	 void Display(){
	 	cout<<"Make type: "<<makeType<<endl;
	 	Bike::Display();
	 }
 };
 
 int main(){
 	Audi a(1594, 50000, 46000, 5, 5,"Petrol", "A5");
 	Ford f(1497, 35000, 22000, 5, 5, "Petrol", "F-150");
 	bajaj b("Pulsar", 150, 1800, 150, 4, "Air_cooling", "Alloy", 15, 584, 5, 2, "Petrol");
 	TVS t("Apache", 160, 2000, 150, 4, "Oil_cooling", "Alloy", 15, 600, 5, 2, "Petrol");
 	cout<<"----------------------------INFORMATION FOR CAR-------------------------------"<<endl;
 	cout<<endl;
 	cout<<"-------------------------------SPECS OF AUDI-------------------------------"<<endl;
 	a.Display();
 	cout<<endl;
 	cout<<"-------------------------------SPECS OF FORD-------------------------------"<<endl;
 	f.Display();
 	cout<<endl;
 	cout<<"----------------------------INFORMATION FOR BIKE-------------------------------"<<endl;
 	cout<<endl;
 	cout<<"------------------------------SPECS OF BAJAJ-------------------------------------"<<endl;
 	b.Display();
 	cout<<endl;
 	cout<<"------------------------------SPECS OF TVS-------------------------------------"<<endl;
 	t.Display();	
 	
 }
