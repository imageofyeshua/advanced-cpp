import <print>;

using namespace std;

int main()
{
  int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  int* pointer1 {&scores[0]};
  int* pointer2 {&scores[2]};

  int* pointer3 {scores + 4};
  int* pointer4 {scores + 6};

  println("scores[0] address: {}", static_cast<void*>(pointer1));
  println("scores[2] address: {}", static_cast<void*>(pointer2));
  println("scores[4] address: {}", static_cast<void*>(pointer3));
  println("scores[6] address: {}", static_cast<void*>(pointer4));

  println("pointer2 - pointer1 : {}", pointer2 - pointer1);
  println("pointer3 - pointer4 : {}", pointer3 - pointer4);

  ptrdiff_t pos_diff = pointer2 - pointer1;
  ptrdiff_t neg_diff = pointer3 - pointer4;

  println("pointer2 - pointer1 : {}", pos_diff);
  println("pointer3 - pointer4 : {}", neg_diff);

  println("sizeof(std::ptrdiff_t) : {}", sizeof(ptrdiff_t));

  println("### Finding Nemo Demo ###");

  // Finding Nemo
  int data[] {11, 2, 52, 9, 13, 7, 12, 100};

  int* min_address {&data[0]};
  int* max_address {&data[0]};

  for(size_t i{0}; i < size(data) - 1; ++i)
  {
    if (*min_address > data[i+1]) {
      min_address = &data[i+1];
    } else if(*max_address < data[i+1]) {
      max_address = &data[i+1];
    }
    println("min_address value: {}, data[{}] value: {}", *min_address, i, data[i+1]);
    println("max_address value: {}, data[{}] value: {}", *max_address, i, data[i+1]);
  }

  println("The first array address is : {}", static_cast<void*>(&data[0]));
  println("The minimum number address is : {}", static_cast<void*>(min_address));
  println("The maximum number address is : {}", static_cast<void*>(max_address));
  println("The distance between the first array and the minimum is : {}", min_address - &data[0]);
  println("The distance between the first array and the maximum is : {}", max_address - &data[0]);

  return 0;
}
