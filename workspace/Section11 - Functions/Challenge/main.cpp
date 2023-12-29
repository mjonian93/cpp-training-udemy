//Section 11
//Challenge

#include <iostream>
#include <vector>

using namespace std;

void printNumbers (vector<int> &numbers);
void addNumber (vector<int> &numbers);
void displayMean (vector<int> &numbers);
void displaySmallest (vector<int> &numbers);
void displayLargest (vector<int> &numbers);

int main() {
    vector<int> numbers {};
    
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
                printNumbers(numbers);
                break;
            case 'A':
            case 'a':
                addNumber(numbers);
                break;
            case 'M':
            case 'm':
                displayMean(numbers);
                break;
            case 'S':
            case 's':
                displaySmallest(numbers);
                break;
            case 'L':
            case 'l':
                displayLargest(numbers);
                break;
            default:
                cout << "Unknown option - try again" << endl;
        }
    }
    
    cout << "\nGoodbye!" << endl;
    
    cout << endl;
    return 0;
}

void printNumbers (vector<int> &numbers) {
    if (numbers.size() == 0)
        cout << "List is empty" << endl;
    else
        for (auto val : numbers) {
            cout << val << endl;
        }
}

void addNumber (vector<int> &numbers) {
    int num {};
    cout << "Enter an integer to add to the list: ";
    cin >> num;
    numbers.push_back(num);
    cout << num << " added" << endl;
}

void displayMean (vector<int> &numbers) {
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

void displaySmallest (vector<int> &numbers) {
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

void displayLargest (vector<int> &numbers) {
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