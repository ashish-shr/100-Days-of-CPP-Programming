// seekp() and tellp() for writing

#include <iostream>
#include <fstream>

int main()
{
  // open file for writing and append mode
  std::fstream outputFile("write.txt", std::ios::out | std::ios::app);

  // Check if the file is successfully opened
  if (outputFile.is_open())
  {
    // Write some initial content to the file
    outputFile << "Initial content.\n";

    // Move the write pointer to the end of the file
    outputFile.seekp(0, std::ios::end);

    // Get the current write position
    int writePos = outputFile.tellp();
    std::cout << "Current write position: " << writePos << "\n";

    // Append additional content at the end
    outputFile << "Additional content at the end.\n";

    // Close the file
    outputFile.close();
  }
  else
  {
    std::cerr << "Error opening the file.\n";
  }

  return 0;
}
