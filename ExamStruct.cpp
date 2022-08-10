#include <iostream>
using namespace std;

// Declare Person struct type
struct PERSON {  
    
	// Declare member types
	float weight;
	int age;   
    string name;

// Define object of type PERSON
} family_member;   

// Driver code
int main() {
    
    // C++ style structure declaration
    PERSON brother;  
    
    // Assing values to members
    brother.weight = 1.78;   
    brother.age = 17;
    brother.name = "Pepo";
    
    // Printing values to members
    cout << "brother.weight = " << brother.weight << '\n';
    cout << "brother.age = " << brother.age << '\n';
    cout << "brother.name = " << brother.name;

} // End driver
