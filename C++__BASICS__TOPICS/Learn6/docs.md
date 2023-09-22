-----------------------topics 11-------------------------------
*** Break statement: 
The break statement ends execution of the nearest enclosing loop or conditional statement in which it appears. Control passes to the statement that follows the end of the statement, if any.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
output: 2
    for(int i = 1;i <= 10; i++ )
    {
        if (i == 2)
         {
             cout << i << endl;
             break;
         };
    };
In this case "break" is doesnt work ,Here only waste to use "break".Because when loop is start read the "if" condition when complier  see that "i" equal "2" ,so compiler only print "2". Here no work for "break". 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
output: 1
    for(int i = 1;i <= 10; i++ )
    {
        if (i == 2)
        {
            cout << "i am late ";
            break;
        }
        cout << i << endl;
    };
In this case loop first execute outside elements of loop then compiler go "if" condition ,And compiler will see "i" equal "2" and "if" statement is "break". So, "break" wiil close the loop when "i" equal "2". And wherease " cout" using after the "if" statement and outside of "if" statement so compiler first print "i" value "1" then go the "if" statement and the "break" the loop.For this reason output is "1". 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
output: 1,2
    for(int i = 1;i <= 10; i++ )
    {
        cout << i << endl;
        if (i == 2)
        {
            break;
        };
    };
In this case loop first execute outside elements of loop then compiler go "if" condition ,And compiler will see "i" equal "2" and "if" statement is "break". So, "break" wiil close the loop when "i" equal "2". And wherease " cout" using before the "if" statement and outside of "if" statement so compiler first print "i" value "1 ,2" then go the "if" statement and the "break" will close the loop.For this reason output is "1,2".  
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*** Continue statement: 
C++ continue statement is a loop control statement that forces the program control to execute the next iteration of the loop. As a result, the code inside the loop following the continue statement will be skipped and the next iteration of the loop will begin.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
output: 2,3,4,5,6,7,8,9,10
    for (int i = 1; i <= 10; i++)
    {
        if (i == 1)
        {
            continue;
        }
        cout << i << endl;
    };
When we use "continue" statement in loop the compiler will skip the true conditional value and exicute other values.In  here the loop "if" condition is "i" equal "1" and "if" statement is "contunue" for this cause compiler skip the value "i" equal "1" and continued the loop.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-----------------------topics 12-------------------------------
Pointer:
What is pointers ?
pointer is a data-types which holds address of others data-types.












### Bangla
-----------------------topics 11-------------------------------
*** ব্রেক স্টেটমেন্ট:
বিরতি বিবৃতিটি নিকটতম এনক্লোসিং লুপ বা শর্তসাপেক্ষ বিবৃতি যেখানে এটি প্রদর্শিত হয় তার সম্পাদন শেষ করে। কন্ট্রোল পাস সেই স্টেটমেন্টের কাছে যায় যা স্টেটমেন্টের শেষে অনুসরণ করে, যদি থাকে।
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
আউটপুট: 2
     for(int i = 1;i <= 10; i++ )
     {
         যদি (i == 2)
          {
              cout << i << endl;
              বিরতি
          };
     };
এই ক্ষেত্রে "ব্রেক" কাজ করে না, এখানে শুধুমাত্র "ব্রেক" ব্যবহার করা নষ্ট হয়। কারণ লুপ শুরু হলে "if" কন্ডিশন পড়ুন যখন complier দেখতে পাবে যে "i" সমান "2" তাই কম্পাইলার শুধুমাত্র "2" প্রিন্ট করবে। এখানে "ব্রেক" এর জন্য কোন কাজ নেই।
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
আউটপুট: 1
     for(int i = 1;i <= 10; i++ )
     {
         যদি (i == 2)
         {
             cout << "আমি দেরি করছি";
             বিরতি
         }
         cout << i << endl;
     };
এই ক্ষেত্রে লুপ প্রথমে লুপের বাইরের উপাদানগুলি চালান তারপর কম্পাইলার "if" কন্ডিশনে যান এবং কম্পাইলার দেখতে পাবে "i" সমান "2" এবং "if" স্টেটমেন্ট "break"। সুতরাং, "ব্রেক" লুপ বন্ধ করবে যখন "i" সমান "2"। এবং যেখানে "cout" ব্যবহার করে "if" স্টেটমেন্টের পরে এবং "if" স্টেটমেন্টের বাইরে তাই কম্পাইলার প্রথমে "i" এর মান "1" প্রিন্ট করে তারপর "if" স্টেটমেন্টে যান এবং লুপটি "ব্রেক" করুন। এই কারণে আউটপুট "1"।
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
আউটপুট: 1,2
     for(int i = 1;i <= 10; i++ )
     {
         cout << i << endl;
         যদি (i == 2)
         {
             বিরতি
         };
     };
এই ক্ষেত্রে লুপ প্রথমে লুপের বাইরের উপাদানগুলি চালান তারপর কম্পাইলার "if" কন্ডিশনে যান এবং কম্পাইলার দেখতে পাবে "i" সমান "2" এবং "if" স্টেটমেন্ট "break"। সুতরাং, "ব্রেক" লুপ বন্ধ করবে যখন "i" সমান "2"। এবং যেখানে "cout" ব্যবহার করে "if" স্টেটমেন্টের আগে এবং "if" স্টেটমেন্টের বাইরে তাই কম্পাইলার প্রথমে "i" এর মান "1 ,2" প্রিন্ট করে তারপর "if" স্টেটমেন্টে যান এবং "break" লুপ বন্ধ করে দেবে। এই কারণে আউটপুট "1,2"।
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*** অবিরত বিবৃতি:
C++ কন্টিনিউ স্টেটমেন্ট হল একটি লুপ কন্ট্রোল স্টেটমেন্ট যা প্রোগ্রাম কন্ট্রোলকে লুপের পরবর্তী পুনরাবৃত্তি চালাতে বাধ্য করে। ফলস্বরূপ, কন্টিনিউ স্টেটমেন্ট অনুসরণ করে লুপের ভিতরের কোডটি এড়িয়ে যাবে এবং লুপের পরবর্তী পুনরাবৃত্তি শুরু হবে।
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
আউটপুট: 2,3,4,5,6,7,8,9,10
     জন্য (int i = 1; i <= 10; i++)
     {
         যদি (i == 1)
         {
             চালিয়ে যাওয়া
         }
         cout << i << endl;
     };
যখন আমরা লুপে "continue" স্টেটমেন্ট ব্যবহার করি তখন কম্পাইলার সত্যিকারের কন্ডিশনাল ভ্যালু এড়িয়ে যাবে এবং অন্যান্য মানগুলিকে এক্সিকিউট করবে। এখানে লুপ "if" কন্ডিশন "i" সমান "1" এবং "if" স্টেটমেন্ট এই কারণে "contunue" হয়। কম্পাইলার "i" সমান "1" মানটি এড়িয়ে যায় এবং লুপটি চালিয়ে যায়।
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~