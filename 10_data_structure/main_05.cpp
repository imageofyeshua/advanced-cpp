import Utils;
import <print>;
import <iostream>;
import <string>;

using namespace std;

int main(int argc, char *argv[])
{
  // exception
  try {
    int input;
    print("Enter an integer: ");
    cin >> input;


    if (input > 0)
    {
      println("throw 1");
      throw 1; // exception 1(integer type)
      println("after throw 1");
    }

    if (input < 0)
    {
      println("throw -1.0f");
      throw -1.0f; // exception 1.0f(float type)
      println("after throw -1.0f");
    }

    if (input == 0)
    {
      println("throw Z");
      throw 'Z'; // exception 1(integer type)
      println("after throw Z");
    }
  }
  catch (int a)
  {
    println("catch {}", a);
  }
  catch (float b)
  {
    println("catch {}", b);
  }
  catch (char c)
  {
    println("catch {}", c);
  }
  catch (...)
  {
    println("catch the rest...");
  }

  try 
  {
    func_throw();
  }
  catch (int exec) 
  {
    println("catch {}", exec);
  }

  return 0;
}
