#include <iostream>
#include <ctype.h>

void passwordComplexityChecker() {
  std::string password;
  std::cout  << "Password: ";
  std::cin >> password;

  int alpha_chars = 0;
  int digits = 0; 
  int special_chars = 0;
  int password_length = password.length();
  std::string result;

  for (int i = 0; i < password_length; i++){
    if(isalpha(password[i])){
      alpha_chars++;
    }
    else if(isdigit(password[i])){
      digits++;
    }
    else{
      special_chars++;
    }
  }

  if(password_length >= 8 && digits >= 2 && alpha_chars >= 4  && special_chars >= 1){
    result = "Very Strong";
  }
  else if(password_length >= 8 && digits >= 2 && alpha_chars >= 4){
    result = "Strong";
  }
  else if(password_length >= 4 && digits >= 1 && alpha_chars >= 1){
    result = "Moderate";
  }
  else if (password_length >= 1 && ((digits >= 1 && alpha_chars == 0) || (digits == 0 && alpha_chars >= 1))){
    result = "Weak";
  }
  else{
    result = "That password was invalid.";
  }

  std::cout << "The password '" << password << "' is " << result;
}


void employeeListRemoval(void) {
	std::cout << " - employeeListRemoval: not yet implemented\n\n";
}
