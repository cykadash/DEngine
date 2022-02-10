#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    KFATAL("yo mama fat %f", 2.71f);
    KERROR("test: %f", 2.71f);
    KWARN("test: %f", 2.71f);
    KINFO("test: %f", 2.71f);
    KDEBUG("test: %f", 2.71f);
    KTRACE("test: %f", 2.71f);

    KASSERT(1 == 0);

    return 0;
}
