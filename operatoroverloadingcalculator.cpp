#include<iostream>
using namespace std;
class complex{
	int value; 
	public: 
	void getdata(){
		cout<<"Enter a value: ";
		cin>>value;

	}
		void displaydata(){
			cout<<"value: "<<value<<endl;
			
		}
		
		complex operator+(complex b){
			complex c; 
			c.value = value + b.value; 
			return c;
		}
		
			complex operator-(complex b){
			complex c; 
			c.value = value - b.value; 
			return c;
		}
		
			complex operator*(complex b){
			complex c; 
			c.value = value * b.value; 
			return c;
		}
		
			complex operator/(complex b){
			complex c; 
			c.value = value / b.value; 
			return c;
		}
};
int main(){
	complex aa, bb, cc; 
	 char ch;
    int choice;

    aa.getdata();
    cout << "1st value entered: ";
    aa.displaydata();
    cout << endl;

    bb.getdata();
    cout << "2nd value entered: ";
    bb.displaydata();
    cout << endl;

    cout << "Input choice as integer: \n1: +   \n2: -   \n3: *   \n4: /    ";
    cout<<"\n\n";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
        case 1:
            cc = aa + bb; 
            cc.displaydata(); 
            break;
        case 2:
             cc = aa - bb; 
             cc.displaydata();
            break;
        case 3:
            cc = aa * bb;
             cc.displaydata();
            break;
        case 4:
             cc = aa / bb; 
             cc.displaydata(); 
            break;
        default:
            cout << "Invalid choice! " << endl;
    }
 
 }

		

