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

  return 0;
}
