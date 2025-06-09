#include <iostream>
using namespace std;

class NamedObject {
    static int count;
    int id;
public:
    NamedObject() {
        id = ++count;
        cout << "Object #" << id << " created." << endl;
    }

    ~NamedObject() {
        cout << "Object #" << id << " destroyed." << endl;
    }
};

int NamedObject::count = 0;

int main() {
    NamedObject a;
    NamedObject b;
    {
        NamedObject c;
    }
    NamedObject d;
}