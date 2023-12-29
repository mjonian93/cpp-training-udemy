//Section 9
//Challenge

#include <iostream>
#include <vector>

using namespace std;

void printNumbers ();
void addNumber ();
void displayMean ();
void displaySmallest ();
void displayLargest ();

vector<int> numbers {};

int main() {
    
    while (true) {
        cout << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        
        char selection {};
        cin >> selection;
        
        if (selection == 'Q' || selection == 'q')
            break;
            
        switch (selection) {
            case 'P':
            case 'p':
                printNumbers();
                break;
            case 'A':
            case 'a':
                addNumber();
                break;
            case 'M':
            case 'm':
                displayMean();
                break;
            case 'S':
            case 's':
                displaySmallest();
                break;
            case 'L':
            case 'l':
                displayLargest();
                break;
            default:
                cout << "Unknown option - try again" << endl;
        }
    }
    
    cout << "\nGoodbye!" << endl;
    
    cout << endl;
    return 0;
}

void printNumbers () {
    if (numbers.size() == 0)
        cout << "List is empty" << endl;
    else
        for (auto val : numbers) {
            cout << val << endl;
        }
}

void addNumber () {
    int num {};
    cout << "Enter an integer to add to the list: ";
    cin >> num;
    numbers.push_back(num);
    cout << num << " added" << endl;
}

void displayMean () {
    if (numbers.size() == 0)
        cout << "List is empty" << endl;
    else {
        int total {};
        for (auto val : numbers) {
            total += val;
        }
        cout << "Mean is: " << (static_cast<double>(total)/numbers.size()) << endl;
    }
}

void displaySmallest () {
    if (numbers.size() == 0)
        cout << "List is empty" << endl;
    else {
        int smallest {numbers.at(0)};
        for (auto val : numbers) {
            if (val < smallest)
                smallest = val;
        }
        cout << "Smallest number is: " << smallest << endl;
    }
}

void displayLargest () {
    if (numbers.size() == 0)
        cout << "List is empty" << endl;
    else {
        int largest {numbers.at(0)};
        for (auto val : numbers) {
            if (val > largest)
                largest = val;
        }
        cout << "Largest number is: " << largest << endl;
    }
}