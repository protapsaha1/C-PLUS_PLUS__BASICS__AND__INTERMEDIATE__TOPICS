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

### Bangla

                                ------------------বিষয়- 7----------------
*** যদি ইঙ্গিত না করে যে সংখ্যার প্রকার তাহলে সমস্ত সংখ্যার ধরন ডিফল্টরূপে দ্বিগুণ।(যেমন)>>>
1. float x = 1.11 (এর দ্বিগুণ); সংজ্ঞায়িত না
1.1। float x = 1.11f বা 1.11F (এর ফ্লোট) সংজ্ঞায়িত 
1. দীর্ঘ দ্বিগুণ y = 1.11 (এর দ্বিগুণ); সংজ্ঞায়িত না
2.2 দীর্ঘ দ্বিগুণ y = 1.11f বা 1.11F (এর দীর্ঘ দ্বিগুণ) সংজ্ঞায়িত 

                                ------------------বিষয়- ৮----------------
*** যদি আমরা ভেরিয়েবল ব্যবহার করি যেমন শুধুমাত্র int float ধ্রুবক ঘোষণা না করে এটি ভুলবশত মান পরিবর্তন করবে তাই যদি আমাদের এমন কোনো ভেরিয়েবলের প্রয়োজন হয় যার মান কোনো সময় পরিবর্তন না হয় তাহলে আমাদের প্রথমে পরিবর্তনশীল ঘোষণায় const ব্যবহার করা উচিত।(যেমন)>>>
1. int x = 1; float x = 1.1F; লম্বা ডবল x = 1.1L; ইত্যাদি। এই ভেরিয়েবলের মানটি ধ্রুবক নয়, এই ভেরিয়েবলের নামগুলিকে কল করার জন্য এটি যেকোনো সময় পরিবর্তন হবে;
2. const int x = 1; const float x = 1.1F; const long doube x = 1.1; এই ভেরিয়েবলটি কনস্ট্যান্ট ভ্যালু এটির মান পরিবর্তন হয় না এবং যদি কনস্ট ভেরিয়েবলের নামটি দ্বিতীয়বার কল করা হয় তবে এটি দেখাতে সমস্যা হবে বা ত্রুটি বলবে।

*** <iomanip> থেকে "setw" ম্যানিপুলেটর ঠিক আছে এখন কিছু তাদের ব্যাখ্যা করুন >>>
setw একটি ম্যানিপুলেটর এটি পরিবর্তনশীল মান প্রস্থ সেট করে। এটি মান প্রস্থ নির্ধারণ করে বা আপনি আউটপুটে দৈর্ঘ্য বলুন। আপনি যদি 3 ডিজিটের নম্বর নেন এবং আপনি রান টাইমে সেটউ মান 5 সেট করেন তবে 3 সংখ্যার আগে 2 অতিরিক্ত স্থান লাগবে।

*** "অপারেটর অগ্রাধিকার" মানে অপারেটরের প্রথম অধিকার। (যেমন)>>>
1. (3 * 4) + 35 - 3 সেখানে অগ্রাধিকার হল 3 এবং 4 মাল্টিকালেশন।
2. (3 + 4) * 35 - 3 অগ্রাধিকার আছে 3 এবং 4 যোগ।

*** "অপারেটর অ্যাসোসিয়েটিভিটি" মানে অপারেটরের অগ্রাধিকারের পরে প্রথম অগ্রাধিকার। সহযোগীতায় বাম থেকে ডানে গণনা (cpp ডক্স দ্বারা রেফারেন্স)।(যেমন)>>>
১। (( 2 + 3 ) * 3 ) + 4 - 5 সেখানে অগ্রাধিকার (2 + 3) তারপর দ্বিতীয় অগ্রাধিকার/ সহযোগীতা হল ((2 + 3) * 3)। বারবার এই প্রক্রিয়ার সহকর্মী।
