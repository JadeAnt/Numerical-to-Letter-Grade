#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int input;

	cout << "Input Numerical Grades Here (Input -1 to exit): ";
	cin >> input;

	while (input != -1) { // if -1 is not input, the program will continue

		if (input <= 59)
			cout << "Your grade is a F." << endl;
		else if ((input >= 60) && (input <= 62))
			cout << "Your grade is a D-." << endl;
			else if ((input >= 63) && (input <= 66))
				cout << "Your grade is a D." << endl;
			else if ((input >= 67) && (input <= 69))
				cout << "Your grade is a D+." << endl;
				else if ((input >= 70) && (input <= 72))
					cout << "Your grade is a C-" << endl;
				else if ((input >= 73) && (input <= 76))
					cout << "Your grade is a C" << endl;
					else if ((input >= 77) && (input <= 79))
						cout << "Your grade is a C+" << endl;
					else if ((input >= 80) && (input <= 82))
						cout << "Your grade is a B-" << endl;
						else if ((input >= 83) && (input <= 86))
							cout << "Your grade is a B" << endl;
						else if ((input >= 87) && (input <= 89))
							cout << "Your grade is a B+" << endl;
							else if ((input >= 90) && (input <= 92))
								cout << "Your grade is a A-" << endl;
							else if ((input >= 93) && (input <= 96))
								cout << "Your grade is a A" << endl;
								else if ((input >= 97) && (input <= 100))
									cout << "Your grade is a A+" << endl;

		cout << "Input Numerical Grades Here (Input -1 to exit): ";
		cin >> input;
	}
	
	cout << "Program ending now. " << endl;// lets user know that program is over

	system("pause");
	return 0;
}
