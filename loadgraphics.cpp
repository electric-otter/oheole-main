   #include <graphics.h>
   #include <iostream>
   #include <vector>

int main() {
  // Use the smallest necessary data type
  unsigned char age = 250; // Instead of int age

  // Pass by reference to avoid copying
  void process_data(const std::vector<int>& data) {
    // ...
  }

  std::vector<int> large_data(1000000);
  process_data(large_data);

  // Use smart pointers for automatic memory management
  std::unique_ptr<int[]> numbers(new int[10]);
  for (int i = 0; i < 10; ++i) {
    numbers[i] = i * 2;
  }
  // No need to manually delete[] numbers; it's handled automatically

  return 0;
}
   int main() {
       int gd = DETECT, gm;
       initgraph(&gd, &gm, "");
       getch();
       closegraph();
       return 0;
   }
