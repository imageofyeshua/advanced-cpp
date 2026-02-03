import <print>;

using namespace std;

bool car() {
  println("car function running");
  return false;
}

bool house() {
  println("house function running");
  return true;
}
bool job() {
  println("job function running");
  return false;
}
bool spouse() {
  println("spouse function running");
  return false;
}

int main(){

  bool a {true};
  bool b {true};
  bool c {true};
  bool d {false};

  bool p {false};
  bool q {false};
  bool r {false};
  bool m {true};


  //AND : If one of the operands is 0, the result is 0
  println("");
  println("AND short circuit");
  bool result = a && b && c && d;
  println("result : {}", result);

  //OR : If one of the operands is 1, the result is 1.
  println("");
  println("OR short circuit");
  result = p || q || r || m;
  println("result : {}", result);

  println("");

  if (car() && house() && job() && spouse()) {
    println("I am happy");
  }
  else {
    println("I am sad");
  }

  println("");

  if (car() || house() || job() || spouse()) {
    println("I am happy");
  }
  else {
    println("I am sad");
  }

  return 0;
}
