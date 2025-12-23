#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay;
	cout << "Enter initial loan: " ;
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	double PrevBalance = loan;
	double Interest = loan*rate/100.0;
	double Total = PrevBalance + Interest;
    double Payment = pay;
	double NewBalance = Total - Payment;
	int EndOfYear = 1;
	while(1){
		cout << setw(13) << left << EndOfYear;
		EndOfYear ++;
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << Interest;
		cout << setw(13) << left << Total;
		if (Total < Payment){
			cout << setw(13) << left << Total;
			cout << setw(13) << left << 0.00;
			break;
		}else{
			cout << setw(13) << left << Payment;
		
		}
		cout << setw(13) << left << NewBalance;
		PrevBalance = NewBalance;
		Interest = PrevBalance*rate/100.0;
		Total = PrevBalance + Interest;
		NewBalance = Total - Payment;
		cout << endl;

		
	}

	return 0;
}
