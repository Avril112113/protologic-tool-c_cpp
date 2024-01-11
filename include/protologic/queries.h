// DO NOT MODIFY, THIS FILE IS GENERATED //
// VERSION 0.4.0 //


#pragma once

#include "_import.h"
#include "_MainState.h"
#include "RadarContactInfo.h"


// queries.h


WASM_IMPORT("protologic", "sharedmemory_set_readaddress", sharedmemory_set_readaddress, void, _MainState* addr, int32_t len);

WASM_IMPORT("protologic", "cpu_get_fuel", cpu_get_fuel, int64_t);

WASM_IMPORT("protologic", "radar_get_contact_list", radar_get_contact_list, int32_t, RadarContactInfo dest[], int32_t destCount);

