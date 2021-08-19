void phoneDirectory(void) {
  int line_number = 0;
  std::vector<std::string> comparison;
  std::string data;
  std::string string;
  std::string line;
  std::ifstream fileObject;
  
  //Prompt for search term
	std::cout << "Search Term: ";  
  std::cin >> string;

  //Open Phone_Directory.csv
  fileObject.open("Phone_Directory.csv");    

  while (getline(fileObject, line)) {
    if (line.find(string) != std::string::npos) {    
      std::stringstream sso(line);
      //split string based on comma
      while (std::getline(sso, data, ',')) {        
        comparison.push_back(data);      
      }
    }   
    line_number ++;
  }

  std::cout << "Searching "<< line_number << " records … \n\n";

  if (comparison.empty()) {
    std::cout << "No records found." << "\n";
  } else {
    std::cout << "Record found: " << "\n";
    for (int i = 0; i < (comparison.size()- 1); i += 2) {  
    std::cout << comparison.at(i) << ", T: " << comparison.at(i + 1) << "\n";
    }
  }  

  //Close Phone_Directory.csv
  fileObject.close();
}

void set_header(void){
  std::cout << "Initial " << std::setw(14) << "Last Name" << std::setw(16) << "Salary\n";
  std::cout << "-------"<< std::setw(16)<< "----------"<< std::setw(16)<< "-------\n";
}

void output_data(std::vector<char> first_name_letter,int name_length,std::vector<std::string> last_name,std::vector<int> salary){
  for(int i = 0; i < first_name_letter.size(); i++){
    std::cout << "\n" << first_name_letter[i] << "." <<"\t\t\t"<<std::setw(name_length) << last_name[i] << std::setw(12)<<"£"<<salary[i];
  }
}

void dataFileParser(void) {

  std::vector<char> first_name_letter;
  std::string first_name;
  std::vector<std::string> last_name;
  std::string last_name_temp;

  int salary_temp;
  std::vector<int> salary;

  int name_length = 0;

  std::string line;
  std::ifstream fileObject;

  //opens file
  fileObject.open("Employee_Salaries.csv");
  while(!fileObject.eof()){

    getline(fileObject,line);
    std::stringstream iss(line);

    std::getline(iss, first_name, ',');
    std::getline(iss, last_name_temp, ',');
    
    first_name_letter.push_back(first_name[0]);
    last_name.push_back(last_name_temp);

    iss >> salary_temp;
    salary.push_back(salary_temp);

  }
  //closes file
  fileObject.close();

  //sets spacing to length of longest lastname
  for(int i = 0; i < last_name.size(); i++){
    int size_of_lastname = 0;
    size_of_lastname = last_name[i].length();
    if(size_of_lastname > name_length){
      name_length = size_of_lastname;
    }
  }

  //outputs column names
  set_header();

  //outputs data under column names
  output_data(first_name_letter,name_length,last_name,salary);
  
}
