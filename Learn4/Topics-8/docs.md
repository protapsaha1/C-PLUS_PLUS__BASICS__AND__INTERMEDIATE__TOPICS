            -----------------topics- 7-----------------
*** if not indicate that the number typeof then all number type is by default double.(e.g.)>>> 
1. float x = 1.11 (its double); not define 
1.1. float x = 1.11f or 1.11F (its float) define
2. long double y = 1.11 (its double); not define
2.2 long double y = 1.11f or 1.11F (its long double) define

            -----------------topics- 8-----------------
*** if we use variable like only int float not declare constants it will mistakely change value any time so if we need any variable whose value not change any time we should use const in first in variable declaration.(e.g.)>>>
1. int x = 1; float x = 1.1F; long double x = 1.1L; etc. this variable value not constants ,it will be change any time to call this variable names;
2. const int x = 1; const float x = 1.1F; const long doube x = 1.1; this variable is constanst value its not change value and if call const variable name second time it will be show problem or say error.  

*** " setw " manipulator from <iomanip> ok now some explain them >>>
setw is a manipulator it set the variable value width .it set value width or you say lenght on output. if you take 3 digit number and you set setw value 5 on run time it will take 2 extra space before the 3 digits. 

*** "Operators precedence" means first rights of operator. (e.g.)>>>
1. (3 * 4) + 35 - 3 there is the precedence is 3 & 4 multiplecation.  
2. (3 + 4) * 35 - 3 there is the precedence is 3 & 4 addition.

*** "Operators Associativity" means after the opearator precedence  the first priority . In associativity count on left to right (refereance by cpp docs.).(e.g.)>>>
1. (( 2 + 3 ) * 3 ) + 4 - 5 there precedence is (2 + 3) then second priority/associativity is ((2 + 3) * 3). repetly fellow this process. 