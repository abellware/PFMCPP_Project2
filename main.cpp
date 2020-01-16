#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 char
 bool
 float
 double
 void
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

  int thingUs = 100;
  ignoreUnused(thingUs);

  char flockSize = 10;
ignoreUnused(flockSize);

  int wingLength = 15;
ignoreUnused(wingLength);

 int beakStrength = 1;
 ignoreUnused(beakStrength);

 char x = 10;
ignoreUnused(x);

   char y = 10;
 ignoreUnused(y);
 
   char z = 10;
 ignoreUnused(z);
 
  bool canFly;
  ignoreUnused(canFly);

  bool canSwim;
ignoreUnused(canSwim);

bool sitsOnEgg;
ignoreUnused(sitsOnEgg);

float numFlocks = 2; FIXME these are floats being initialized with Integers on the right side of the '='.  Please make the right side arg a float.
ignoreUnused(numFlocks);

float waterTemp = -2;  FIXME these are floats being initialized with Integers on the right side of the '='.  Please make the right side arg a float.
ignoreUnused(waterTemp);

float visitingPolarBears = 4; FIXME these are floats being initialized with Integers on the right side of the '='.  Please make the right side arg a float.
ignoreUnused(visitingPolarBears);

double penguinEnnui = 12345678910; FIXME these are doubles being initialized with Integers on the right side of the '='.  Please make the right side arg a double.
ignoreUnused(penguinEnnui);

double penguinIntuition = 1112131415; FIXME these are doubles being initialized with Integers on the right side of the '='.  Please make the right side arg a double.
ignoreUnused(penguinIntuition);

double penguinInspiration = 161514131211; FIXME these are doubles being initialized with Integers on the right side of the '='.  Please make the right side arg a double.
ignoreUnused(penguinInspiration);

FIXME try passing all of your variables to ignoreUnused all at once.  See line 122 for an example of doing this (that function has 2 arguments)
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
 FIXME Clean up the indentation for the WHOLE thing.  See the style guide in the Readme.MD in the project if you need a reference to the expected style.
 bool insertDelay(int time, int pitch = 0)
 {
ignoreUnused(time, pitch);
return {};
}

/*
 2)
 */
 double delayVolume(double volume, double mix = 50)
 {
ignoreUnused(volume, mix);
return {};
}

/*
 3)
 */
 char distortionType(int tube, int tape = 1)
 {
ignoreUnused(tube, tape);
return {};
}

/*
 4)
 */
 bool skipDelay(int ghost, int reverseDelay = 0)
 {
ignoreUnused(ghost, reverseDelay);
return {};
}

/*
 5)
 */
double mix(double amount, double gain = 100)
 {
ignoreUnused(amount, gain);
return {};
}


/*
 6)
 */
float ancient(double wow, double flutter = 0)
 {
ignoreUnused(wow, flutter);
return {};
}

/*
 7)
 */
bool tempoFromHost(float bpm)
 {
ignoreUnused(bpm);
return {};
}
/*
 8)
 */

bool tapDelay(double clock, float tap = 0)
 {
ignoreUnused(clock, tap);
return {};
}

/*
 9)
 */
bool insertEQ(float frequency, float bandwidth = 10)
 {
ignoreUnused(frequency, bandwidth);
return {};
}
/*
 10)
 */
bool delayRepeats(float duration, float curve = 1)
 {
ignoreUnused(duration, curve);
return {};
}
int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    insertDelay(40, 2);
    //2)
    delayVolume(50, 75);
    //3)
    distortionType(13, 21);
    //4)
    skipDelay(1, 1);
    //5)
    mix(42, -3);
    //6)
    ancient(4323, 8);
    //7)
    tempoFromHost(121);
    //8)
    tapDelay(72, 4);
    //9)
    insertEQ(100121, 29);
    //10)
    delayRepeats(1, 6);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
