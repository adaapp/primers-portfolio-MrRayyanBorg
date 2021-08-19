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


void dataFileParser(void) {
	std::cout << " - dataFileParser: not yet implemented\n\n";
}