/******************************************************************************
# Author:           Lucy P
# Lab:              Assignment 9
# Date:             June 6, 2026
# Description:      prompt user for number of positive digits, and then the
#                   digits they want before calculating the max and minimum 
#                   number, in the position it appears. 
# Output:           min, max, minPosition, maxPosition as ints.
# Sources:          zybooks, assignment 9 resources, zoom recordings.
#******************************************************************************/
#include <iostream>
using namespace std;

// display function prototypes
void getInput(int &num);
void doStats(int num);

// start main function
int main() {

  int num;
  // display welcome message
  cout << "Welcome to my Final Exam Practice." << endl;

  getInput(num);

  cout << "\nThank you for using my program." << endl;
}

void getInput(int &num) {
  int intCount = 0;
   cout << "\nHow many positive integers do you want to process?: ";
   cin >> intCount;
      if(intCount <= 0) {
        cout << "\nNo integers were entered." << endl;
    } else {
        doStats(intCount);
  }
}

void doStats(int num) {
  int min = 0;
  int minPosition = 0;
  int max = 0;
  int maxPosition = 0;

  cout << endl; 

  for(int i = 1; i <= num; i++) {
    int numInput = 0;
    while(numInput <= 0) {
      cout << "Enter integer # " << i << ": ";
      cin >> numInput;
      if(numInput <= 0) {
        cout << "Enter a positive integer!" << endl;
      }
    }

    // check for min and max
    if (i == 1 || numInput < min) {
      min = numInput;
      minPosition = i;
    }
    if (numInput > max) {
      max = numInput;
      maxPosition = i;
    }
  }

  cout << "\nThe minimum number entered was " << min << " entered in position " << minPosition << "." << endl; 
  cout << "The maximum number entered was " << max << " entered in position " << maxPosition << "." << endl;
}
  