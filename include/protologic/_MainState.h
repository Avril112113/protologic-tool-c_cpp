// DO NOT MODIFY, THIS FILE IS GENERATED //
// VERSION 0.4.0 //


#pragma once

#include <string.h>
#include <stdint.h>
#include "PackedVector3.h"
#include "PackedQuaternion.h"
#include "QS_GunData.h"


// _MainState.h

#define _MainState_SIZE 664
typedef volatile uint8_t _MainState;

inline PackedVector3* _MainState_get_position(_MainState* ptr) {
	return (PackedVector3*)(ptr + 0);
}

inline PackedVector3* _MainState_get_velocity(_MainState* ptr) {
	return (PackedVector3*)(ptr + 12);
}

inline PackedQuaternion* _MainState_get_orientation(_MainState* ptr) {
	return (PackedQuaternion*)(ptr + 24);
}

inline PackedVector3* _MainState_get_angular_velocity(_MainState* ptr) {
	return (PackedVector3*)(ptr + 40);
}

inline void _MainState_get_radar_contact_count(_MainState* ptr, int32_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 52, sizeof(int32_t));
}
inline int32_t _MainState_get_radar_contact_count_ret(_MainState* ptr) {
	int32_t tmp;
	_MainState_get_radar_contact_count(ptr, &tmp);
	return tmp;
}

inline QS_GunData* _MainState_get_gun_data0(_MainState* ptr) {
	return (QS_GunData*)(ptr + 56);
}

inline QS_GunData* _MainState_get_gun_data1(_MainState* ptr) {
	return (QS_GunData*)(ptr + 60);
}

inline QS_GunData* _MainState_get_gun_data2(_MainState* ptr) {
	return (QS_GunData*)(ptr + 64);
}

inline QS_GunData* _MainState_get_gun_data3(_MainState* ptr) {
	return (QS_GunData*)(ptr + 68);
}

