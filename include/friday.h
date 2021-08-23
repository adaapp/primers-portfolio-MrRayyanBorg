class Car {
  //private variables and methods
  private:
    std::string car_colour;
    std::string car_make;

    //return 'On' or 'Off' based on status
    bool engine_status;
    std::string engine_shell() { 
      return engine_status ? "On" : "Off"; 
    }

    //return 'Locked' or 'Unlocked' based on status
    bool locked_status;
    std::string locked_shell() { 
      return locked_status ? "Locked" : "Unlocked"; 
    }

    //Toggle Engine status
    void engine_switch(bool state) {

      if (engine_status == state) {
        std::cout << "Sorry, the engine is already " << engine_shell() << "\n";
        return;
      }
      engine_status = state;
      std::cout << "Turning the engine " << engine_shell() << "\n";
    }
  
  //public variables and methods
  public:

    Car(std::string initial_colour, std::string initial_make) {
      car_colour = initial_colour;
      car_make = initial_make;
      engine_status = false;
      locked_status = true;
    }   
    
    //method for setting new make
    void set_make(std::string value) {
      car_make = value; 
    }

    std::string get_make(void) {
      return car_make; 
    }

    //method for setting new colour
    void set_colour(std::string value) { 
      car_colour = value; 
    }
    
    std::string get_colour(void) {
      return car_colour;
    }

    //creating methods for separate engine modes
    void engine_on(void) { 
    engine_switch(true); 
    }

    void engine_off(void) {
      engine_switch(false); 
    }

    //toggle car lock
    void locked(bool state) {
      if (locked_status == state) {
        std::cout << "Sorry, the car is already " << locked_shell() << "\n";
        return;
      }
      locked_status = state;
      std::cout << "The car has been " << locked_shell() << "\n";
    }

    //outputs the status of the car
    void status(void) { 
      std::cout << "Car Status: ";
      std::cout << "colour: " << car_colour;
      std::cout << ", make: " << car_make;
      std::cout << ", engine: " << engine_shell();
      std::cout << ", " << locked_shell() << "\n";
    }
};

//menu for the car
void car_menu(Car base_car) {
  char option = '1';
  std::string user_inp;

  //while option is not 'finish'
  while (option != '0') {
    base_car.status();
    std::cout << "1. Turn Engine On\n";
    std::cout << "2. Turn Engine Off\n";
    std::cout << "3. Lock Car\n";
    std::cout << "4. Unlock Car\n";

    //recieve option from the User
    std::cout << "Please select an option (or 0 to finish): ";
    getline(std::cin, user_inp);
    option = user_inp[0];

    //cases for each menu option
    switch (option) {
      case '0':
        return;
      case '1':
        base_car.engine_on();
        break;
      case '2':
        base_car.engine_off();
        break;
      case '3':
        base_car.locked(true);
        break;
      case '4':
        base_car.locked(false);
        break;
      //defaults to Invalid input - if no input given.
      default:
        std::cout << "That input was invalid\n";
    }
  }
}

void carClass(void) {
	Car base_car("White", "Tesla");
  car_menu(base_car);
}


class AreaOf {
  
  public:
  AreaOf(){
    std::cout << "\n Object Created";
  }

  //Area of a Square
  float size(float a) {return a * a;}  

  //Area of a Rectangle
  float size(float w, float l) {return w * l;}

  //Area of a Trapezoid
  float size(float b,float h, float a){return (((a+b)/2)*h);}

  ~AreaOf(){
    std::cout << "\nObject Destroyed";
  }

};


void areaOf(void) {
  AreaOf area;
  std::cout<<"\n\nArea of Circle (r = 4.5): "<<area.size(4.5)<<std::endl;
  std::cout<<"\nArea of Rectangle (w = 4,l = 5.9): "<<area.size(4,5.9)<<std::endl;
  std::cout<<"\nAera of Trapezoid (a = 14,b = 7.5,h = 6): "<<area.size(14,7.5,6)<<std::endl;
}
