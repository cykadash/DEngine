#include <core/logger.h>
#include <core/asserts.h>

// TODO: Test
#include <platform/platform.h>

int main(void) {
    KFATAL("yo mama fat %f", 2.71f);
    KERROR("test: %f", 2.71f);
    KWARN("test: %f", 2.71f);
    KINFO("test: %f", 2.71f);
    KDEBUG("test: %f", 2.71f);
    KTRACE("test: %f", 2.71f);

    platform_state state;
    if (platform_startup(&state, "Dash Engine Testbed", 100, 100, 1280, 720)) {
        while (TRUE) {
            platform_pump_messages(&state);
        }
    }
    platform_shutdown(&state);

    return 0;
}
