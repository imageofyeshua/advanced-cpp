import <print>;
using namespace std;

[[noreturn]] void forceProgramTermination()
{
  exit(1);
}

bool isDonbleAvailable()
{
  bool isAvailable{ true };
  return isAvailable;
}

bool isFeatureLicensed(int featureId)
{
  if (!isDonbleAvailable()) {
    // No licensing dongle found, abort program execution!
    forceProgramTermination();
  } else {
    // Dongle available, perform license check of the given feature...
    bool isLicensed{ featureId == 42 };
    return isLicensed;
  }
}

int main() {
  bool isLicensed{ isFeatureLicensed(42) };
  println("isLicensed: {}", isLicensed);
}
