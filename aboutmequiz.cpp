#include <iostream>
using namespace std;

string name;
string age;
string color;
string holiday;
string food;
string animal;
string country;
string movie;

int main()
{
    cout << "Input your name:\n";
    getline (cin, name);
    cout << "How old are you?\n";
    getline (cin, age);
    cout << "What is your favorite color?\n";
    getline(cin, color);
    cout << "What is your favorite holiday?\n";
    getline (cin, holiday);
    cout << "What is your favorite food?\n";
    getline (cin, food);
    cout << "What animal do you like?\n";
    getline (cin, animal);
    cout << "What country would you like to visit?\n";
    getline (cin, country);
    cout << "What is your favorite movie?\n";
    getline (cin, movie);
    
    cout << "Hello " + name + "." + " You are " + age + " and your favorite color is " + color + "." + " You enjoy " + food + "." + " You would like to own " + animal + "." + " I think you would like to visit " + country + " and you would like to see " + movie + "." + " I bet you are so excited for " + holiday + ".";
    
    return 0;
}
