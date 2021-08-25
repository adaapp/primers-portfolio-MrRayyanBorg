# Primer Portfolio

## Section 1 - Primer Challenges
### Primer 1 - Fahrenheit / Centigrade Conversion
This challenge requires us to allow a user to enter a value before selecting whether to convert it from Fahrenheit to Centigrade or Centigrade to Fahrenheit.  As part of the initial design the conversion algorithms were needed for both calculations. 

#### Problem Breakdown
To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* Tell user to input temperature.
* Verify the temperature is in a suitable format.
* Provide conversion options for the user.
* Allow user to select conversion option.
* Verify the option is in a suitable format.
* Create methods to carry out conversions to/from `Fahrenheit`, `Centigrade`, and `Kelvin`.
* Output result of conversion to user.
 
#### Reflection (as well as issues, challenges & resolutions)
The most problematic part of coding the procedural steps, from the user inputting a temperature, to carrying out the conversion, was the input validation. This same input validation would be spread across all primers which expected an input from the user. The reason for this problem is due to the large variety of inputs a user can make on a given field. In order to combat this potential pitfall, I tried to ensure that all field inputs would generally be matched against a `switch, case:`, i.e. a more readable format for *a bunch of if/elif statements*. For example, using the `switch, case:` method to process the user input option, this allowed me to create use the `default` mechanism, almost acting like an `else` statement - in the sense that if the user input option had not matched any of the cases, it would result in the program defaulting to '*That input was not valid*', saving me a large portion of time overall.

### Primer 2 - Self-service Checkout
In regards to primer 2, I generally didn't have any issues with coding the solution as it was a very simple task, whereby the user is able to input quantities for items as well as the cost of those items. From there it was a simple mathematical algorithm, by multiplying the quantity by the cost of the item and then adding the 5.5% shopping tax to create the total, which is then outputted to the user.

#### Problem Breakdown
* Repeat until user inputs quantity '*0*':
*    Tell user to input item quantity.
*    Tell user to input item cost.
*    Multiply quantity and cost - Add to subtotal
* Add 5.5% shopping tax to subtotal
* Output Total to user

#### Reflection (as well as issues, challenges & resolutions)
My thinking behind hooting the solution was that I would allow users to input as many items as they want until they hit 0 to finish the program and generate that's hopeful theoretically I could have imposed a limit of 10  items however I did not do this as I felt I did not want to come flicked the testing and assessment of my solution so I strictly follow the primary challenge brief.

### Primer 3 - Password Complexity Checker
Primer Challenge 3 tasked us with creating a password complexity checker whereby the program determines the complexity of a password based on its use of numeric alphabetical, numerical, or special characters to determine whether the password inputted was weak, moderate, strong or very strong.

#### Problem Breakdown
* Tell user to input password.
* Run Complexity Check:
      Weak (value: 1) – only numeric or only alphabetic characters
      Moderate (value: 2) – at least 4 characters and is not ‘Weak’, ‘Strong’ or ‘Very Strong’
      Strong (value: 3) – at least 8 characters; including at least 2 numeric and at least 4 alphabetic
      Very Strong (value: 4) – at least 8 characters; including at least 2 numeric, at least 4 alphabetic and 1 special
      Return value
* Cases:
      Value is 1? Return Weak
      Value is 2? Return Moderate
      Value is 3? Return Strong
      Value is 4? Return Very Strong
      Default to '*Invalid Input*'

#### Reflection (as well as issues, challenges & resolutions)
when programming this primer, I decided to take the approach of returning numbers which  are represented as cases within the switch case model, then finally returning strings to the user, resembelling the case their password was assigned to. I had returned the values as numbers - attached to cases - attached to strings, due to the primer brief outlining that it should not return a string as the function may be used with other languages, hence making it easier for other programmers to incorporate my function within their programs or languages.

### Primer 4 - Employee List Removal
The 4th primary challenge was Employee list removal this primer tasked us with displaying a list of employee names and allowing the user to enter an employee Name by which is then removed from the list the program should then display the list of remaining names each name on its own line.

#### Problem Breakdown
When thinking about solving this problem within language like python, which is very high level, it seems relatively easy whereby I would just create an array, then take input from the user, then remove the instance of the input (if it was a match with any of the values of that array). Then a final list output to the user and done. 

#### Reflection (as well as issues, challenges & resolutions)
What made this challenge difficult however, was using C++ since it's more low level and quite foreign to me as I never used it before. However, once understanding the use of vectors, I was able to create an `employees` array and repeat the process I just outlined.

### Primer 5 - Self-service Checkout
Primer 5 gave us the challenge of creating a C++ program which uses external data to permanently hold phone contacts  the program prompts to user for a name or phone number, then provides any matched records to the user.

