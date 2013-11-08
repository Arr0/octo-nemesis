#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Invoice {
private:
	int labourCost,
		travelCost,
		plasticPipesCost,
		copperPipesCost,
		chromePipesCost;
public:
	Invoice();
	~Invoice();
	void getInvoice();
};

Invoice::Invoice() {
	labourCost = 40;
	travelCost = 1;
	plasticPipesCost = 2;
	copperPipesCost = 3;
	chromePipesCost = 4;

	cout << "PT Plumbing Invoice Calculator" << endl;
	cout << "------------------------------" << endl << endl;
}

Invoice::~Invoice() {
	cout << endl << endl << "[INVOICE CALCULATED]" << endl;
}

void Invoice::getInvoice() {
	
	// Stores user input
	int input;

	// Stores user data for each item
	int labour,
		travel,
		plasticPipes,
		copperPipes,
		chromePipes,
		vat, total;

	// Gets user to input values
	cout << "Enter values to estimate cost of job" << endl << endl;
	cout << "Labour " << endl  << ">";
	cin >> input;
	cout << endl;
	labour = input;

	cout << "Travel " << endl << ">";
	cin >> input;
	cout << endl;
	travel = input;

	cout << "Plastic Pipes " << endl << ">";
	cin >> input;
	cout << endl;
	plasticPipes = input;

	cout << "Copper Pipes " << endl << ">";
	cin >> input;
	cout << endl;
	copperPipes = input;

	cout << "Chrome Pipes " << endl << ">";
	cin >> input;
	cout << endl;
	chromePipes = input;

	cout << endl << "--------------PT Plumbing - Invoice-------------" << endl << endl;
	cout << "Item";
	cout.width(26);
	cout << "Amount";
	cout.width(14);
	cout << "Cost(" << char(156) << ")" << endl << "------------------------------------------------" << endl;

	// Display labour amount
	cout << "Labour";
	cout.width(22);
	cout << labour;
	cout.width(16);
	cout << labour * labourCost << endl;

	// Display travel amount
	cout << "Travel";
	cout.width(22);
	cout << travel;
	cout.width(16);
	cout << travel * travelCost << endl;

	// Display plastic pipes amount
	cout << "Plastic Pipes";
	cout.width(15);
	cout << plasticPipes;
	cout.width(16);
	cout << plasticPipes * plasticPipesCost << endl;

	// Display copper pipes amount
	cout << "Copper Pipes";
	cout.width(16);
	cout << copperPipes;
	cout.width(16);
	cout << copperPipes * copperPipesCost << endl;

	// Display chrome pipes amount
	cout << "Chrome Pipes";
	cout.width(16);
	cout << chromePipes;
	cout.width(16);
	cout << chromePipes * chromePipesCost << endl << endl;

	// Calculate total
	total = (labour * labourCost) + 
			(travel * travelCost) +
		    (plasticPipes * plasticPipesCost) + 
			(copperPipes * copperPipesCost) +
			(chromePipes * chromePipesCost);

	// Calculate VAT at 20%
	vat = (total * 20) / 100;

	// Display VAT
	cout << "VAT";
	cout.width(41);
	cout << vat << endl;

	// Display total
	cout << "TOTAL";
	cout.width(39);
	cout << total + vat << endl;

	cout << "------------------------------------------------";
}

int main() {

	// Set console window title
	SetConsoleTitle(TEXT("Cost Calulator - GrubSoft"));

	// Create Invoice object
	Invoice invoice;

	invoice.getInvoice();

	return 0;
}
