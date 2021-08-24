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


#### Reflection (as well as issues, challenges & resolutions)

### Primer 7 - Self-service Checkout


#### Reflection (as well as issues, challenges & resolutions)

### Primer 8 - Self-service Checkout


#### Reflection (as well as issues, challenges & resolutions)

### Primer 9 - Self-service Checkout


#### Reflection (as well as issues, challenges & resolutions)

### Primer 10 - Self-service Checkout


#### Reflection (as well as issues, challenges & resolutions)

### Primer N - Self-service Checkout


#### Reflection (as well as issues, challenges & resolutions)

---
## Section 2 - Programming Paradigms
### Programming Paradigms
Simply put, a programming paradigm, for example, procedural, object-oriented, functional, structured, declarative, imperative and event driven can be described as a specific approach used when trying to solve a problem.  Although many programming languages can (and do) support multiple paradigms this discussion will focus more specifically on the possible benefits with examples of the potential differences and similarities of five from the above list. These are ...

---
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
Vestibulum vitae semper sem. Duis leo leo, suscipit at felis non, pellentesque varius massa. Sed sit amet orci nibh. Morbi scelerisque faucibus elit, vitae mollis turpis finibus eget. In convallis euismod nunc non imperdiet. Duis ultricies pulvinar lorem, sed molestie nunc porta at. Aenean arcu ante, efficitur nec felis sed, feugiat iaculis turpis. Vestibulum eu elementum diam. Quisque nec tortor auctor, scelerisque ante vitae, fringilla tellus.

Quisque ligula lectus, efficitur quis malesuada sit amet, malesuada sed nibh. In lorem erat, elementum quis tempus nec, rhoncus ac ante. Mauris suscipit massa tempor, pulvinar neque vel, gravida nulla. Donec massa diam, molestie in diam nec, vulputate faucibus ligula. Aliquam erat volutpat. Aliquam sit amet dui ligula. Nullam euismod eros ultrices magna convallis lobortis. Proin convallis placerat tincidunt. Quisque interdum, nisi id egestas luctus, augue libero lacinia urna, sit amet tempus nisl sem nec quam. Vestibulum interdum urna mauris, vel dignissim nisi dignissim egestas. Donec volutpat dictum dui, at egestas sem tristique nec.
