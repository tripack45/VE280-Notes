#define SWAP(type) swap_##type
#define SWAP_IMPL(type) \
static void SWAP(type) (type &x, type &y) {\
    type t = x; x = y; y = x; \
}
SWAP_IMPL(int);
SWAP_IMPL(double);
int main() {
    int x =10, y =20;        SWAP(int)(x, y);
    double p = 0.0, q = 1.0; SWAP(double)(p, q);
}