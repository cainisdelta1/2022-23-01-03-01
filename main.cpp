// strings
#include <iostream>

int main() {
  std::cout << "hello world" << std::endl;

  //declare and initialize a c-style string
  char message[6] = {'h','e','l','l','o','\0'};
  std::cout << "mesage = " << message << std::endl;

  //declare and initialize a c-style string
  char name[] = "Andrew"; // name[7]
  std::cout << "name = " << name << std::endl;

  std::cout << "name[0] = " << name[0] << std::endl;
  std::cout << "name[1] = " << name[1] << std::endl;
  std::cout << "name[2] = " << name[2] << std::endl;
  std::cout << "name[3] = " << name[3] << std::endl;
  std::cout << "name[4] = " << name[4] << std::endl;
  std::cout << "name[5] = " << name[5] << std::endl;
  std::cout << "name[6] = " << name[6] << std::endl;
  //std::cout << "name[7] = " << name[7] << std::endl;
  // name[7] doesnt exist and could crash os if used improperly. repl prevents this tho
  return 0;
}