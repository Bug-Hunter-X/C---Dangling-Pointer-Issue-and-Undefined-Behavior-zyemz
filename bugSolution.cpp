int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifying the value pointed to by ptr

  int y = 30; 
  int *ptr2 = &y; // create a new pointer for y
  *ptr2 = 40; // Modifying the value pointed to by ptr2

  std::cout << "x: " << x << std::endl; //Prints 20
  std::cout << "y: " << y << std::endl; //Prints 40
  return 0; 
} 