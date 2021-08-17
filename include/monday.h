#include <iostream>

float f_to_c(float f) {
  return ((f - 32) * 5) / 9; //Fahrenheit to Centigrade.
}

float c_to_f(float c) {
  return ((c * 9) / 5) + 32; //Centigrade to Fahrenheit.
}

float c_to_k(float c) {
  return (c + 273.15); //Centigrade to Kelvin.
}

float k_to_c(float k) {
  return (k - 273.15); // Kelvin to Centigrade.
}

float f_to_k(float f) {
  return ((f + 459.67) * 5 / 9); //Fahrenheit to Kelvin.
}

float k_to_f(float k) {
  return ((k * 9 / 5) - 459.67); //Kelvin to Fahrenheit.
}

void sub_menu(){
  //menu options
  std::cout << "\nPress ‘A’ to convert from Fahrenheit to Centigrade.";
  std::cout << "\nPress ‘B’ to convert from Centigrade to Fahrenheit.";
  std::cout << "\nPress ‘C’ to convert from Centigrade to Kelvin.";
  std::cout << "\nPress ‘D’ to convert from Kelvin to Centigrade.";
  std::cout << "\nPress ‘E’ to convert Fahrenheit to Kelvin.";
  std::cout << "\nPress ‘F’ to convert Kelvin to Fahrenheit.";
}

void fahrenheitCentigradeConversion(void) {
  std::string temp;
  char choice;
  std::string label;
  float input_temp = 0.0;
  float result_temp = 0.0;
  
  std::cout << "\nPlease enter the starting temperature: ";
  while (true) {
    try {
      std::getline(std::cin, temp);
      input_temp = stof(temp);
      break;
    } 
    catch (...) {
      std::cout << "Please enter a valid integer: ";
    }
  }
  // std::getline(std::cin, temp);
  // input_temp = stof(temp);

  sub_menu();
  std::cout << "\nYour choice: ";
  std::cin >> choice;
  
  switch(tolower(choice)) {
    case 'a':
      result_temp =  f_to_c(input_temp);
      label = "Farenheit";
      break;
    
    case 'b':
      result_temp = c_to_f(input_temp);
      label = "Centigrade";
      break;

    case 'c':
      result_temp = c_to_k(input_temp);
      label = "Centigrade";
      break;

    case 'd':
      result_temp = k_to_c(input_temp);
      label = "Kelvin";
      break;

    case 'e':
      result_temp = f_to_k(input_temp);
      label = "Fahrenheit";
      break;

    case 'f':
      result_temp = k_to_f(input_temp);
      label = "Kelvin";
      break;
    
    default:
      std::cout << "That input was invalid.\n";
      return;
  }

  std::cout << input_temp << " degrees " << label << " is = " << result_temp << "\n";
}



void selfServiceCheckout(void) {
	std::cout << " - selfServiceCheckout: not yet implemented\n\n";
}

