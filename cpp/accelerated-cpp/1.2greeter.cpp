//Ask for a person's name, generate a framed greeting
#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;

  //build the message
  const std::string greeting = "Hello, " + name + "!";

  //second and fourth lines
  const std::string spaces(greeting.size(), ' ');
  const std::string second = "* " + spaces + " *";

  //first and fifth
  const std::string first(second.size(), '*');

  //now we write.
  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  return 0;
}