inline void _MainState_get_gun_bearing0(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 56, sizeof(float));
}
inline float _MainState_get_gun_bearing0_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_bearing0(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_bearing1(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 60, sizeof(float));
}
inline float _MainState_get_gun_bearing1_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_bearing1(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_bearing2(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 64, sizeof(float));
}
inline float _MainState_get_gun_bearing2_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_bearing2(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_bearing3(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 68, sizeof(float));
}
inline float _MainState_get_gun_bearing3_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_bearing3(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_elevation0(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 152, sizeof(float));
}
inline float _MainState_get_gun_elevation0_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_elevation0(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_elevation1(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 156, sizeof(float));
}
inline float _MainState_get_gun_elevation1_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_elevation1(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_elevation2(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 160, sizeof(float));
}
inline float _MainState_get_gun_elevation2_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_elevation2(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_elevation3(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 164, sizeof(float));
}
inline float _MainState_get_gun_elevation3_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_elevation3(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_refire_time0(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 244, sizeof(float));
}
inline float _MainState_get_gun_refire_time0_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_refire_time0(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_refire_time1(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 248, sizeof(float));
}
inline float _MainState_get_gun_refire_time1_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_refire_time1(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_refire_time2(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 252, sizeof(float));
}
inline float _MainState_get_gun_refire_time2_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_refire_time2(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_refire_time3(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 256, sizeof(float));
}
inline float _MainState_get_gun_refire_time3_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_refire_time3(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_reload_time0(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 336, sizeof(float));
}
inline float _MainState_get_gun_reload_time0_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_reload_time0(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_reload_time1(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 340, sizeof(float));
}
inline float _MainState_get_gun_reload_time1_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_reload_time1(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_reload_time2(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 344, sizeof(float));
}
inline float _MainState_get_gun_reload_time2_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_reload_time2(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_reload_time3(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 348, sizeof(float));
}
inline float _MainState_get_gun_reload_time3_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_gun_reload_time3(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_magazine_capacity0(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 428, sizeof(uint16_t));
}
inline uint16_t _MainState_get_gun_magazine_capacity0_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_gun_magazine_capacity0(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_magazine_capacity1(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 430, sizeof(uint16_t));
}
inline uint16_t _MainState_get_gun_magazine_capacity1_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_gun_magazine_capacity1(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_magazine_capacity2(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 432, sizeof(uint16_t));
}
inline uint16_t _MainState_get_gun_magazine_capacity2_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_gun_magazine_capacity2(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_magazine_capacity3(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 434, sizeof(uint16_t));
}
inline uint16_t _MainState_get_gun_magazine_capacity3_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_gun_magazine_capacity3(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_magazine_remaining0(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 474, sizeof(uint16_t));
}
inline uint16_t _MainState_get_gun_magazine_remaining0_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_gun_magazine_remaining0(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_magazine_remaining1(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 476, sizeof(uint16_t));
}
inline uint16_t _MainState_get_gun_magazine_remaining1_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_gun_magazine_remaining1(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_magazine_remaining2(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 478, sizeof(uint16_t));
}
inline uint16_t _MainState_get_gun_magazine_remaining2_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_gun_magazine_remaining2(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_magazine_remaining3(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 480, sizeof(uint16_t));
}
inline uint16_t _MainState_get_gun_magazine_remaining3_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_gun_magazine_remaining3(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_ammo_type0(_MainState* ptr, int32_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 520, sizeof(int32_t));
}
inline int32_t _MainState_get_gun_ammo_type0_ret(_MainState* ptr) {
	int32_t tmp;
	_MainState_get_gun_ammo_type0(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_ammo_type1(_MainState* ptr, int32_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 522, sizeof(int32_t));
}
inline int32_t _MainState_get_gun_ammo_type1_ret(_MainState* ptr) {
	int32_t tmp;
	_MainState_get_gun_ammo_type1(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_ammo_type2(_MainState* ptr, int32_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 524, sizeof(int32_t));
}
inline int32_t _MainState_get_gun_ammo_type2_ret(_MainState* ptr) {
	int32_t tmp;
	_MainState_get_gun_ammo_type2(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_gun_ammo_type3(_MainState* ptr, int32_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 526, sizeof(int32_t));
}
inline int32_t _MainState_get_gun_ammo_type3_ret(_MainState* ptr) {
	int32_t tmp;
	_MainState_get_gun_ammo_type3(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_engine_fuel_amount(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 566, sizeof(float));
}
inline float _MainState_get_engine_fuel_amount_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_engine_fuel_amount(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_engine_fuel_capacity(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 570, sizeof(float));
}
inline float _MainState_get_engine_fuel_capacity_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_engine_fuel_capacity(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_engine_throttle(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 574, sizeof(float));
}
inline float _MainState_get_engine_throttle_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_engine_throttle(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_radar_noise(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 578, sizeof(float));
}
inline float _MainState_get_radar_noise_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_radar_noise(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_mass(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 582, sizeof(float));
}
inline float _MainState_get_mass_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_mass(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_stockpile(_MainState* ptr, uint16_t* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 586, sizeof(uint16_t));
}
inline uint16_t _MainState_get_missile_launcher_stockpile_ret(_MainState* ptr) {
	uint16_t tmp;
	_MainState_get_missile_launcher_stockpile(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time0(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 588, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time0_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time0(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time1(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 592, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time1_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time1(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time2(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 596, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time2_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time2(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time3(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 600, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time3_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time3(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time4(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 604, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time4_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time4(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time5(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 608, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time5_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time5(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time6(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 612, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time6_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time6(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time7(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 616, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time7_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time7(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time8(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 620, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time8_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time8(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time9(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 624, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time9_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time9(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time10(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 628, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time10_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time10(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time11(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 632, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time11_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time11(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time12(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 636, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time12_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time12(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time13(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 640, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time13_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time13(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time14(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 644, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time14_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time14(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time15(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 648, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time15_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time15(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time16(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 656, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time16_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time16(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time17(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 656, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time17_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time17(ptr, &tmp);
	return tmp;
}

inline void _MainState_get_missile_launcher_reload_time18(_MainState* ptr, float* dest) {
	memcpy(dest, ((uint8_t*)ptr) + 660, sizeof(float));
}
inline float _MainState_get_missile_launcher_reload_time18_ret(_MainState* ptr) {
	float tmp;
	_MainState_get_missile_launcher_reload_time18(ptr, &tmp);
	return tmp;
}

