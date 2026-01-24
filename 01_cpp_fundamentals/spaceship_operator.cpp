import <iostream>;
import <compare>;
import <cmath>;
import <limits>;
import <string>;
using namespace std;

// Helper function to print the result of a std::partial_ordering comparison
void print_order(partial_ordering order) {
  if (order == 0) {
    cout << "equavalent\n";
  } else if (order < 0) {
    cout << "less\n";
  } else if (order > 0) {
    cout << "greater\n";
  } else {
    // This case handles std::partial_ordering::unordered
    cout << "unordered\n";
  }
}

int main()
{
  int i{ 11 };
  strong_ordering result{ i <=> 0 };

  if (result == strong_ordering::less) cout << "i is less than 0\n";
  if (result == strong_ordering::greater) cout << "i is greater 0\n";
  if (result == strong_ordering::equal) cout << "i is equal with 0\n";

  float a{ 10.0f };
  float b{ 20.0f };
  float c{ 10.0f };
  float nan_val = numeric_limits<float>::quiet_NaN();

  cout << "Comparing " << a << " and " << b << ":\n";
  partial_ordering order1 = a <=> b;
  cout << "Result: ";
  print_order(order1);
  cout << "a < b: " << (a < b) << "\n";

  cout << "\nComparing " << a << " and " << c << ":\n";
  partial_ordering order2 = a <=> c;
  cout << "Result: ";
  print_order(order2);
  cout << "a == b: " << (a == c) << "\n";

  // Comparisons involving NaN (unordered values) ---
  cout << "\nComparing " << a << " and NaN:\n";
  partial_ordering order3 = a <=> nan_val;
  cout << "Result: ";
  print_order(order3);
  cout << "a < nan_val: " << (a < nan_val) << " (false)\n";
  cout << "a > nan_val: " << (a > nan_val) << " (false)\n";
  cout << "a == nan_val: " << (a == nan_val) << " (false)\n"; // a == b is false if either is NaN
  cout << "a != nan_val: " << (a != nan_val) << " (true)\n";

  cout << "\nComparing NaN and NaN:\n";
  partial_ordering order4 = nan_val <=> nan_val;
  cout << "Result: ";
  print_order(order4);
  cout << "nan_val == nan_val: " << (nan_val == nan_val) << " (false)\n"; // NaN is not equal to itself
}
