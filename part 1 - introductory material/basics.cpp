#include <iostream>
using namespace::std;

auto b = true;
const int d = 0;

struct Vector {
    int size;
    double* elem;
};


void vector_init(Vector& v, int s){
    v.elem = new double[s];
    v.size = s;
}

int main(){
    std::cout << b << std::endl;

    // pointers & references
    /*
    char v[6];
    char* p = &v[3]; // pointer to char
    char& q = v[3];
    char x = *p;
    */

    Vector v;
    vector_init(v, 10);
    for(int i = 0; i < 10; i++){
        cin >> v.elem[i];
    }

    double sum = 0;
    for(int i = 0; i < 10; i++){
        sum += v.elem[i];
    }
    cout << sum << endl;

}
