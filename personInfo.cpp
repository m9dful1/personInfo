/*
 * personInfo.cpp
 *
 *  Created on: Jun 13, 2024
 *      Author: Jeremy Matthews
 */
#include <iostream>
#include <string>

int main() {
	// Variables to hold the person's information
	std::string firstName, lastName, streetAddress, city, zipCode;
	
	// Prompting user to enter the information
	std::cout << "Enter the first name: ";
	std::getline(std::cin, firstName);
	
	std::cout << "Enter the last name: ";
	std::getline(std::cin, lastName);
	
	std::cout << "Enter the street address: ";
	std::getline(std::cin, streetAddress);
	
	std::cout << "Enter the city: ";
	std::getline(std::cin, city);
	
	std::cout << "Enter the zip code: ";
	std::getline(std::cin, zipCode);
	
	// Printing the entered information
	std::cout << "\nFictional Person Information:\n";
	std::cout << "First Name: " << firstName << "\n";
	std::cout << "Last Name: " << lastName << "\n";
	std::cout << "Street Address: " << streetAddress << "\n";
	std::cout << "City: " << city << "\n";
	std::cout << "Zip Code: " << zipCode << "\n";
	
	return 0;
				
}
