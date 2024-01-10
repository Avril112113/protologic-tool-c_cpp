// DO NOT MODIFY, THIS FILE IS GENERATED //
// VERSION 0.4.0 //


#pragma once

#include <string.h>
#include <stdint.h>


// QS_GunData.h

#define QS_GunData_SIZE 468
typedef volatile uint8_t QS_GunData;

inline void QS_GunData_get_bearing(QS_GunData* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 0, sizeof(float));
}
inline float QS_GunData_get_bearing_ret(QS_GunData* ptr) {
	float tmp;
	QS_GunData_get_bearing(ptr, &tmp);
	return tmp;
}

inline void QS_GunData_get_elevation(QS_GunData* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 96, sizeof(float));
}
inline float QS_GunData_get_elevation_ret(QS_GunData* ptr) {
	float tmp;
	QS_GunData_get_elevation(ptr, &tmp);
	return tmp;
}

inline void QS_GunData_get_refire_time(QS_GunData* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 188, sizeof(float));
}
inline float QS_GunData_get_refire_time_ret(QS_GunData* ptr) {
	float tmp;
	QS_GunData_get_refire_time(ptr, &tmp);
	return tmp;
}

inline void QS_GunData_get_reload_time(QS_GunData* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 280, sizeof(float));
}
inline float QS_GunData_get_reload_time_ret(QS_GunData* ptr) {
	float tmp;
	QS_GunData_get_reload_time(ptr, &tmp);
	return tmp;
}

inline void QS_GunData_get_magazine_capacity(QS_GunData* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 372, sizeof(uint16_t));
}
inline uint16_t QS_GunData_get_magazine_capacity_ret(QS_GunData* ptr) {
	uint16_t tmp;
	QS_GunData_get_magazine_capacity(ptr, &tmp);
	return tmp;
}

inline void QS_GunData_get_magazine_remaining(QS_GunData* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 418, sizeof(uint16_t));
}
inline uint16_t QS_GunData_get_magazine_remaining_ret(QS_GunData* ptr) {
	uint16_t tmp;
	QS_GunData_get_magazine_remaining(ptr, &tmp);
	return tmp;
}

inline void QS_GunData_get_ammo_type(QS_GunData* ptr, int32_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 464, sizeof(int32_t));
}
inline int32_t QS_GunData_get_ammo_type_ret(QS_GunData* ptr) {
	int32_t tmp;
	QS_GunData_get_ammo_type(ptr, &tmp);
	return tmp;
}

