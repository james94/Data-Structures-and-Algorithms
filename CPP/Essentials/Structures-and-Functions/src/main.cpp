#include <iostream>

using std::cout;
using std::endl;

struct Rectangle
{
    int length;
    int width;
};

void initialize(struct Rectangle *r, int l, int w)
{
    r->length = l;
    r->width = w;
}

int area(struct Rectangle r)
{
    return r.length * r.width;
}

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    cout << "*********** Structures and Functions Program ***********" << endl;
    struct Rectangle r;
    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 20);
    return 0;
}