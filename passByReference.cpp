#include<iostream>
using namespace std;

struct Object {
    int i;
};

void sample(Object* o) { // 1
    o->i++;
}

void sample(Object const& o) { // 2
    // nothing useful here :)
}

void sample(Object & o) { // 3
    o.i++;
}

void sample1(Object o) { // 4
    o.i++;
}

int main() {
    Object obj = { 10 };
    Object const obj_c = { 10 };

    sample(&obj); // calls 1
    sample(obj_c); // calls 2
    sample(obj); // calls 3
    sample1(obj); // calls 4
}

// calls1 and calls 3 are effectively same but not equal.
// In call1 you can change the parameter pointer but it wont change the actual pointer
// In call3, when you change the paramater pointer the actual pointer also changes.