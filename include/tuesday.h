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


//Employee list


//function to output the array
void outputEmployees(std::vector<std::string> employees){
  int len = employees.size();
  std::cout << "\nThere are " << len << " employees:\n";
  for (auto employee : employees) {
    std::cout << employee << "\n";
  }
}

//find employee in list
int find_employee(std::vector<std::string> emp, std::string name){
  auto it = std::find(emp.cbegin(), emp.cend(), name);
  if(it != emp.cend()){
    int index = std::distance(emp.cbegin(),it);
    return index;
  }else{
    //if not found
    return -1;
  }
}

void employeeListRemoval(void){
  std::string name_to_del = "";
  int employee_pos = 0;

  std::vector<std::string> employees = {"John Smith","Jaelynn Stuart","Kaley Barajas","Walter Collier","Cale Myers"};

  outputEmployees(employees);

  std::cout << "\n Please enter an employee name to delete: ";
  std::getline(std::cin,name_to_del);

  if (find_employee(employees,name_to_del) == -1){
    std::cout << "\n Employee not found";
  }else{
    for(int i = 0; i < employees.size(); i++){
      if(employees[i] == name_to_del){
        employees.erase(employees.cbegin()+i);
        std::cout << "\n Employee, "<< name_to_del << ", Removed from list. \n";
      }
    }
  }
  
  outputEmployees(employees);
}