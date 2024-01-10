#include "protologic/protologic.hpp"

#include <stdlib.h>
#include <stdexcept>
#include <iostream>
#include <string>


void tick() {
	radar_set_angle(90);
	radar_set_bearing(-90);
	radar_set_elevation(0);
	radar_trigger();

	PackedVector3* pos = MainState_get_position();
	std::cout
		<< "pos=" << PackedVector3_get_x_ret(pos)
		<<    "," << PackedVector3_get_y_ret(pos)
		<<    "," << PackedVector3_get_z_ret(pos)
		<< "\n" << std::flush;

	ship_self_destruct();
}


extern "C" int main(int argc, char *argv[]) {
	while (true) {
		tick();
		sched_yield();
	}
}
