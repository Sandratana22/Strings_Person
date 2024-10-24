
#include <iostream>
#include "strings_customer.h"
#include <string>

using namespace std; 

namespace personIdentity {

	void string_person(const std::string& fullName) {
		size_t positionOfName = fullName.find(" "); 

		string firstName = fullName.substr(0, positionOfName); 
		string lastName = fullName.substr(positionOfName + 1); 

		cout << "\nExtracted Name\n";
		cout << "FistName: " << firstName << endl;
		cout << "LastName: " << lastName << endl; 

	}
}
