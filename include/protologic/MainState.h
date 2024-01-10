// DO NOT MODIFY, THIS FILE IS GENERATED //
// VERSION 0.4.0 //


#pragma once

#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "_MainState.h"
#include "queries.h"
#include "PackedVector3.h"
#include "PackedQuaternion.h"
#include "QS_GunData.h"


// MainState.h

static _MainState* __MainState = (_MainState*)malloc(_MainState_SIZE);
static bool __MainState_has_init = false;

inline PackedVector3* MainState_get_position() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	return (PackedVector3*)(__MainState + 0);
}

inline PackedVector3* MainState_get_velocity() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	return (PackedVector3*)(__MainState + 12);
}

inline PackedQuaternion* MainState_get_orientation() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	return (PackedQuaternion*)(__MainState + 24);
}

inline PackedVector3* MainState_get_angular_velocity() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	return (PackedVector3*)(__MainState + 40);
}

inline int32_t MainState_get_radar_contact_count() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	int32_t tmp;
	_MainState_get_radar_contact_count(__MainState, &tmp);
	return tmp;
}

inline QS_GunData* MainState_get_gun_data0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	return (QS_GunData*)(__MainState + 56);
}

inline QS_GunData* MainState_get_gun_data1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	return (QS_GunData*)(__MainState + 60);
}

inline QS_GunData* MainState_get_gun_data2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	return (QS_GunData*)(__MainState + 64);
}

inline QS_GunData* MainState_get_gun_data3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	return (QS_GunData*)(__MainState + 68);
}

inline float MainState_get_gun_bearing0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_bearing0(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_bearing1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_bearing1(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_bearing2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_bearing2(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_bearing3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_bearing3(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_elevation0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_elevation0(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_elevation1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_elevation1(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_elevation2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_elevation2(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_elevation3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_elevation3(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_refire_time0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_refire_time0(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_refire_time1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_refire_time1(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_refire_time2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_refire_time2(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_refire_time3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_refire_time3(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_reload_time0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_reload_time0(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_reload_time1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_reload_time1(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_reload_time2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_reload_time2(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_gun_reload_time3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_gun_reload_time3(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_gun_magazine_capacity0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_gun_magazine_capacity0(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_gun_magazine_capacity1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_gun_magazine_capacity1(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_gun_magazine_capacity2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_gun_magazine_capacity2(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_gun_magazine_capacity3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_gun_magazine_capacity3(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_gun_magazine_remaining0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_gun_magazine_remaining0(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_gun_magazine_remaining1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_gun_magazine_remaining1(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_gun_magazine_remaining2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_gun_magazine_remaining2(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_gun_magazine_remaining3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_gun_magazine_remaining3(__MainState, &tmp);
	return tmp;
}

inline int32_t MainState_get_gun_ammo_type0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	int32_t tmp;
	_MainState_get_gun_ammo_type0(__MainState, &tmp);
	return tmp;
}

inline int32_t MainState_get_gun_ammo_type1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	int32_t tmp;
	_MainState_get_gun_ammo_type1(__MainState, &tmp);
	return tmp;
}

inline int32_t MainState_get_gun_ammo_type2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	int32_t tmp;
	_MainState_get_gun_ammo_type2(__MainState, &tmp);
	return tmp;
}

inline int32_t MainState_get_gun_ammo_type3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	int32_t tmp;
	_MainState_get_gun_ammo_type3(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_engine_fuel_amount() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_engine_fuel_amount(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_engine_fuel_capacity() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_engine_fuel_capacity(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_engine_throttle() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_engine_throttle(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_radar_noise() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_radar_noise(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_mass() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_mass(__MainState, &tmp);
	return tmp;
}

inline uint16_t MainState_get_missile_launcher_stockpile() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	uint16_t tmp;
	_MainState_get_missile_launcher_stockpile(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time0() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time0(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time1() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time1(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time2() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time2(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time3() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time3(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time4() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time4(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time5() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time5(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time6() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time6(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time7() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time7(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time8() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time8(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time9() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time9(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time10() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time10(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time11() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time11(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time12() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time12(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time13() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time13(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time14() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time14(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time15() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time15(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time16() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time16(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time17() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time17(__MainState, &tmp);
	return tmp;
}

inline float MainState_get_missile_launcher_reload_time18() {
	if (!__MainState_has_init) {
		sharedmemory_set_readaddress(__MainState, _MainState_SIZE);
		__MainState_has_init = true;
	}
	float tmp;
	_MainState_get_missile_launcher_reload_time18(__MainState, &tmp);
	return tmp;
}

