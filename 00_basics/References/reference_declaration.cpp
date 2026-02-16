import <print>;

using namespace std;

int main(){

    int int_data {33};
    double double_data {55};

    // References
    int& ref_int_data {int_data};
    double& ref_double_data {double_data};

    // Print stuff out
    println("int_data : {}", int_data);
    println("&int_data : {}", static_cast<void*>(&int_data));
    println("double_data : {}", double_data);
    println("&double_data : {}", static_cast<void*>(&double_data));

    println("===========================");

    println("ref_int_data : {}", ref_int_data);
    println("&ref_int_data : {}", static_cast<void*>(&ref_int_data));
    println("ref_double_data : {}", ref_double_data);
    println("&ref_double_data : {}", static_cast<void*>(&ref_double_data));

    int_data = 111;
    double_data = 67.2;

    println("===========================");

    println("int_data : {}", int_data);
    println("&int_data : {}", static_cast<void*>(&int_data));
    println("double_data : {}", double_data);
    println("&double_data : {}", static_cast<void*>(&double_data));

    println("===========================");

    println("ref_int_data : {}", ref_int_data);
    println("&ref_int_data : {}", static_cast<void*>(&ref_int_data));
    println("ref_double_data : {}", ref_double_data);
    println("&ref_double_data : {}", static_cast<void*>(&ref_double_data));

    ref_int_data = 1012;
    ref_double_data = 1000.45;

    println("===========================");

    println("int_data : {}", int_data);
    println("&int_data : {}", static_cast<void*>(&int_data));
    println("double_data : {}", double_data);
    println("&double_data : {}", static_cast<void*>(&double_data));

    println("===========================");

    println("ref_int_data : {}", ref_int_data);
    println("&ref_int_data : {}", static_cast<void*>(&ref_int_data));
    println("ref_double_data : {}", ref_double_data);
    println("&ref_double_data : {}", static_cast<void*>(&ref_double_data));
    
    return 0;
}
