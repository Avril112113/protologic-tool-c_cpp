// DO NOT MODIFY, THIS FILE IS GENERATED //
// VERSION 0.4.0 //


#pragma once

#include <string.h>
#include <stdint.h>


// RadarContactInfo.h
// Contact info.

#define RadarContactInfo_SIZE 44
typedef volatile uint8_t RadarContactInfo;

inline void RadarContactInfo_get_id(RadarContactInfo* ptr, int64_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 0, sizeof(int64_t));
}
inline int64_t RadarContactInfo_get_id_ret(RadarContactInfo* ptr) {
	int64_t tmp;
	RadarContactInfo_get_id(ptr, &tmp);
	return tmp;
}

inline void RadarContactInfo_get_type(RadarContactInfo* ptr, int32_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 8, sizeof(int32_t));
}
inline int32_t RadarContactInfo_get_type_ret(RadarContactInfo* ptr) {
	int32_t tmp;
	RadarContactInfo_get_type(ptr, &tmp);
	return tmp;
}

inline void RadarContactInfo_get_signal_strength(RadarContactInfo* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 16, sizeof(float));
}
inline float RadarContactInfo_get_signal_strength_ret(RadarContactInfo* ptr) {
	float tmp;
	RadarContactInfo_get_signal_strength(ptr, &tmp);
	return tmp;
}

inline void RadarContactInfo_get_x(RadarContactInfo* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 24, sizeof(float));
}
inline float RadarContactInfo_get_x_ret(RadarContactInfo* ptr) {
	float tmp;
	RadarContactInfo_get_x(ptr, &tmp);
	return tmp;
}

inline void RadarContactInfo_get_y(RadarContactInfo* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 32, sizeof(float));
}
inline float RadarContactInfo_get_y_ret(RadarContactInfo* ptr) {
	float tmp;
	RadarContactInfo_get_y(ptr, &tmp);
	return tmp;
}

inline void RadarContactInfo_get_z(RadarContactInfo* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 40, sizeof(float));
}
inline float RadarContactInfo_get_z_ret(RadarContactInfo* ptr) {
	float tmp;
	RadarContactInfo_get_z(ptr, &tmp);
	return tmp;
}

