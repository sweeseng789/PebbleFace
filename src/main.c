#include <pebble.h>

static Window *s_main_window;

static void init()
{

}

static void deinit()
{

}

int main(void) {
	init();
	app_event_loop();
	deinit();
}
