# compassBearing

Write an application for a surveyor that converts an input compass heading to a conventional bearing.

The compass headings are measured in degrees clockwise from the North.

[Compass Rose](https://www.coastalnavigation.com/samples/sec_3/3_grfx/compasscard.jpg)

A conventional bearing has three components: the direction you face (either North or South), an angle (in the range 0 through 90 degrees inclusive) measured from the North-South meridian and the direction you turn before walking (either East or West).

For example, for a compass heading of 119.0 degrees, you would face South (180 degrees) and then turn 61.0 degrees East before walking. Hence the bearing is South 61.0 degrees East, since 180.0 – 119.0 = 61.0.

Please see the following for a in-depth explanation: [Conventional Bearing](https://www.mathsteacher.com.au/year7/ch08_angles/07_bear/bearing.htm)

Write a modular program to solve the problem. You must have at least two called functions (main does not count as a called function).

One of these functions will be named getBearing. This function will take four arguments in order: 1) a double that is a valid compass heading, 2) a string that will be filled by your function with the direction to face, 3) a double that will be filled by your function with the angle portion of the bearing, and 4) a string that will be filled by your function with the direction to walk. The return type of this function is void. Hint: any argument that will be filled by your function should be pass-by-reference.

For auto-grading purposes the results for the boundary conditions must be:

A compass heading of 0 degrees <=> North 0.0 degrees East
A compass heading of 90.0 degrees <=> North 90.0 degrees East
A compass heading of 180.0 degrees <=> South 0.0 degrees East
A compass heading of 270.0 degrees <=> North 90.0 degrees West
A compass heading of 360 degrees <=> North 0.0 degrees West
For illustration see Example 11 under Direction in the document [Conventional Bearing](https://www.mathsteacher.com.au/year7/ch08_angles/07_bear/bearing.htm)

Your program should display all real numbers rounded to exactly one digit to the right of the decimal point.

##Example Program Output:
`Enter a compass heading [0-360 degrees]: 192.5
South 12.5 degrees West`
Should the user enter a compass heading outside the range 0 through 360, your program should allow the user to re-enter after displaying the following error message followed by a newline.

`Error invalid heading entered.`

##Additional Requirements
Do not forget that a preceding comment is required above the definition of all called functions.
