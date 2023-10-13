#pragma once

#define VPW_PROFILE(call) int64 TimeBefore = FDateTime::Now().GetTicks(); \
	call; \
	UE_LOG(VPWProfiler, Log, TEXT("[VPWProfiler] %lld"), FDateTime::Now().GetTicks() - TimeBefore);
