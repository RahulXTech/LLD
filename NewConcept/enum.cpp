//An enumeration, or enum in C++, is a user-defined data type formed by a set of named integral constants. However, enum types from tradition have the disadvantage of potential name clashes and the absence of type safety.
// ✅ Use Cases:
// State management (e.g., Status codes)
// Days of the week
// Menu selections
// Direction or mode settings

#include <iostream>
using namespace std;

enum Color {
    RED,     // 0
    GREEN,   // 1
    BLUE     // 2
};
enum Status {
    OK = 200,
    NOT_FOUND = 404,
    INTERNAL_ERROR = 500
};


int main() {
    Color myColor = GREEN;
    cout << myColor << endl;  // Output: 1
    return 0;
}

// enum class Direction {
//     UP,
//     DOWN,
//     LEFT,
//     RIGHT
// };

// int main() {
//     Direction d = Direction::LEFT;
//     // cout << d; // Error: must cast to int
//     cout << static_cast<int>(d);  // Output: 2
// }
