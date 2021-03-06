//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDYThreadTracer : NSObject
{
}

+ (id)suspendAndBacktraceThread:(unsigned int)arg1;
+ (void)getCallstack:(id *)arg1 andName:(id *)arg2 ofThread:(unsigned int)arg3;
+ (void)getThreadCallStacksWithThread:(unsigned int)arg1 CallStacks:(id *)arg2 andNames:(id *)arg3 cpuUsage:(id *)arg4;
+ (void)getAllThreadCpuUsage:(id *)arg1;
+ (void)getThreadCallstacks:(id *)arg1 andNames:(id *)arg2 cpuUsage:(id *)arg3 threadAddress:(id *)arg4 withReportMask:(unsigned long long)arg5;
+ (id)generateTraceReport:(unsigned long long)arg1 needSymbolicated:(_Bool)arg2;
+ (id)generateTraceReportWithThread:(unsigned int)arg1;
+ (id)generateTraceReport:(unsigned long long)arg1;
+ (id)generateTraceReportWithAppVersion:(id)arg1 ReportMask:(unsigned long long)arg2;
+ (id)getCurrentMemoryInfo;
+ (id)getMainStackTrace;
+ (id)backtraceAndSymbolicateThread:(unsigned int)arg1;
+ (id)backtraceThread:(unsigned int)arg1;
+ (id)formatBinaryImages:(id)arg1 isLp64:(int)arg2 dicImage:(id)arg3;
+ (id)formattedBinaryImages:(id)arg1;
+ (_Bool)doesImage:(id)arg1 containAddress:(unsigned long long)arg2;
+ (id)findImageContainingAddr:(unsigned long long)arg1 fromLoadedBinaryImages:(id)arg2;
+ (id)formatThreadCallstacks:(id)arg1 withLoadedBinaryImages:(id)arg2 needSymbolicated:(_Bool)arg3 isLp64:(int)arg4;
+ (id)formatThreadCallstacks:(id)arg1 withLoadedBinaryImages:(id)arg2;
+ (id)formatThreadCallstacks:(id)arg1;
+ (int)islp64;
+ (id)cpuArchType;
+ (unsigned long long)memoryUsageOfTask:(unsigned int)arg1;
+ (float)cpuUsageOfThread:(unsigned int)arg1;
+ (id)systemInfo;
+ (id)deviceName;
+ (id)formattedDeviceInfo;

@end

