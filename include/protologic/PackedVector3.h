// DO NOT MODIFY, THIS FILE IS GENERATED //
// VERSION 0.4.0 //


#pragma once

#include <string.h>
#include <stdint.h>


// PackedVector3.h

#define PackedVector3_SIZE 12
typedef volatile uint8_t PackedVector3;

inline void PackedVector3_get_x(PackedVector3* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 0, sizeof(float));
}
inline float PackedVector3_get_x_ret(PackedVector3* ptr) {
	float tmp;
	PackedVector3_get_x(ptr, &tmp);
	return tmp;
}

inline void PackedVector3_get_y(PackedVector3* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 4, sizeof(float));
}
inline float PackedVector3_get_y_ret(PackedVector3* ptr) {
	float tmp;
	PackedVector3_get_y(ptr, &tmp);
	return tmp;
}

inline void PackedVector3_get_z(PackedVector3* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 8, sizeof(float));
}
inline float PackedVector3_get_z_ret(PackedVector3* ptr) {
	float tmp;
	PackedVector3_get_z(ptr, &tmp);
	return tmp;
}

