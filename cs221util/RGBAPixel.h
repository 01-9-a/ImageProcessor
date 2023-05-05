#ifndef CS221UTIL_RGBAPixel
#define CS221UTIL_RGBAPixel
namespace cs221util {
    class RGBAPixel{
        public:
        unsigned char r;
        unsigned char g;
        unsigned char b;
        double a;
        RGBAPixel();
        RGBAPixel(unsigned char red, unsigned char green, unsigned char blue);
        RGBAPixel(unsigned char red, unsigned char green, unsigned char blue, double alpha);
    };
}
#endif