#### Problem Breakdown
My thinking behind solving this problem was to first have a phone directory to hand, as an external data stream in the form of a CSV (a matter of preference).
Secondly, I would take input from the user for their desired search-term and store this as a variable.
I would then open the CSV as a file object and split the rows based on `','` which allowed me to separate the names from phone numbers.
Then I would begin the process of searching the CSV based on the search-term for this, I have used a while loop to instance that while the end of the dataset hasn't been reached, keep searching through each instance to try and find the search term.
Lastly a simple `if-else` statement whereby if the records are found - Output them to the user. If they are not then inform the use of that no records were found.

#### Reflection (as well as issues, challenges & resolutions)
It was fairly difficult to try and learn how to interact with external files using C plus plus that was definitely a benefiting experience as I have become more confident with using the syntax.

### Primer 6 - Data File Parser
Primer 6 was a datafile paser and it required us to create a program which reads data from a file in a format by which was evenly spaced and included headers such as *initial, lastname* and *salary*.

#### Problem Breakdown
In order to complete this task I worked in steps: 
* I read in the file object being the external data. 
* Separated each instance by `','` allowing me to separate the first name last name and salary.
* I then extracted the initial from the first name being just the first letter (index 0) and also push back the last name and salary which was needed for the final output.
* Created the headings *initial, last* and *salary*, leaving me with the final problem just being the spacing between each of the Rows being outputted.

#### Reflection (as well as issues, challenges & resolutions)
There are many ways I could have formatted the rows so that the spacing was even. The method I chose was to make the spacing the same size as the longest last name, this meant that the salary would start at a set index for every row outputted. Looking back there may have been a way I could have done this more efficiently as I was using the last name, which is dependent upon the data and having a very long last name could result in large spaces or gaps within the final output - not ideal!

### Primer 7 - Sleep Timer

Primus 7 was a very simple program blocking for the execution based on the value inputted in seconds.  This fuction was very useful in the sense that it would be used with other functions as a countdown or timer.

As the subroutine I was using calculated the time using `milliseconds`, I had to ensure that in order for the user to input seconds, a calculation was made to multiply the seconds by `1000` and then inputting those milli-seconds into the subroutine being used, `*i.e.* chrono::milliseconds()`

### Primer 8 - Joining/Detaching Threads
Primer challenge 8 encompasses a joining and detaching of threads. This means that I would have two separate functions timer1 and timer2 for each thread. As well as having different durations, i.e. `5` and `10 seconds`. The goal is to start both threads simultaneously, return the thread starting and then ending after its assigned duration of seconds is complete. All of which being outputted to the user.

I approached this by having two threads and assigning each thread to a unique timer1 and timer2, the first thread starts and ends after timer1 finishes its countdown (`5 Seconds`) the second thread with starts and ends after the timer2 duration of 10 seconds. Pipelining both threads would cause a them to take 15 seconds as the durations would be combined and this is shown to the user. I have commented a section within primer 8 explaining why the output is different to that of the previous output for both part A and Part B.

### Primer 9 - Car Object
Primary challenges 9 represents a call class structures in a way that represents internal properties and public methods these are listed below:
* void set_colour(string) – used to set the car’s colour, e.g., Blue, White, etc.
* string get_colour(void) – returns the car’s colour
* void set_make(string) – used to set the car’s make, e.g., Toyota, Honda, Ford, Kia, etc,
* string get_make(void) – returns the car’s make
* void engine_on(void) – used to turn the car’s engine on
* void engine_off(void) – used to turn the car’s engine off
* void locked(bool) – locks / unlocks the car.
* void status(void) – displays the car’s current status (see example output below)

The purpose of the program is to display the current cost status as well as a menu allowing user interaction with the car for example a user should be able to turn the engine on and off as well as `Lock` and `Unlock` the car.

#### Reflection (as well as issues, challenges & resolutions)
When first designing my solution, I wanted to premise that I was going to use the switch-case method, to take an options from the user as cases and return calls to functions, such as `engine_on()` - to turn the engine on. This seemed like the most efficient way of working as I would have separate functions for each of the features of user interaction. As well as cases to call upon each of these functions I had created. 

The switch case would also default to 'that import was invalid'  to ensure that a user would input a valid option.

### Primer 10 - Area of Shapes (Square, Rectangle, Trapezoid)
Primer challenge 10 was to design an area of claws which provides a single method size which can be differentiated correctly and calculate 3 out of 5 shape types from a list:

* Area of Circle (r)
* Area of Square (a)
* Area of Rectangle (w, l)
* Area of Triangle (b, h)
* Area of Trapezoid (b, h, a)

