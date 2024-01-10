// DO NOT MODIFY, THIS FILE IS GENERATED //
// VERSION 0.4.0 //


#pragma once

#include <string.h>
#include <stdint.h>


// PackedQuaternion.h

#define PackedQuaternion_SIZE 16
typedef volatile uint8_t PackedQuaternion;

inline void PackedQuaternion_get_x(PackedQuaternion* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 0, sizeof(float));
}
inline float PackedQuaternion_get_x_ret(PackedQuaternion* ptr) {
	float tmp;
	PackedQuaternion_get_x(ptr, &tmp);
	return tmp;
}

inline void PackedQuaternion_get_y(PackedQuaternion* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 4, sizeof(float));
}
inline float PackedQuaternion_get_y_ret(PackedQuaternion* ptr) {
	float tmp;
	PackedQuaternion_get_y(ptr, &tmp);
	return tmp;
}

inline void PackedQuaternion_get_z(PackedQuaternion* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 8, sizeof(float));
}
inline float PackedQuaternion_get_z_ret(PackedQuaternion* ptr) {
	float tmp;
	PackedQuaternion_get_z(ptr, &tmp);
	return tmp;
}

inline void PackedQuaternion_get_w(PackedQuaternion* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 12, sizeof(float));
}
inline float PackedQuaternion_get_w_ret(PackedQuaternion* ptr) {
	float tmp;
	PackedQuaternion_get_w(ptr, &tmp);
	return tmp;
}

