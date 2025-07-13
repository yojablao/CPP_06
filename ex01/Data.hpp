#ifndef DATA_HPP
#define DATA_HPP
class Data
{
    public:
    char value;
    int  ivalue;
    float  fvalue;
    double  dvalue;
     Data(char c = 'A', int i = 0, float f = 0.0f, double d = 0.0): value(c), ivalue(i), fvalue(f), dvalue(d)
        {}
};
#endif
