#include <iostream>
#include "LList.h"
int main() {
    LList l;
    l.addToHead(4);
    l.addToHead(7);
    l.addToHead(1);
    l.addToHead(5);
    l.addToHead(2);
    l.sort(false);
    l.printAll();
    return 0;
}
