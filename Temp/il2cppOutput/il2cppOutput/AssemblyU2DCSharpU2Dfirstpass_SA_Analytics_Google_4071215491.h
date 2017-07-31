#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Sin258813300.h"

// SA.Analytics.Google.CachedRequest
struct CachedRequest_t486971799;
// System.Collections.Generic.List`1<SA.Analytics.Google.CachedRequest>
struct List_1_t4151060227;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Analytics.Google.CacheQueue
struct  CacheQueue_t4071215491  : public Singleton_1_t258813300
{
public:
	// System.Boolean SA.Analytics.Google.CacheQueue::IsWorking
	bool ___IsWorking_4;
	// SA.Analytics.Google.CachedRequest SA.Analytics.Google.CacheQueue::_CurrentRequest
	CachedRequest_t486971799 * ____CurrentRequest_5;
	// System.Collections.Generic.List`1<SA.Analytics.Google.CachedRequest> SA.Analytics.Google.CacheQueue::_CurrentQueue
	List_1_t4151060227 * ____CurrentQueue_6;

public:
	inline static int32_t get_offset_of_IsWorking_4() { return static_cast<int32_t>(offsetof(CacheQueue_t4071215491, ___IsWorking_4)); }
	inline bool get_IsWorking_4() const { return ___IsWorking_4; }
	inline bool* get_address_of_IsWorking_4() { return &___IsWorking_4; }
	inline void set_IsWorking_4(bool value)
	{
		___IsWorking_4 = value;
	}

	inline static int32_t get_offset_of__CurrentRequest_5() { return static_cast<int32_t>(offsetof(CacheQueue_t4071215491, ____CurrentRequest_5)); }
	inline CachedRequest_t486971799 * get__CurrentRequest_5() const { return ____CurrentRequest_5; }
	inline CachedRequest_t486971799 ** get_address_of__CurrentRequest_5() { return &____CurrentRequest_5; }
	inline void set__CurrentRequest_5(CachedRequest_t486971799 * value)
	{
		____CurrentRequest_5 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentRequest_5, value);
	}

	inline static int32_t get_offset_of__CurrentQueue_6() { return static_cast<int32_t>(offsetof(CacheQueue_t4071215491, ____CurrentQueue_6)); }
	inline List_1_t4151060227 * get__CurrentQueue_6() const { return ____CurrentQueue_6; }
	inline List_1_t4151060227 ** get_address_of__CurrentQueue_6() { return &____CurrentQueue_6; }
	inline void set__CurrentQueue_6(List_1_t4151060227 * value)
	{
		____CurrentQueue_6 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentQueue_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
