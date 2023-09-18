                        ----------------------- topics -9 ------------------------------
*** "C++ control Structures" is three types. This three is basics control structure. 
1.Sequence Structure
2.Selection Structure
3.Loop Structure

*** Sequence Structure >>
FIRST ENTRY ON THE CODE STRUCTURE
THEN ACTION 1, ACTION 2, ACTION 3 
LIKE SEQUENCLY
AND LAST EXIT THE CODE

*** Selection Structure >>
FIRST ENTRY ON THE CODE STRUCTURE
THEN CREATE CONDITION 
IF CONDITION IS TRUE GIVE THE VALUE OR
IF CONDITION IS FALSE BLOCK THE VALUE
AFTER FULFILL THE CONDITION EXIT IN THE CODE
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
selection control structure: if else-if else ladder
#includes <iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if (age < 9)
    {
        cout << "you are under age : " << endl;
    }
    else if (age < 1)
    {
        cout << "you are now so little " << endl;
    }
    else if (age > 10 && age < 19)
    {
        cout << "i thinking about you" << endl;
    }
    else
    {
        cout << "ohh you are come to out " << endl;
    }
    return 0;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
selection control structure : switch case statements
#includes <iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    string oi = "you ";
    string al = "allowed";
    string nal = "not allowed";
    switch (age)
    {
    case 18:
        cout << "hey bro " << oi + al << endl;
        break;
    case 17:
        cout << "hey bro " << oi + nal << endl;
        break;
    default:
        cout << "sorry bro its close" << endl;
        break;
    }
    return 0;
}

Lets talk about the switch case: 
**Switch expression**: In switch its take a **conditional expression** here expression is **age**. Expression is that what you want in output. Expression check every condition and if any one condition is match with expression its show the output.

**Case**: Case is the condition who checked by expression. you can relate with if else but not really. if case condition and expression is true it out in the switch.

**break**: In switch structure break is unforgetable word. With out break it like all are my (Its fun if you try that). if expression and case is true in times **break** pass out of the switch or if false it pass next case.

**default**: If anyone case is not true the output will be deafult value.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*** Loop Structure >>
FIRST ENTRY ON THE CODE STRUCTURE,
CHECK A CONDITION,
IF CONDITION IS TRUE GO ON ACTION1, 
IN ACTION1 CREATE A LOOP NATURAL NUMBER,
TAKE A VARIABLE i = 0 ,
IF i <= 10000 ADD 1: (i = 1) ,
THIS LOOP IS CONTINUE UNTILL THE i EQUAL TO AND LESS THAN 10000 ;
OR IF CONDITION IS FALSE THE LOOP INSTANTLY OFF AND ,
EXIT THE LOOP GO ON ACTION2 ,
THEN EXIT IN THE CODE .











###Bangla

----------------------- বিষয় -9 ------------------------ ------
*** "C++ কন্ট্রোল স্ট্রাকচার" তিন প্রকার। এই তিনটি মৌলিক নিয়ন্ত্রণ কাঠামো.
1. সিকোয়েন্স স্ট্রাকচার
2.নির্বাচন কাঠামো
3. লুপ স্ট্রাকচার

*** সিকোয়েন্স স্ট্রাকচার >>
কোড স্ট্রাকচারে প্রথম এন্ট্রি
তারপর অ্যাকশন 1, অ্যাকশন 2, অ্যাকশন 3
লাইক সিকোয়েন্সি
এবং কোডটি শেষ করে প্রস্থান করুন

