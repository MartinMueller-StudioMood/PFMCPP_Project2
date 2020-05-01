#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
  

Integer / int
Character / char 
Boolean / bool
Floating Point / float
Double Floating Point / double
Valueless or Void / void

![Wide Character / wchar_t.]
 
 
 
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
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'

    int beer = 4;
    int bread = 1;
    int meat = 3;

    char ball = 1;
    char vol = 2;
    char wheel = 4;

    bool rolling = false;
    bool sync = true;
    bool start = false;

    float frequence = 404.457676f;
    float resonance = 123.78987f;
    float modulation = 89.7484f;

    double chorus = 34.9484884;
    double flanger = 89.939090;
    double delayTime = 3.989898989;
    
    
    ignoreUnused(number, beer, bread, meat, ball, vol, wheel, rolling, sync, start, frequence, resonance, modulation, chorus, flanger, delayTime); //passing each variable declared to the ignoreUnused() function

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
 1
 */

bool driveBus(int gas = 0, int stop = 2)
{
    ignoreUnused(gas, stop);
    if (gas < 1)
        return false;
    else
        return true;
}
/*
 2)
 */
void delay(int time = 3, int feedback = 2)
{
    ignoreUnused(time, feedback);
}
/*
 3)
 */
bool renderAudio(double length = 0.0, int bitDepth = 32)
{
    ignoreUnused(length, bitDepth);

    return {};
}
/*
 4)
 */
int phaser(int feedback = 0, int lfoTime = 22)
{
    ignoreUnused(feedback, lfoTime);

    return {};
}
/*
 5)
 */
int eq(int wider = 12, int gain = 2)
{
    ignoreUnused(wider, gain);

    return {};
}
/*
 6)
 */
void compressor(int threshold, int attack)
{
    ignoreUnused(threshold, attack);
}
/*
 7)
 */
int limiter(int threshold = 12, int gain = 2)
{
    ignoreUnused(threshold, gain);
    return {};
}
/*
 8)
 */
bool clipping(int distortion = 15, int gain = 76)
{
    ignoreUnused(distortion, gain);
    return {};
}
/*
 9)
 */
bool stereo(bool mono, int spread = 15)
{
    ignoreUnused(spread, mono);
    return {};
}
/*
 10)
 */
bool running(bool start, bool stop)
{
    ignoreUnused(start, stop);
    return {};
}


int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto busDriving = driveBus(3, 5);

    //2)
    delay(4, 7);
    
    //3)
    auto rendering = renderAudio(5.45, 16);
    
    //4)
    auto phasing = phaser(3, 7);
    //5)
    auto eqing = eq(34, 87);
    //6)
    compressor(2, 3);
    //7)
    auto limiting = limiter(56, 32);
    
    //8)
    auto redZone = clipping(52, 84);
    //9)
    auto stereoImage = stereo(false, 22);
    //10)
    auto run = running(true, false);
    
    ignoreUnused(carRented, busDriving, rendering, phasing, eqing, limiting, redZone, stereoImage, run);

    std::cout << "good to go! :-)" << std::endl;
    return 0;    
}
