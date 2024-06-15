# Leap Year Calculation
One year is 365 days and 6 hours because of these 6 hours, every 4 years, a year has 366 days. This project show *leap years*.
## How does it work?
First and last step: run the code.

![image](https://github.com/isleyen/leapYearCalculation/assets/136992260/6e009e56-2000-4f1b-b3d9-547d74cf34ad)
![image](https://github.com/isleyen/leapYearCalculation/assets/136992260/03636174-6a0a-43f0-af9b-07262af42c10)

Now, we see leap years on the screen.

## What is program code?
We use the <time.h> library

![image](https://github.com/isleyen/leapYearCalculation/assets/136992260/36065302-8237-4df9-960a-66d260a2b8dc)

+ *time(0)*: assigns the current time in seconds to the "now" variable.
+ __tm* ltm = localtime(&now)__ : Converts the time value in the "now" variable to calendar time.
+ *int year = 1900 + ltm->tm_year*: The value we found is valid since 1900 so we add 1900.
![image](https://github.com/isleyen/leapYearCalculation/assets/136992260/4a80176e-3673-440a-8251-ff0760fdac6b)

> [!WARNING]
> The code uses the *Gregorian calendar* to calculate leap years. Other calendar systems are not supported.

For loop where we calculate leap years in the next 1000 years.

![image](https://github.com/isleyen/leapYearCalculation/assets/136992260/75c41b52-1da8-4fd4-91b0-31bc1d436673)

For loop where we calculate the leap years from year 0 to the present.

![image](https://github.com/isleyen/leapYearCalculation/assets/136992260/2f4efc54-1a6c-4c65-95d2-9fcaead7a332)

## How do you use this program?

- [x] Open a c++ file in code editor.

- [x] Transfer the code in the "main.cpp" file.

- [x] Finally, run the code :)


Target File: main.cpp
 