*** নির্বাচন কাঠামো >>
কোড স্ট্রাকচারে প্রথম এন্ট্রি
তারপর শর্ত তৈরি করুন
শর্ত সত্য হলে মান দিন বা
যদি শর্ত মিথ্যা হয় মান ব্লক করুন
শর্ত পূরণ করার পরে কোডে প্রস্থান করুন
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
নির্বাচন নিয়ন্ত্রণ কাঠামো: যদি অন্যথায়-যদি অন্যথায় মই
# <iostream> অন্তর্ভুক্ত
নামস্থান std ব্যবহার করে;
int main(){
     int বয়স;
     cin >> বয়স;
     যদি (বয়স <9)
     {
         cout << "আপনার বয়স কম : " << endl;
     }
     অন্যথায় যদি (বয়স <1)
     {
         cout << "তুমি এখন অনেক ছোট" << endl;
     }
     অন্যথায় যদি (বয়স > 10 এবং বয়স <19)
     {
         cout << "আমি তোমাকে নিয়ে ভাবছি" << endl;
     }
     অন্য
     {
         cout << "ওহ তুমি বেরিয়ে এলে" << endl;
     }
     রিটার্ন 0;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
নির্বাচন নিয়ন্ত্রণ কাঠামো: কেস বিবৃতি পরিবর্তন করুন
# <iostream> অন্তর্ভুক্ত
নামস্থান std ব্যবহার করে;
int main(){
     int বয়স;
     cin >> বয়স;
     স্ট্রিং oi = "আপনি";
     স্ট্রিং al = "অনুমতিপ্রাপ্ত";
     স্ট্রিং nal = "অনুমতি নেই";
     পরিবর্তন (বয়স)
     {
     কেস 18:
         cout << "আরে ভাই" << oi + al << endl;
         বিরতি
     কেস 17:
         cout << "আরে ভাই" << oi + nal << endl;
         বিরতি
     ডিফল্ট:
         cout << "sorry bro it close" << endl;
         বিরতি
     }
     রিটার্ন 0;
}

সুইচ কেস সম্পর্কে কথা বলা যাক:
**স্যুইচ এক্সপ্রেশন**: সুইচে এটি একটি **শর্তাধীন এক্সপ্রেশন** নেয় এখানে এক্সপ্রেশন হল **বয়স**। অভিব্যক্তি হল যে আপনি আউটপুটে যা চান। এক্সপ্রেশন প্রতিটি শর্ত চেক করুন এবং যদি কোনো একটি শর্ত অভিব্যক্তির সাথে মেলে তবে তার আউটপুট দেখায়।

**কেস**: কেস হল সেই শর্ত যা এক্সপ্রেশন দ্বারা পরীক্ষা করে। আপনি যদি অন্যের সাথে সম্পর্ক করতে পারেন তবে সত্যিই না। যদি কেস কন্ডিশন এবং এক্সপ্রেশনটি সত্য হয় তবে সুইচটিতে এটি আউট করুন।

**ব্রেক**: সুইচ স্ট্রাকচারে ব্রেক একটি অবিস্মরণীয় শব্দ। আউট বিরতি ছাড়া এটা সব আমার (এটা মজা যদি আপনি চেষ্টা করেন). যদি এক্সপ্রেশন এবং কেস সত্য হয় **ব্রেক** সুইচ থেকে পাস আউট বা মিথ্যা হলে এটি পরবর্তী ক্ষেত্রে পাস।

**ডিফল্ট**: কারো ক্ষেত্রে সত্য না হলে আউটপুটটি ডিফল্ট মান হবে।

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*** লুপ স্ট্রাকচার >>
কোড স্ট্রাকচারে প্রথম এন্ট্রি,
একটি শর্ত চেক করুন,
যদি শর্ত সত্য হয় অ্যাকশন 1 এ যান,
অ্যাকশন 1-এ একটি লুপ ন্যাচারাল নম্বর তৈরি করুন,
একটি পরিবর্তনশীল নিন i = 0 ,
IF i <= 10000 ADD 1: (i = 1) ,
এই লুপটি 10000 এর সমান এবং তার কম না হওয়া পর্যন্ত চলতে থাকবে;
অথবা কন্ডিশন ভুল হলে তাৎক্ষণিকভাবে লুপ বন্ধ করুন এবং,
লুপ থেকে প্রস্থান করুন অ্যাকশন 2 এ যান,
তারপর কোড থেকে প্রস্থান করুন।