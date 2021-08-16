#include <iostream>

float f_to_c(float f) {
  return ((f - 32) * 5) / 9; //Fahrenheit to Centigrade.
}

float c_to_f(float c) {
  return ((c * 9) / 5) + 32; //Centigrade to Fahrenheit.
}

void fahrenheitCentigradeConversion(void) {
  std::string temp;
  std::string choice;
  std::string label;
  float input_temp = 0.0;
  float result_temp = 0.0;

  std::cout << "\nPlease enter the starting temperature: ";
  std::getline(std::cin, temp);
  input_temp = stof(temp);

  std::cout << "\nPress ‘C’ to convert from Fahrenheit to Centigrade";
  std::cout << "\nPress ‘F’ to convert from Centigrade to Fahrenheit.\n\n";
  std::cout << "\nYour choice: ";
  std::getline(std::cin, choice);
  
  if(choice=="c" || choice=="C") {
    result_temp =  f_to_c(input_temp);
    label = "Farenheit";
  }

  if(choice=="f" || choice=="F") {
    result_temp = c_to_f(input_temp);
    label = "Centigrade";
  }

  std::cout << "\n" << input_temp <<" degrees "  << label <<" is = " << result_temp;
}


void selfServiceCheckout(void) {
	std::cout << " - selfServiceCheckout: not yet implemented\n\n";
}

