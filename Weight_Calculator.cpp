

#include <iostream>
using namespace std; 

void compute_weight(int temp_value) {
    // Sets a temporary value for weight count that can be updated later
    int weight_count = 0;
    // Array storing all of the pre=set weight values that are used to compute the user entered weight 
    int weights[5] = { 125, 75, 42, 15, 1 }; 
    // Checking for an inputed weight value that is greater than 0
    if (temp_value > 0) { 
        // Runs the for loop 5 times, once for each weight, divides the input value by weight and displays the result 
        for (int i = 0; i < 5; i++) { 
            weight_count = temp_value / weights[i]; 
            cout << "The amount of " << weights[i] << "lbs that goes into " << temp_value << " is " << weight_count << "\n";
            temp_value = temp_value - (weight_count * weights[i]);
            // The weight_count of each value when temp_value was 2048 were: 125 = 16, 75 = 0, 42 = 1, 15 = 0, 1 = 6
        }
    }
    else { 
        // Displays an alternate message if the if statement critera was not met
        cout << "Invalid weight entry please enter a weight greater than 0";
    }
}
int main() {
    // Sets temp_value as a variable
    int temp_value; 
    cout << "Please enter a weight value that you would like to determine in terms of 125lbs, 75lbs, 42lbs, 15lbs, 1lbs" << "\n";
    // Takes a value from a user input to compute
    cin >> temp_value; 
    // Sends the input value to the function
    compute_weight(temp_value); 
}

