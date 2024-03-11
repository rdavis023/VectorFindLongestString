#include "FindLongestString.h"


string findLongestString(vector<string>& stringList) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function finds the longest string in         |
  //   |   a given list of strings.                          |
  //   | - It uses a single loop to check the length         |
  //   |   of each string.                                   |
  //   |                                                     |
  //   | Return type: string                                 |
  //   | - Returns the longest string found in the list.     |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'longestString' keeps track of the longest        |
  //   |   string found so far.                              |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
  string longestString = ""; // Start with an empty string as the longest string
    for (const std::string& currentString : stringList) {
        if (currentString.length() > longestString.length()) {
            longestString = currentString; // Update the longest string if the current one is longer
        }
    }
    return longestString; // Return the longest string found in the list
}