#### Reflection (as well as issues, challenges & resolutions)
The shaped types I included within my code were, `square`, `rectangle`, and `trapezoid`. I chose these since I could differentiate them by the amount of arguments they each hold being 1, 2, and 3. From there, I had to code in the formula to calculate the area of each of these shapes whilst also ensuring that these were pure functions.

---
## Section 2 - Programming Paradigms
### Programming Paradigms
Simply put, a programming paradigm, for example, procedural, object-oriented, functional, structured, declarative, imperative and event driven can be described as a specific approach used when trying to solve a problem.  Although many programming languages can (and do) support multiple paradigms this discussion will focus more specifically on the possible benefits with examples of the potential differences and similarities of five from the above list.

#### Imperative & Structured Programming
In regards to Imperative Programming, the flow control on this programming paradigm is explicit meaning that stated clearly and in detail as well as commands being indicative of how each step of the algorithm functions.
![image](https://user-images.githubusercontent.com/42804334/130773526-85ac1f35-4161-452d-851a-0dcb204f4a33.png)

Structured programming is a variant of imperatiuve programming, however the control flow is expressed byh nested loops, conditionals, and subroutines. Variables also have a lexical scope, meaning they are generally called from the same code-block they were defined at.
![image](https://user-images.githubusercontent.com/42804334/130773925-82d25d06-7d82-4e74-b674-c0168735c050.png)

#### Declarative Programming
Within this paradigm, the control flow is implicit, meaning it is only stated what the result shouild look like, and not the detail within the function of how to carry the process out.
For example:
![image](https://user-images.githubusercontent.com/42804334/130775542-8583f1e1-fceb-438b-b430-26441aae0414.png)
Within this example, the coder is declaring the processes they want to perform (purple statements), however, doing so, they do not program the function in itself. There is also no use of loops or assingmnets to variables.

#### Event-Driven Programming
The even-driven paradigm works bywhich the flow of the program is defined by events such as user interactions with the program, i.e. `MouseClick`, or `KeyPress`. This paradigm is heavily using within GUIs and other user-centric applications.

Event-Driven programs are generally broken down by which there is an event listener, waiting for a user input to engage with the program. Once an event occurs, there is a call back function which triggers. The call back function depends entirely on the event at hand.
![image](https://user-images.githubusercontent.com/42804334/130776682-67a0f2c9-e0a7-45f4-8dce-97156b2f1f5f.png)

#### Object-oriented Programming (OOP)
Object-oriented programming is a paradigm based on the concept of '*Objects*'. These objects contain data in the form of fields, as well as, code in the form of procedures. These objects allow features such as possessing properties that allow users to interact with them, or accessed to modify data fields with the object itself.

Languages like C++, are called OO languages, however they really just take some elements of OOP, as well as imperative code and merge the two. For example, below we can see the use of `.length` and `toUpper()` methods, rather than using top-level functions. However the `for` and `if` statements are back to being control structures.
![image](https://user-images.githubusercontent.com/42804334/130775333-fc5bac62-f6a0-46bf-b0ed-33ecdb82bf43.png)

#### Functional Programming
This is a programming paradigm whereby programs are constructed by the composition and application of functions. A programmer would create simple functions, as well as more intricate functions (sometimes composed of various simple functions), which are all used in conjunction to produce a result.

Within the functional programming paradigm there are both pure and impure functons, both have different characteristics:
A pure function, is a function which always returns the same result, given the same inputs. These functions have no side effects. For example `multiply(a,b)`.
On the other hand, an impure function will return different values, given the same inputs, i.e. `Random(min, max)`. As the function cannot be replaced with a value, it is deemed as impure.


---
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
Vestibulum vitae semper sem. Duis leo leo, suscipit at felis non, pellentesque varius massa. Sed sit amet orci nibh. Morbi scelerisque faucibus elit, vitae mollis turpis finibus eget. In convallis euismod nunc non imperdiet. Duis ultricies pulvinar lorem, sed molestie nunc porta at. Aenean arcu ante, efficitur nec felis sed, feugiat iaculis turpis. Vestibulum eu elementum diam. Quisque nec tortor auctor, scelerisque ante vitae, fringilla tellus.

Quisque ligula lectus, efficitur quis malesuada sit amet, malesuada sed nibh. In lorem erat, elementum quis tempus nec, rhoncus ac ante. Mauris suscipit massa tempor, pulvinar neque vel, gravida nulla. Donec massa diam, molestie in diam nec, vulputate faucibus ligula. Aliquam erat volutpat. Aliquam sit amet dui ligula. Nullam euismod eros ultrices magna convallis lobortis. Proin convallis placerat tincidunt. Quisque interdum, nisi id egestas luctus, augue libero lacinia urna, sit amet tempus nisl sem nec quam. Vestibulum interdum urna mauris, vel dignissim nisi dignissim egestas. Donec volutpat dictum dui, at egestas sem tristique nec.
