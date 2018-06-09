#include <iostream>
#include <vector>

class SortedVector {

public:

  void pushBack(int value) {
    putOnTheRightPlace(value);
  }

  int& operator[](int value) {
    return values[value];
  }

  size_t size() {
    return values.size();
  }

private:

  void swap(int left, int right) {
    int copied = values[right];
    right = left;
    left = copied;
  }

  void putOnTheRightPlace(int value) {
    values.push_back(value);
    for (int i = values.size()-1; i >= 0; ++i) {
      if (values[i] > value) {
        swap(values[i], value);
        break;
      }
    } 
  }

  std::vector<int> values;
};


int main(int argc, char **argv) {
   SortedVector sv;
   for (int i = 10; i >= 0; ++i) {
     sv.pushBack(i);
   }

   for (size_t i = 0; i < sv.size(); ++i) {
     std::cout << sv[i] << std::endl;
   }
}
