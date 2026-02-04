import <print>;

using namespace std;

int main(){

  const size_t ROWS {12}; 
  const size_t COLS {3};

  println("Tabular data visualization with nested for loops : ");

  for (size_t row{0} ; row < ROWS ; ++ row){
    for (size_t col{0} ; col < COLS ; ++col){
      print("[Row {:3}:Col {:3}]", row, col);
    }
    println("");
  }

  //While loop
  println("");
  println("Tabular data visualization with nested while loops : ");

  // Remember to reset col to 0 after the inner loop is done for the next row 
  // to use the right columns.
  size_t row {0};
  size_t col {0};

  while(row < ROWS){
    while(col < COLS){
      print("[Row {:3}:Col {:3}]", row, col);
      ++col;
    }
    println("");
    col = 0 ;
    ++row;
  }

  println("");
  println("Tabular data visualization with nested do while loops : ");

  row = 0;
  col = 0;

  do {
    do {
      print("[Row {:3}:Col {:3}]", row, col);
      ++col;
    } while(col < COLS);

    println("");
    col = 0 ;
    ++row;
  } while(row < ROWS);

  return 0;
}
