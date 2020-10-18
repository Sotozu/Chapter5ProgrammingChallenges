#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
//HELLLLLLLLOOOOOOOOOOO 10/18/2020
int main() {
	//1. Sum of Numbers

	/*int posint;
	int total = 0;
	cout << "Please enter a positive integer value: ";
	cin >> posint;
	for (int i = 0; i <= posint; i++) {
		total += i;
	}
	cout << "The total is: " << total;
	return 0;*/

	//2. Characters of the ASCII Codes
	/*for (int i = 0; i <= 127; i++) {
		cout << static_cast<char>(i);
		if (i % 16 == 0) {
			cout << endl;
		}
	}
	return 0;*/

	//3. Ocean Levels
	/*double rise = 1.5;
	cout << "The following is the rise in sea level every year from recording.\n";
	for (int i = 1; i <= 25; i++) {
		cout << "Year " << i << ": " << rise * i << " millimeters total\n";
	}
	return 0;*/

	//4. Calories Burned
	/*double burned_calories = 0;
	double calpmin = 3.6;

	for (int i = 0; i <= 30; i++) {
		burned_calories += calpmin;
		if(i != 0 && i % 5 == 0) {
			cout << "At "<< i <<" minutes you burned: " << burned_calories << " calories." <<endl;
		}
	}*/

	//5. Membership Fees Increase
	/*double new_rate;
	double addition = 0;
	double base_charge = 2500;
	double rate_change = 0.04;

	for (int i = 0; i <= 5; i++) {

		base_charge = base_charge + addition; //setting the initial base charge to 2500 BUT this will change as we iterate
		addition = base_charge * rate_change; //calcualted what to add to the base charge
		base_charge = base_charge + addition; //Sets the base charge equal to itself plus the addition.

		cout << fixed << setprecision(2) << showpoint;
		cout << "Year "<< i <<": $" << base_charge << endl;
	}*/

	// 6. Distance Travled

	/*double speed, time, distance;
	cout << "Please enter the speed of the vehicle in (mph): ";
	cin >> speed;
	while (speed <= 0) {
		cout << "\nPlease enter a positive rate of speed: ";
		cin >> speed;
	}
	cout << "\nPlease enter the amount of time travled in (hrs): ";
	cin >> time;
	while (time <= 1) {
		cout << "\nPlease enter hours greater than 1: ";
		cin >> time;
	}
	for (int i = 0; i <= time; i++) {
		distance = speed * i;
		cout << "The vehicle has travled " << distance << " miles at the time of " << i << " hour." << endl;
	}*/

	// 7. Pennies for Pay

	/*double total_penies = 0;
	double total_dollars;
	int days;
	cout << "Please enter the number of days worked: ";
	cin >> days;

	for (int i = 0; i <= days; i++) {
		total_penies += i;
	}
	if (total_penies < 100) {
		cout << "In " << days << " days you have earned: " << total_penies << " penies.";
		return 0;
	}
	cout << fixed << showpoint << setprecision(2);

	total_dollars = (total_penies / 100);
	cout << "In " << days << " days you have earned: $" << total_dollars;
	return 0;*/

	// 8. Math Tutor

	/*return 0;*/

	// 9. Hotel Occupancy
	/*int floors, rooms, occupied;

	int total_rooms = 0, total_occupied = 0;
	do {
		cout << "How many floors does the hotel have: ";
		cin >> floors;
		if (floors < 1) {
			cout << "\nPlease enter floors greater than or equal to 1.\n";
		}
	} while (floors < 1);

	for (int i = 1; i <= floors; i++) {
		do {
			cout << "How many rooms are there on floor " << i << "?\n";
			cout << "Rooms: ";
			cin >> rooms;
			if (rooms < 10) {
				cout << "\nPlease enter rooms of 10 or more.\n";
			}
		} while (rooms < 10);

		cout << "How many of those rooms are occupied?\n";
		cout << "Occupied: ";
		cin >> occupied;
		total_rooms += rooms;
		total_occupied += occupied;
	}
	cout << total_rooms << " total rooms in the hotel.\n";
	cout << total_occupied << " of these rooms are occupied.\n";
	double percent;

	percent = static_cast<double>(occupied) / static_cast<double>(rooms);
	cout << setprecision(2) << fixed;
	cout << percent*100 << "% of the rooms are occupied.\n";

	return 0;*/

	// 10. Average Rainall

	/*int years, inches, total = 0;
	double avg;
	string month;

	do {
		cout << "Please enter the number of years: ";
		cin >> years;
		if (years < 1) {
			cout << "\nPlease enter years equal to or greater than 1.\n";
		}
	} while (years < 1);

	for (int i = 0; i < years; i++) {
		cout << endl;
		cout << "YEAR: " << i+1 << endl;
		for (int j = 0; j < 12; j++) {

			switch (j) {
			case (0): month = "January";
					break;
			case (1): month = "February";
				break;
			case (2): month = "March";
				break;
			case (3): month = "April";
				break;
			case (4): month = "May";
				break;
			case (5): month = "June";
				break;
			case (6): month = "July";
				break;
			case (7): month = "August";
				break;
			case (8): month = "September";
				break;
			case (9): month = "October";
				break;
			case (10): month = "November";
				break;
			case (11): month = "December";
				break;
			}
			do {
				cout << "Inches of rainfall in " << month << ": ";
				cin >> inches;

				if (inches >= 0) {
					total += inches;
				}

				if (inches < 0) {
					cout << "Please enter a positive integer for inches of rainfall.\n";
				}

			} while (inches < 0);
		}
	}
	cout << setprecision(2) << fixed << showpoint;
	cout << "There are " << years * 12 << " months of rainfall.\n";
	avg = static_cast<double>(total) / (static_cast<double>(years) / 2);
	cout << "The average rainfall per month for the entire period is " << avg << " inches.";*/

	// 11. Population
	/*int orig, days;
	double growth_rate;

	cout << "Please enter the starting population of the orginisim.\n";
	cout << "Population: ";
	cin >> orig;

	cout << "\nPlease enter the daily growth rate of this population.\n";
	cout << "Growth Rate (example: 2 is 2%): ";
	cin >> growth_rate;

	growth_rate = growth_rate / 100;


	cout << "\nPlease enter the total amount of days that the population will be experiencing growth.\n";
	cout << "Days: ";
	cin >> days;

	for (int i = 0; i < days; i++) {
		orig = orig + (orig*growth_rate);
	}

	cout << "The size of the population after " << days << " days is " << orig;*/

	// 12. Celsius to Fahrenheit

	// 13. The Greatest and Least of These


	/*vector<int> num;
	vector<int> ordered;
	int number;
	int temp;
	cout << "Please enter an asortment of numbers." << endl;
	cout << "Enter '-99' to stop the entering numbers." << endl;
	do {
		cin >> number;
		if (number == -99) {
			break;
		}
		num.push_back(number);

	} while (number != -99);

	for (int i = 0; i < num.size(); i++) { // this will be the value that is being compared to the others
		for (int j = 0; j < num.size(); j++) { // All values 'j' will be iterated to compare against the 'i'
			if (num[i] > num[j]) { // tests to see if the value being compared is smaller than 'i'

				temp = num[i];  //stores the value of the variable 'i' in the variable 'temp'
				num[i] = num[j]; // 'j' is less than 'i' so we give 'i' the lower value.
				num[j] = temp; //we give 'j' the value of 'temp' (the bigger value)
			}
		}
	}
	cout << "The numbers from greatest to least is: " << endl;
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << endl;
	}

	cout << "The greates number is: " << num[0] << endl;
	int size = num.size() -1;
	cout << "The smallest number is: " << num[size] << endl;*/

	// 14. Student Line Up
	/*vector<string> students;
	string names, small_name, big_name, temp;
	int length;

	bool check = true;

	cout << "Please eneter the name of students.\n";
	cout << "Press 'Q' to Quit.\n";

	do {

		cin >> names;
		if (names != "Q") {
			students.push_back(names);
		}

	} while (names != "Q");

	for (int i = 0; i < students.size(); i++) { //'TEST NAME' that all string names will be tested against

		for (int j = i; j < students.size(); j++) { //Iterates through all the name 'COMPARED NAMES' to test.

			if (students[i].size() < students[j].size()) { //checks to see if the length of 'TEST NAME' is less in length
				length = students[i].size();
				small_name = students[i];
				big_name = students[j];
			}
			else if (students[j].size() < students[i].size()) { //checks to see if the 'COMPARED NAME' is less in length
				length = students[j].size();
				small_name = students[j];
				big_name = students[i];
			}
			else
				length = students[i].size(); //Assigns the the smaller length of the 'TEST NAME' and 'COMPARED NAME' to the variable 'length'

			for (int h = 0; h < length; h++) { //Will iterate through the characters in both the 'TEST NAME' and 'COMPARED NAME'.
											   //Won't go past the smaller length name in testing as the variable 'length' holds that smaller name length.
				if (students[i].at(h) < students[j].at(h)) { //The 'TEST NAME' is alphabetically first. It stays where it is in the array.
															 //We 'break' from the for loop and iterate through the next name.
					break;
				}
				else if (students[i].at(h) > students[j].at(h)) { //The 'COMPARED NAME' is alphabetically first when compared to the 'TEST NAME'.
															 //We switch the positions of the names being compared in the array.
					temp = students[i];
					students[i] = students[j];
					students[j] = temp;
					break;
				}

			}

		}
	}
	cout << "The names in order are\n";
	for (int i = 0; i < students.size(); i++) {
		cout << students[i] << endl;
	}*/

	//15. Payroll Report
	/*int empnum, width = 20;
	double state_tax, fed_tax, fica, netpay, gross_pay, sum_tax_fica;
	bool check = false;
	do {
		cout << "Please enter the employee number: ";
		cin >> empnum;
		if (empnum == 0) {
			cout << "Terminiating Program";
			return 0;
		}
		do {

			do {
				cout << "Enter Pay: $";
				cin >> gross_pay;
				if (gross_pay < 0) {
					cout << "\nPlease enter a positive number for 'Pay'\n";
				}
			} while (gross_pay < 0);

			do {
				cout << "Enter State Tax: ";
				cin >> state_tax;
				if (state_tax < 0) {
					cout << "\nPlease enter a positive number for 'State Tax'\n";
				}
			} while (state_tax < 0);

			if (state_tax >= 1) { //If the use enterd a whole number like 7 for 0.07%. Do this.
				state_tax /= 100;
			}

			do {
				cout << "Enter Federal Tax: ";
				cin >> fed_tax;
				if (fed_tax < 0) {
					cout << "\nPlease enter a positive number for 'Federal Tax'\n";
				}
			} while (fed_tax < 0);

			if (fed_tax >= 1) { //If the use enterd a whole number like 7 for 0.07%. Do this.
				fed_tax /= 100;
			}

			do {
				cout << "Enter FICA Withholdings (ex. 1750): $";
				cin >> fica;
				if (fica > gross_pay) {
					cout << "\nPlease enter a number LESS than Gross Pay for 'FICA'\n";
				}
			} while (fica > gross_pay);


			netpay = gross_pay - (gross_pay * state_tax) - (gross_pay * fed_tax) - fica;
			sum_tax_fica = (gross_pay * state_tax) + (gross_pay * fed_tax) + fica;

			if ( sum_tax_fica > gross_pay) {
				check = true;
				cout << "\nThere was error. Please re-enter data for employee.\n";
			}




		} while (sum_tax_fica > gross_pay);
		cout << showpoint << setprecision(2) << fixed;

		cout << "\nFIANCIAL ANALYSIS\n";
		cout << setw(width) << left << "Gross Pay:" << "$" << gross_pay << endl;
		cout << setw(width) << left << "State Tax:" << "$" << state_tax * gross_pay << endl;
		cout << setw(width) << left << "Federal Tax:" << "$" << fed_tax * gross_pay << endl;
		cout << setw(width) << left << "FICA Withhodings:" << "$" << fica << endl;
		cout << "__________________\n";
		cout << setw(width) << left << "Net Pay:" << "$" << netpay << endl;

	} while (empnum != 0);*/

	//16. Saving Account Balance

	/*double interest, start_balance, deposit, months, withdraw;
	double mont_int_rate, tot_int = 0, tot_dep = 0, tot_wit = 0;

	int width = 30;
	cout << "Please enter the anual interest rate(%): ";
	cin >> interest;

	if (interest >= 1) {
		interest /= 100;
	}

	cout << "Please eneter the starting balance: $";
	cin >> start_balance;

	cout << "Please enter the amount of months to compound: ";
	cin >> months;

	mont_int_rate = interest / 12;

	for (int i = 1; i <= months; i++) {
		cout << "MONTH: " << i << endl;
		cout << "Enter money deposited for this month: $";
		cin >> deposit;
		cout << "Enter money withdrawn for this month: $";
		cin >> withdraw;

		start_balance += (deposit - withdraw); //Will calcualte the balance of the account at the end of the month BEFORE INTEREST

		tot_dep += deposit; //Will sum total depositis over the time period set

		tot_wit += withdraw; //Will sum total withdraws over the time period set

		tot_int += (start_balance * mont_int_rate); //Will sum total interest earned over the time period set

		start_balance += (start_balance * mont_int_rate); //Calculates the balance of the account WITH INTEREST EARNED
	}
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nFIANCIAL ANALYSIS\n";
	cout << setw(width) << left << "Total Deposits: " << "$" << tot_dep << endl;
	cout << setw(width) << left << "Total Withdrawls: " << "$" << tot_wit << endl;
	cout << setw(width) << left << "Total Interest Earned: " << "$" << tot_int << endl;
	cout << "__________________\n";
	cout << setw(width) << left << "Ending Balance of Account: " << "$" << start_balance << endl;*/

	//17. Sales Bar Chart
	/*double sales[4];
	int asteriks[4];
	int hundreds;

	for (int i = 1; i <= 5; i++) {
		cout << "Please enter the sales for store #" << i << ": $";
		cin >> sales[i];
		asteriks[i] = sales[i] / 100;
	}

	cout << "\nSALES BAR CHART\n";
	cout << "(Each * = $100)\n";



	for (int i = 1; i <= 5; i++) {
		cout << "Store " << i << ":";
		for (int j = 0; j < asteriks[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}*/

	// 18.Population Bar Chart
	/*ifstream inputFile;
	ofstream outFile;

	int population[6];
	string date[6] = { "1900", "1920", "1940", "1960", "1980", "2000" };
	int bar_size;

	inputFile.open("pop.txt"); // Opens the file pop.txt

	cout << "PRARIEVILLE POPULATION GROWTH\n(each '*' represents 1,000 people)\n";

	for (int i = 0; i < 6; i++) {

		inputFile >> population[i];
		bar_size = population[i] / 1000;
		cout << date[i] << ":";
		for (int j = 0; j < bar_size; j++) {
			cout << "*";
		}
		cout << endl;

	}

	inputFile.close(); // Close the file*/

	//19. Budget Analysis 

/*int end_result, budget, expense, deposit, total_expense = 0, total_deposit = 0;
bool isNumber = true;
int counter_month = 0;
int counter = 1;
double grand_total;
string num_check;
string final;

cout << "Please set your budget for the month: $";
cin >> budget;

cout << "\nPlease enter any character other than a number to quit\n";

do {

	cout << "Enter Expenses for week " << counter << ": $";
	cin >> expense;

	num_check = to_string(expense); //converts the user input into a string;

	for (int i = 0; i < num_check.length(); i++) { //checks for any input that is not an integer.
		if (isdigit(num_check[i]) == false) { //iterated through each position in the string to check if it's a digit
			isNumber = false;
			break;
		}
	}

	if (isNumber == false) { // breaks out of 'do-while; loop
		break;
	}
	total_expense += expense;

	cout << "Enter Deposits for week " << counter << ": $";
	cin >> deposit;

	num_check = to_string(deposit); //converts the user input into a string;

	for (int i = 0; i < num_check.length(); i++) { //checks for any input that is not an integer.
		if (isdigit(num_check[i]) == false) { //iterated through each position in the string to check if it's a digit
			isNumber = false;
			break;// break out of the loop;
		}
	}
	if (isNumber == false) { // breaks out of 'do-while; loop
		break;
	}
	total_deposit += deposit;

	counter_month++;
	counter++;

	cout << endl;

} while (counter_month < 4 || isNumber != true);


grand_total = static_cast<double>(total_deposit) - static_cast<int>(total_expense);
cout << grand_total;

if ((budget - total_expense) == 0) {
	final = "ON BUDGET: ";
	end_result =budget - grand_total;
}
else if ((budget - total_expense) > 0) {
	final = "UNDER BUDGET BY:";
	end_result = budget - total_expense;
}
else if ((budget - total_expense) < 0) {
	final = "OVER BUDGET BY:";
	end_result = budget - total_expense;
}

cout << setprecision(2) << showpoint << fixed;
cout << "\nAT END OF MONTH\n";
cout << setw(20) << left << "Total Deposits: " << "$" << total_deposit << endl;
cout << setw(20) << left << "Total Expenses: " << "$" << total_expense << endl;
cout << setw(20) << left << "______________" << endl;
cout << setw(20) << left << "Account Total: " << "$" << grand_total << endl;
cout << setw(20) << left << "______________" << endl;
cout << setw(20) << left << "Expense Budget: " << "$" << budget << endl;
cout << setw(20) << left << "______________" << endl;
cout << setw(20) << left << "______________" << endl;
cout << setw(20) << left << final << ": " << "$" << end_result << endl;
*/

//20. Random Number Guessing Game
	/*int random_num, user_input;

	srand(time(0));

	random_num = (rand() % 100) + 1 ;
	cout << "GUESS MY NUMBER!\n";
	do {
		cout << "Guess: ";
		cin >> user_input;

		if (user_input < random_num) {
			cout << "Try higher!\n";
		}
		else if (user_input > random_num) {
			cout << "Try lower!\n";
		}

	} while (user_input != random_num);

	cout << "CONGRATULATIONS! THE NUMBER IS: " << random_num << endl;
	*/

	//21. Random Number Guessing Game Enhancement
	/*int random_num, user_input, counter = 0;

	srand(time(0));

	random_num = (rand() % 100) + 1;
	cout << "GUESS MY NUMBER!\n";
	do {
		cout << "Guess: ";
		cin >> user_input;

		if (user_input < random_num) {
			cout << "Try higher!\n";
		}
		else if (user_input > random_num) {
			cout << "Try lower!\n";
		}
		counter++;
	} while (user_input != random_num);

	cout << "CONGRATULATIONS! THE NUMBER IS: " << random_num << endl;
	cout << "IT TOOK YOU " << counter << " tries!";*/

	//22. Square Display

		/*int user_input;
		char unit = 'X';

		cout << "Enter and integer 1-15." << endl;
		do {
			cout << "Enter number: ";
			cin >> user_input;
			if (user_input > 15 || user_input <= 0) {
				cout << "Please re-enter a valid number." << endl;
			}
		} while (user_input > 15 || user_input <= 0);
		for (int i = 0; i < user_input; i++) {
			for (int j = 0; j < user_input; j++) {
				cout << unit;
			}
			cout << endl;
		}*/

		//23. Pattern Display
		/*
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < 10; i++) {
			for (int j = 10; j > i; j--) {
				cout << "*";
			}
			cout << endl;
		}
		*/
		//.24 Using Files Numeric Processing
		/*
		ifstream inFile;
		ofstream outFile;
		int num, count = 0, average, random_num, loop_amount, total = 0;

		srand(time(NULL));

		outFile.open("randnum.txt");
		loop_amount = rand() % 50 + 50; //the amount of numbers to be inserted in to the file will be between 50 and 100

		for (int i = 0; i < loop_amount; i++) {

			random_num = rand() % 1000 + 1; //Will generate a number between 1 and 1000.
			outFile << random_num << endl; // Places a randomly generated number into the file.

		}

		outFile.close();

		inFile.open("randnum.txt");

		while (!inFile.eof()) {

			inFile >> num;
			total += num;
			count++;

		}
		cout << "CHECK3\n";
		cout << "There are " << count << " numbers in the file.\n";
		cout << "The total of all the numbers is " <<total << ".\n";
		average = total / count;
		cout << "The average is " << average << ".\n";*/


		//.25 Using Files - Student Line Up
/*
	ifstream inFile;
	ofstream outFile;

	vector<string> students;
	string names, small_name, big_name, temp;
	int length;

	bool check = true;
	cout << "The names in the files are alphabetically ordered as follows:\n";
	inFile.open("LineUp.txt");
	do {
		inFile >> names;
		students.push_back(names);

	} while (!inFile.eof());
	inFile.close();


	for (int i = 0; i < students.size(); i++) { //'TEST NAME' that all string names will be tested against

		for (int j = i; j < students.size(); j++) { //Iterates through all the name 'COMPARED NAMES' to test.

			if (students[i].size() < students[j].size()) { //checks to see if the length of 'TEST NAME' is less in length
				length = students[i].size();
				small_name = students[i];
				big_name = students[j];
			}
			else if (students[j].size() < students[i].size()) { //checks to see if the 'COMPARED NAME' is less in length
				length = students[j].size();
				small_name = students[j];
				big_name = students[i];
			}
			else
				length = students[i].size(); //Assigns the the smaller length of the 'TEST NAME' and 'COMPARED NAME' to the variable 'length'

			for (int h = 0; h < length; h++) { //Will iterate through the characters in both the 'TEST NAME' and 'COMPARED NAME'.
											   //Won't go past the smaller length name in testing as the variable 'length' holds that smaller name length.
				if (students[i].at(h) < students[j].at(h)) { //The 'TEST NAME' is alphabetically first. It stays where it is in the array.
															 //We 'break' from the for loop and iterate through the next name.
					break;
				}
				else if (students[i].at(h) > students[j].at(h)) { //The 'COMPARED NAME' is alphabetically first when compared to the 'TEST NAME'.
															 //We switch the positions of the names being compared in the array.
					temp = students[i];
					students[i] = students[j];
					students[j] = temp;
					break;
				}

			}

		}
	}
	cout << "The names in order are\n";
	for (int i = 0; i < students.size(); i++) {
		cout << students[i] << endl;
	}*/

	//26. Using Files - Savings Account Balance Modification
		/*double interest, start_balance, deposit, months, withdraw;
		double mont_int_rate, tot_int = 0, tot_dep = 0, tot_wit = 0;
		ifstream inFile;
		ofstream outFile;
		string output;

		outFile.open("balance.txt");

		int width = 30;
		cout << "Please enter the anual interest rate(%): ";
		cin >> interest;

		if (interest >= 1) {
			interest /= 100;
		}

		cout << "Please eneter the starting balance: $";
		cin >> start_balance;

		cout << "Please enter the amount of months to compound: ";
		cin >> months;

		mont_int_rate = interest / 12;

		for (int i = 1; i <= months; i++) {
			cout << "MONTH: " << i << endl;
			cout << "Enter money deposited for this month: $";
			cin >> deposit;
			cout << "Enter money withdrawn for this month: $";
			cin >> withdraw;

			start_balance += (deposit - withdraw); //Will calcualte the balance of the account at the end of the month BEFORE INTEREST

			tot_dep += deposit; //Will sum total depositis over the time period set

			tot_wit += withdraw; //Will sum total withdraws over the time period set

			tot_int += (start_balance * mont_int_rate); //Will sum total interest earned over the time period set

			start_balance += (start_balance * mont_int_rate); //Calculates the balance of the account WITH INTEREST EARNED
		}

		outFile << fixed << setprecision(2) << showpoint;
		outFile << "FIANCIAL ANALYSIS\n";
		outFile << setw(width) << left << "Total Deposits: " << "$" << tot_dep << endl;
		outFile << setw(width) << left << "Total Withdrawls: " << "$" << tot_wit << endl;
		outFile << setw(width) << left << "Total Interest Earned: " << "$" << tot_int << endl;
		outFile << "__________________\n";
		outFile << setw(width) << left << "Ending Balance of Account: " << "$" << start_balance << endl;

		outFile.close();*/

		// ENAM SDRAWKCAB (NAME BACKWARDS)
		/*string name;
		cout << "Please enter a name: ";
		cin >> name;
		bool check = 1;
		do {
			name.length();
			for (int i = (name.length()-1); i >= 0; i--) {
				cout << name.at(i);
			}

			cout << "\n(Enter 0 to STOP or Anyother number to continue)\nContinue?: ";

			cin >> check;

		} while (check != 0);*/

	return 0;
}

