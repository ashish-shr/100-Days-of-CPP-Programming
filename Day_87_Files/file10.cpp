// seekg() and tellg() for reading

#include <iostream>
#include <fstream>

int main()
{
  std::ifstream inputFile("read.txt"); // read.txt => Education beats beauty

  // Check if the file is successfully opened
  if (inputFile.is_open())
  {
    // Move the read pointer to the 5th character (4th index) from the beginning
    inputFile.seekg(4, std::ios::beg);

    // Get the current read position
    int readPos = inputFile.tellg();
    std::cout << "Current read position: " << readPos << "\n"; // 4

    // Read and display content from the specified position
    std::string content;
    inputFile >> content;
    std::cout << "Content from position 5: " << content << "\n"; // ation

    inputFile.close();
  }
  else
  {
    std::cerr << "Error opening the file.\n";
  }

  return 0;
}
