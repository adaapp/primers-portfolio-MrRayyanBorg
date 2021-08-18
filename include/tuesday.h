int strength_check(std::string password) {

  int alpha_chars = 0;
  int digits = 0; 
  int special_chars = 0;
  int password_length = password.length();
  std::string result;

  //finds number of alpha, digits, and spec characters in password
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

  //very strong and strong
  if (password_length > 0){
    if (password_length >= 8 && digits >= 2 && alpha_chars >= 4) {
    return special_chars == 0 ? 3 : 4;
    }
    //moderate and weak
    if (password_length >= 4) {
      if (!(alpha_chars == password_length || digits == password_length || special_chars == password_length)) {
        return 2;
      }
      else{
        return 1;
      }
    }
  }
  //len == 0? return 0 - used for switch case err message
  else{
    return 0;
  }
  return 0;
}

void passwordComplexityChecker(void) {
  std::string result;
  std::string password;

  std::cout << "Password: ";
  std::cin >> password;
  
  //Output result depending on case
  switch (strength_check(password)) {
    case 0:
      std::cout << "Error - No input given.";
      break;
    case 1:
      result = "Weak";
      break;
    case 2:
      result = "Moderate";
      break;
    case 3:
      result = "Strong";
      break;
    case 4:
      result = "Very Strong";
      break;
    default:
      std::cout << "Yikes";
  }
  //output
  std::cout << "The password '" << password << "' is " << result;
}

void employeeListRemoval(void) {
	std::cout << " - employeeListRemoval: not yet implemented\n\n";
}
