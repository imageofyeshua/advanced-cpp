export module Person;

import <print>;
import <string>;

using namespace std;

export struct Person
{
  string name;
  int age;
  float height;
  float weight;
};

export void check_age(Person* adult, int count)
{
  for (int i {0}; i < count; i++) {
    if (adult[i].age >= 25) {
      println("name: {}", adult[i].name);
      println("age: {}", adult[i].age);
      println("height: {}", adult[i].height);
      println("weight: {}", adult[i].weight);
    }
  }
}
