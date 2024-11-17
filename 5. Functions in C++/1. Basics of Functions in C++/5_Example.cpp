
// Program in C++ to demonstrate the use of functions in C++

#include<iostream> 
#include<conio.h>  

using namespace std;  

// Function to take input from the user
int xyz(int input) {
    cout << "Enter the input please ( Taking input inside function ) : ";  // Prompt the user for input
    cin >> input;  // Read the input from the user
    return input;  // Return the input value
}

int main() {
    int output = 0;  // Initialize output variable to 0
	// Call the xyz function and display the returned value
    cout << "Displying the output ( In the main() body ) : " << xyz(output);  

    _getch(); 
    return 0;  
}