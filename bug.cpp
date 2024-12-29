int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifying the value pointed to by ptr

  int y = 30; 
  ptr = &y; // ptr now points to y
  *ptr = 40; // Modifying the value pointed to by ptr

  // Accessing x after ptr has been reassigned may lead to unexpected behavior.  
  //In this example it will not directly cause a crash, but it is undefined behavior.
  std::cout << "x: " << x << std::endl; // Might not print 10 anymore
  return 0; 
}