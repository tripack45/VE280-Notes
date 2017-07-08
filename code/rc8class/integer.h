#ifndef _INTEGER_H_
#define _INTEGER_H_
class Integer {
    int value;
public:
    int get() const {
        return value;
    }
    void set(int v);
};
#endif