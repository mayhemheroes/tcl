/* 
 * tclIntStubs.c --
 *
 *	This file contains the wrapper functions for the platform independent
 *	unsupported Tcl API.
 *
 * Copyright (c) 1998-1999 by Scriptics Corporation.
 * All rights reserved.
 *
 * RCS: @(#) $Id: tclIntStubs.c,v 1.3.2.3 1999/03/12 23:29:17 surles Exp $
 */

#include "tclInt.h"

/*
 * WARNING: This file is automatically generated by the tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the generic/tclInt.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported stub functions:
 */

/* Slot 0 */
int
TclAccess(path, mode)
    CONST char * path;
    int mode;
{
    return (tclIntStubsPtr->tclAccess)(path, mode);
}

/* Slot 1 */
int
TclAccessDeleteProc(proc)
    TclAccessProc_ * proc;
{
    return (tclIntStubsPtr->tclAccessDeleteProc)(proc);
}

/* Slot 2 */
int
TclAccessInsertProc(proc)
    TclAccessProc_ * proc;
{
    return (tclIntStubsPtr->tclAccessInsertProc)(proc);
}

/* Slot 3 */
void
TclAllocateFreeObjects()
{
    (tclIntStubsPtr->tclAllocateFreeObjects)();
}

/* Slot 4 is reserved */
/* Slot 5 */
int
TclCleanupChildren(interp, numPids, pidPtr, errorChan)
    Tcl_Interp * interp;
    int numPids;
    Tcl_Pid * pidPtr;
    Tcl_Channel errorChan;
{
    return (tclIntStubsPtr->tclCleanupChildren)(interp, numPids, pidPtr, errorChan);
}

/* Slot 6 */
void
TclCleanupCommand(cmdPtr)
    Command * cmdPtr;
{
    (tclIntStubsPtr->tclCleanupCommand)(cmdPtr);
}

/* Slot 7 */
int
TclCopyAndCollapse(count, src, dst)
    int count;
    CONST char * src;
    char * dst;
{
    return (tclIntStubsPtr->tclCopyAndCollapse)(count, src, dst);
}

/* Slot 8 */
int
TclCopyChannel(interp, inChan, outChan, toRead, cmdPtr)
    Tcl_Interp * interp;
    Tcl_Channel inChan;
    Tcl_Channel outChan;
    int toRead;
    Tcl_Obj * cmdPtr;
{
    return (tclIntStubsPtr->tclCopyChannel)(interp, inChan, outChan, toRead, cmdPtr);
}

/* Slot 9 */
int
TclCreatePipeline(interp, argc, argv, pidArrayPtr, inPipePtr, outPipePtr, errFilePtr)
    Tcl_Interp * interp;
    int argc;
    char ** argv;
    Tcl_Pid ** pidArrayPtr;
    TclFile * inPipePtr;
    TclFile * outPipePtr;
    TclFile * errFilePtr;
{
    return (tclIntStubsPtr->tclCreatePipeline)(interp, argc, argv, pidArrayPtr, inPipePtr, outPipePtr, errFilePtr);
}

/* Slot 10 */
int
TclCreateProc(interp, nsPtr, procName, argsPtr, bodyPtr, procPtrPtr)
    Tcl_Interp * interp;
    Namespace * nsPtr;
    char * procName;
    Tcl_Obj * argsPtr;
    Tcl_Obj * bodyPtr;
    Proc ** procPtrPtr;
{
    return (tclIntStubsPtr->tclCreateProc)(interp, nsPtr, procName, argsPtr, bodyPtr, procPtrPtr);
}

/* Slot 11 */
void
TclDeleteCompiledLocalVars(iPtr, framePtr)
    Interp * iPtr;
    CallFrame * framePtr;
{
    (tclIntStubsPtr->tclDeleteCompiledLocalVars)(iPtr, framePtr);
}

/* Slot 12 */
void
TclDeleteVars(iPtr, tablePtr)
    Interp * iPtr;
    Tcl_HashTable * tablePtr;
{
    (tclIntStubsPtr->tclDeleteVars)(iPtr, tablePtr);
}

/* Slot 13 */
int
TclDoGlob(interp, separators, headPtr, tail)
    Tcl_Interp * interp;
    char * separators;
    Tcl_DString * headPtr;
    char * tail;
{
    return (tclIntStubsPtr->tclDoGlob)(interp, separators, headPtr, tail);
}

/* Slot 14 */
void
TclDumpMemoryInfo(outFile)
    FILE * outFile;
{
    (tclIntStubsPtr->tclDumpMemoryInfo)(outFile);
}

/* Slot 15 is reserved */
/* Slot 16 */
void
TclExprFloatError(interp, value)
    Tcl_Interp * interp;
    double value;
{
    (tclIntStubsPtr->tclExprFloatError)(interp, value);
}

/* Slot 17 */
int
TclFileAttrsCmd(interp, objc, objv)
    Tcl_Interp * interp;
    int objc;
    Tcl_Obj *CONST objv[];
{
    return (tclIntStubsPtr->tclFileAttrsCmd)(interp, objc, objv);
}

/* Slot 18 */
int
TclFileCopyCmd(interp, argc, argv)
    Tcl_Interp * interp;
    int argc;
    char ** argv;
{
    return (tclIntStubsPtr->tclFileCopyCmd)(interp, argc, argv);
}

/* Slot 19 */
int
TclFileDeleteCmd(interp, argc, argv)
    Tcl_Interp * interp;
    int argc;
    char ** argv;
{
    return (tclIntStubsPtr->tclFileDeleteCmd)(interp, argc, argv);
}

/* Slot 20 */
int
TclFileMakeDirsCmd(interp, argc, argv)
    Tcl_Interp * interp;
    int argc;
    char ** argv;
{
    return (tclIntStubsPtr->tclFileMakeDirsCmd)(interp, argc, argv);
}

/* Slot 21 */
int
TclFileRenameCmd(interp, argc, argv)
    Tcl_Interp * interp;
    int argc;
    char ** argv;
{
    return (tclIntStubsPtr->tclFileRenameCmd)(interp, argc, argv);
}

/* Slot 22 */
int
TclFindElement(interp, list, listLength, elementPtr, nextPtr, sizePtr, bracePtr)
    Tcl_Interp * interp;
    CONST char * list;
    int listLength;
    CONST char ** elementPtr;
    CONST char ** nextPtr;
    int * sizePtr;
    int * bracePtr;
{
    return (tclIntStubsPtr->tclFindElement)(interp, list, listLength, elementPtr, nextPtr, sizePtr, bracePtr);
}

/* Slot 23 */
Proc *
TclFindProc(iPtr, procName)
    Interp * iPtr;
    char * procName;
{
    return (tclIntStubsPtr->tclFindProc)(iPtr, procName);
}

/* Slot 24 */
int
TclFormatInt(buffer, n)
    char * buffer;
    long n;
{
    return (tclIntStubsPtr->tclFormatInt)(buffer, n);
}

/* Slot 25 */
void
TclFreePackageInfo(iPtr)
    Interp * iPtr;
{
    (tclIntStubsPtr->tclFreePackageInfo)(iPtr);
}

/* Slot 26 is reserved */
/* Slot 27 */
int
TclGetDate(p, now, zone, timePtr)
    char * p;
    unsigned long now;
    long zone;
    unsigned long * timePtr;
{
    return (tclIntStubsPtr->tclGetDate)(p, now, zone, timePtr);
}

/* Slot 28 */
Tcl_Channel
TclpGetDefaultStdChannel(type)
    int type;
{
    return (tclIntStubsPtr->tclpGetDefaultStdChannel)(type);
}

/* Slot 29 */
Tcl_Obj *
TclGetElementOfIndexedArray(interp, localIndex, elemPtr, leaveErrorMsg)
    Tcl_Interp * interp;
    int localIndex;
    Tcl_Obj * elemPtr;
    int leaveErrorMsg;
{
    return (tclIntStubsPtr->tclGetElementOfIndexedArray)(interp, localIndex, elemPtr, leaveErrorMsg);
}

/* Slot 30 is reserved */
/* Slot 31 */
char *
TclGetExtension(name)
    char * name;
{
    return (tclIntStubsPtr->tclGetExtension)(name);
}

/* Slot 32 */
int
TclGetFrame(interp, string, framePtrPtr)
    Tcl_Interp * interp;
    char * string;
    CallFrame ** framePtrPtr;
{
    return (tclIntStubsPtr->tclGetFrame)(interp, string, framePtrPtr);
}

/* Slot 33 */
TclCmdProcType
TclGetInterpProc()
{
    return (tclIntStubsPtr->tclGetInterpProc)();
}

/* Slot 34 */
int
TclGetIntForIndex(interp, objPtr, endValue, indexPtr)
    Tcl_Interp * interp;
    Tcl_Obj * objPtr;
    int endValue;
    int * indexPtr;
{
    return (tclIntStubsPtr->tclGetIntForIndex)(interp, objPtr, endValue, indexPtr);
}

/* Slot 35 */
Tcl_Obj *
TclGetIndexedScalar(interp, localIndex, leaveErrorMsg)
    Tcl_Interp * interp;
    int localIndex;
    int leaveErrorMsg;
{
    return (tclIntStubsPtr->tclGetIndexedScalar)(interp, localIndex, leaveErrorMsg);
}

/* Slot 36 */
int
TclGetLong(interp, string, longPtr)
    Tcl_Interp * interp;
    char * string;
    long * longPtr;
{
    return (tclIntStubsPtr->tclGetLong)(interp, string, longPtr);
}

/* Slot 37 */
int
TclGetLoadedPackages(interp, targetName)
    Tcl_Interp * interp;
    char * targetName;
{
    return (tclIntStubsPtr->tclGetLoadedPackages)(interp, targetName);
}

/* Slot 38 */
int
TclGetNamespaceForQualName(interp, qualName, cxtNsPtr, flags, nsPtrPtr, altNsPtrPtr, actualCxtPtrPtr, simpleNamePtr)
    Tcl_Interp * interp;
    char * qualName;
    Namespace * cxtNsPtr;
    int flags;
    Namespace ** nsPtrPtr;
    Namespace ** altNsPtrPtr;
    Namespace ** actualCxtPtrPtr;
    char ** simpleNamePtr;
{
    return (tclIntStubsPtr->tclGetNamespaceForQualName)(interp, qualName, cxtNsPtr, flags, nsPtrPtr, altNsPtrPtr, actualCxtPtrPtr, simpleNamePtr);
}

/* Slot 39 */
TclObjCmdProcType
TclGetObjInterpProc()
{
    return (tclIntStubsPtr->tclGetObjInterpProc)();
}

/* Slot 40 */
int
TclGetOpenMode(interp, string, seekFlagPtr)
    Tcl_Interp * interp;
    char * string;
    int * seekFlagPtr;
{
    return (tclIntStubsPtr->tclGetOpenMode)(interp, string, seekFlagPtr);
}

/* Slot 41 */
Tcl_Command
TclGetOriginalCommand(command)
    Tcl_Command command;
{
    return (tclIntStubsPtr->tclGetOriginalCommand)(command);
}

/* Slot 42 */
char *
TclpGetUserHome(name, bufferPtr)
    CONST char * name;
    Tcl_DString * bufferPtr;
{
    return (tclIntStubsPtr->tclpGetUserHome)(name, bufferPtr);
}

/* Slot 43 */
int
TclGlobalInvoke(interp, argc, argv, flags)
    Tcl_Interp * interp;
    int argc;
    char ** argv;
    int flags;
{
    return (tclIntStubsPtr->tclGlobalInvoke)(interp, argc, argv, flags);
}

/* Slot 44 */
int
TclGuessPackageName(fileName, bufPtr)
    char * fileName;
    Tcl_DString * bufPtr;
{
    return (tclIntStubsPtr->tclGuessPackageName)(fileName, bufPtr);
}

/* Slot 45 */
int
TclHideUnsafeCommands(interp)
    Tcl_Interp * interp;
{
    return (tclIntStubsPtr->tclHideUnsafeCommands)(interp);
}

/* Slot 46 */
int
TclInExit()
{
    return (tclIntStubsPtr->tclInExit)();
}

/* Slot 47 */
Tcl_Obj *
TclIncrElementOfIndexedArray(interp, localIndex, elemPtr, incrAmount)
    Tcl_Interp * interp;
    int localIndex;
    Tcl_Obj * elemPtr;
    long incrAmount;
{
    return (tclIntStubsPtr->tclIncrElementOfIndexedArray)(interp, localIndex, elemPtr, incrAmount);
}

/* Slot 48 */
Tcl_Obj *
TclIncrIndexedScalar(interp, localIndex, incrAmount)
    Tcl_Interp * interp;
    int localIndex;
    long incrAmount;
{
    return (tclIntStubsPtr->tclIncrIndexedScalar)(interp, localIndex, incrAmount);
}

/* Slot 49 */
Tcl_Obj *
TclIncrVar2(interp, part1Ptr, part2Ptr, incrAmount, part1NotParsed)
    Tcl_Interp * interp;
    Tcl_Obj * part1Ptr;
    Tcl_Obj * part2Ptr;
    long incrAmount;
    int part1NotParsed;
{
    return (tclIntStubsPtr->tclIncrVar2)(interp, part1Ptr, part2Ptr, incrAmount, part1NotParsed);
}

/* Slot 50 */
void
TclInitCompiledLocals(interp, framePtr, nsPtr)
    Tcl_Interp * interp;
    CallFrame * framePtr;
    Namespace * nsPtr;
{
    (tclIntStubsPtr->tclInitCompiledLocals)(interp, framePtr, nsPtr);
}

/* Slot 51 */
int
TclInterpInit(interp)
    Tcl_Interp * interp;
{
    return (tclIntStubsPtr->tclInterpInit)(interp);
}

/* Slot 52 */
int
TclInvoke(interp, argc, argv, flags)
    Tcl_Interp * interp;
    int argc;
    char ** argv;
    int flags;
{
    return (tclIntStubsPtr->tclInvoke)(interp, argc, argv, flags);
}

/* Slot 53 */
int
TclInvokeObjectCommand(clientData, interp, argc, argv)
    ClientData clientData;
    Tcl_Interp * interp;
    int argc;
    char ** argv;
{
    return (tclIntStubsPtr->tclInvokeObjectCommand)(clientData, interp, argc, argv);
}

/* Slot 54 */
int
TclInvokeStringCommand(clientData, interp, objc, objv)
    ClientData clientData;
    Tcl_Interp * interp;
    int objc;
    Tcl_Obj *CONST objv[];
{
    return (tclIntStubsPtr->tclInvokeStringCommand)(clientData, interp, objc, objv);
}

/* Slot 55 */
Proc *
TclIsProc(cmdPtr)
    Command * cmdPtr;
{
    return (tclIntStubsPtr->tclIsProc)(cmdPtr);
}

/* Slot 56 is reserved */
/* Slot 57 is reserved */
/* Slot 58 */
Var *
TclLookupVar(interp, part1, part2, flags, msg, createPart1, createPart2, arrayPtrPtr)
    Tcl_Interp * interp;
    char * part1;
    char * part2;
    int flags;
    char * msg;
    int createPart1;
    int createPart2;
    Var ** arrayPtrPtr;
{
    return (tclIntStubsPtr->tclLookupVar)(interp, part1, part2, flags, msg, createPart1, createPart2, arrayPtrPtr);
}

/* Slot 59 */
int
TclpMatchFiles(interp, separators, dirPtr, pattern, tail)
    Tcl_Interp * interp;
    char * separators;
    Tcl_DString * dirPtr;
    char * pattern;
    char * tail;
{
    return (tclIntStubsPtr->tclpMatchFiles)(interp, separators, dirPtr, pattern, tail);
}

/* Slot 60 */
int
TclNeedSpace(start, end)
    char * start;
    char * end;
{
    return (tclIntStubsPtr->tclNeedSpace)(start, end);
}

/* Slot 61 */
Tcl_Obj *
TclNewProcBodyObj(procPtr)
    Proc * procPtr;
{
    return (tclIntStubsPtr->tclNewProcBodyObj)(procPtr);
}

/* Slot 62 */
int
TclObjCommandComplete(cmdPtr)
    Tcl_Obj * cmdPtr;
{
    return (tclIntStubsPtr->tclObjCommandComplete)(cmdPtr);
}

/* Slot 63 */
int
TclObjInterpProc(clientData, interp, objc, objv)
    ClientData clientData;
    Tcl_Interp * interp;
    int objc;
    Tcl_Obj *CONST objv[];
{
    return (tclIntStubsPtr->tclObjInterpProc)(clientData, interp, objc, objv);
}

/* Slot 64 */
int
TclObjInvoke(interp, objc, objv, flags)
    Tcl_Interp * interp;
    int objc;
    Tcl_Obj *CONST objv[];
    int flags;
{
    return (tclIntStubsPtr->tclObjInvoke)(interp, objc, objv, flags);
}

/* Slot 65 */
int
TclObjInvokeGlobal(interp, objc, objv, flags)
    Tcl_Interp * interp;
    int objc;
    Tcl_Obj *CONST objv[];
    int flags;
{
    return (tclIntStubsPtr->tclObjInvokeGlobal)(interp, objc, objv, flags);
}

/* Slot 66 */
int
TclOpenFileChannelDeleteProc(proc)
    TclOpenFileChannelProc_ * proc;
{
    return (tclIntStubsPtr->tclOpenFileChannelDeleteProc)(proc);
}

/* Slot 67 */
int
TclOpenFileChannelInsertProc(proc)
    TclOpenFileChannelProc_ * proc;
{
    return (tclIntStubsPtr->tclOpenFileChannelInsertProc)(proc);
}

/* Slot 68 */
int
TclpAccess(path, mode)
    CONST char * path;
    int mode;
{
    return (tclIntStubsPtr->tclpAccess)(path, mode);
}

/* Slot 69 */
char *
TclpAlloc(size)
    unsigned int size;
{
    return (tclIntStubsPtr->tclpAlloc)(size);
}

/* Slot 70 */
int
TclpCopyFile(source, dest)
    CONST char * source;
    CONST char * dest;
{
    return (tclIntStubsPtr->tclpCopyFile)(source, dest);
}

/* Slot 71 */
int
TclpCopyDirectory(source, dest, errorPtr)
    CONST char * source;
    CONST char * dest;
    Tcl_DString * errorPtr;
{
    return (tclIntStubsPtr->tclpCopyDirectory)(source, dest, errorPtr);
}

/* Slot 72 */
int
TclpCreateDirectory(path)
    CONST char * path;
{
    return (tclIntStubsPtr->tclpCreateDirectory)(path);
}

/* Slot 73 */
int
TclpDeleteFile(path)
    CONST char * path;
{
    return (tclIntStubsPtr->tclpDeleteFile)(path);
}

/* Slot 74 */
void
TclpFree(ptr)
    char * ptr;
{
    (tclIntStubsPtr->tclpFree)(ptr);
}

/* Slot 75 */
unsigned long
TclpGetClicks()
{
    return (tclIntStubsPtr->tclpGetClicks)();
}

/* Slot 76 */
unsigned long
TclpGetSeconds()
{
    return (tclIntStubsPtr->tclpGetSeconds)();
}

/* Slot 77 */
void
TclpGetTime(time)
    Tcl_Time * time;
{
    (tclIntStubsPtr->tclpGetTime)(time);
}

/* Slot 78 */
int
TclpGetTimeZone(time)
    unsigned long time;
{
    return (tclIntStubsPtr->tclpGetTimeZone)(time);
}

/* Slot 79 */
int
TclpListVolumes(interp)
    Tcl_Interp * interp;
{
    return (tclIntStubsPtr->tclpListVolumes)(interp);
}

/* Slot 80 */
Tcl_Channel
TclpOpenFileChannel(interp, fileName, modeString, permissions)
    Tcl_Interp * interp;
    char * fileName;
    char * modeString;
    int permissions;
{
    return (tclIntStubsPtr->tclpOpenFileChannel)(interp, fileName, modeString, permissions);
}

/* Slot 81 */
char *
TclpRealloc(ptr, size)
    char * ptr;
    unsigned int size;
{
    return (tclIntStubsPtr->tclpRealloc)(ptr, size);
}

/* Slot 82 */
int
TclpRemoveDirectory(path, recursive, errorPtr)
    CONST char * path;
    int recursive;
    Tcl_DString * errorPtr;
{
    return (tclIntStubsPtr->tclpRemoveDirectory)(path, recursive, errorPtr);
}

/* Slot 83 */
int
TclpRenameFile(source, dest)
    CONST char * source;
    CONST char * dest;
{
    return (tclIntStubsPtr->tclpRenameFile)(source, dest);
}

/* Slot 84 is reserved */
/* Slot 85 is reserved */
/* Slot 86 is reserved */
/* Slot 87 is reserved */
/* Slot 88 */
char *
TclPrecTraceProc(clientData, interp, name1, name2, flags)
    ClientData clientData;
    Tcl_Interp * interp;
    char * name1;
    char * name2;
    int flags;
{
    return (tclIntStubsPtr->tclPrecTraceProc)(clientData, interp, name1, name2, flags);
}

/* Slot 89 */
int
TclPreventAliasLoop(interp, cmdInterp, cmd)
    Tcl_Interp * interp;
    Tcl_Interp * cmdInterp;
    Tcl_Command cmd;
{
    return (tclIntStubsPtr->tclPreventAliasLoop)(interp, cmdInterp, cmd);
}

/* Slot 90 is reserved */
/* Slot 91 */
void
TclProcCleanupProc(procPtr)
    Proc * procPtr;
{
    (tclIntStubsPtr->tclProcCleanupProc)(procPtr);
}

/* Slot 92 */
int
TclProcCompileProc(interp, procPtr, bodyPtr, nsPtr, description, procName)
    Tcl_Interp * interp;
    Proc * procPtr;
    Tcl_Obj * bodyPtr;
    Namespace * nsPtr;
    CONST char * description;
    CONST char * procName;
{
    return (tclIntStubsPtr->tclProcCompileProc)(interp, procPtr, bodyPtr, nsPtr, description, procName);
}

/* Slot 93 */
void
TclProcDeleteProc(clientData)
    ClientData clientData;
{
    (tclIntStubsPtr->tclProcDeleteProc)(clientData);
}

/* Slot 94 */
int
TclProcInterpProc(clientData, interp, argc, argv)
    ClientData clientData;
    Tcl_Interp * interp;
    int argc;
    char ** argv;
{
    return (tclIntStubsPtr->tclProcInterpProc)(clientData, interp, argc, argv);
}

/* Slot 95 */
int
TclpStat(path, buf)
    CONST char * path;
    struct stat * buf;
{
    return (tclIntStubsPtr->tclpStat)(path, buf);
}

/* Slot 96 */
int
TclRenameCommand(interp, oldName, newName)
    Tcl_Interp * interp;
    char * oldName;
    char * newName;
{
    return (tclIntStubsPtr->tclRenameCommand)(interp, oldName, newName);
}

/* Slot 97 */
void
TclResetShadowedCmdRefs(interp, newCmdPtr)
    Tcl_Interp * interp;
    Command * newCmdPtr;
{
    (tclIntStubsPtr->tclResetShadowedCmdRefs)(interp, newCmdPtr);
}

/* Slot 98 */
int
TclServiceIdle()
{
    return (tclIntStubsPtr->tclServiceIdle)();
}

/* Slot 99 */
Tcl_Obj *
TclSetElementOfIndexedArray(interp, localIndex, elemPtr, objPtr, leaveErrorMsg)
    Tcl_Interp * interp;
    int localIndex;
    Tcl_Obj * elemPtr;
    Tcl_Obj * objPtr;
    int leaveErrorMsg;
{
    return (tclIntStubsPtr->tclSetElementOfIndexedArray)(interp, localIndex, elemPtr, objPtr, leaveErrorMsg);
}

/* Slot 100 */
Tcl_Obj *
TclSetIndexedScalar(interp, localIndex, objPtr, leaveErrorMsg)
    Tcl_Interp * interp;
    int localIndex;
    Tcl_Obj * objPtr;
    int leaveErrorMsg;
{
    return (tclIntStubsPtr->tclSetIndexedScalar)(interp, localIndex, objPtr, leaveErrorMsg);
}

/* Slot 101 is reserved */
/* Slot 102 */
void
TclSetupEnv(interp)
    Tcl_Interp * interp;
{
    (tclIntStubsPtr->tclSetupEnv)(interp);
}

/* Slot 103 */
int
TclSockGetPort(interp, string, proto, portPtr)
    Tcl_Interp * interp;
    char * string;
    char * proto;
    int * portPtr;
{
    return (tclIntStubsPtr->tclSockGetPort)(interp, string, proto, portPtr);
}

/* Slot 104 */
int
TclSockMinimumBuffers(sock, size)
    int sock;
    int size;
{
    return (tclIntStubsPtr->tclSockMinimumBuffers)(sock, size);
}

/* Slot 105 */
int
TclStat(path, buf)
    CONST char * path;
    TclStat_ * buf;
{
    return (tclIntStubsPtr->tclStat)(path, buf);
}

/* Slot 106 */
int
TclStatDeleteProc(proc)
    TclStatProc_ * proc;
{
    return (tclIntStubsPtr->tclStatDeleteProc)(proc);
}

/* Slot 107 */
int
TclStatInsertProc(proc)
    TclStatProc_ * proc;
{
    return (tclIntStubsPtr->tclStatInsertProc)(proc);
}

/* Slot 108 */
void
TclTeardownNamespace(nsPtr)
    Namespace * nsPtr;
{
    (tclIntStubsPtr->tclTeardownNamespace)(nsPtr);
}

/* Slot 109 */
int
TclUpdateReturnInfo(iPtr)
    Interp * iPtr;
{
    return (tclIntStubsPtr->tclUpdateReturnInfo)(iPtr);
}

/* Slot 110 is reserved */
/* Slot 111 */
void
Tcl_AddInterpResolvers(interp, name, cmdProc, varProc, compiledVarProc)
    Tcl_Interp * interp;
    char * name;
    Tcl_ResolveCmdProc * cmdProc;
    Tcl_ResolveVarProc * varProc;
    Tcl_ResolveCompiledVarProc * compiledVarProc;
{
    (tclIntStubsPtr->tcl_AddInterpResolvers)(interp, name, cmdProc, varProc, compiledVarProc);
}

/* Slot 112 */
int
Tcl_AppendExportList(interp, nsPtr, objPtr)
    Tcl_Interp * interp;
    Tcl_Namespace * nsPtr;
    Tcl_Obj * objPtr;
{
    return (tclIntStubsPtr->tcl_AppendExportList)(interp, nsPtr, objPtr);
}

/* Slot 113 */
Tcl_Namespace *
Tcl_CreateNamespace(interp, name, clientData, deleteProc)
    Tcl_Interp * interp;
    char * name;
    ClientData clientData;
    Tcl_NamespaceDeleteProc * deleteProc;
{
    return (tclIntStubsPtr->tcl_CreateNamespace)(interp, name, clientData, deleteProc);
}

/* Slot 114 */
void
Tcl_DeleteNamespace(nsPtr)
    Tcl_Namespace * nsPtr;
{
    (tclIntStubsPtr->tcl_DeleteNamespace)(nsPtr);
}

/* Slot 115 */
int
Tcl_Export(interp, nsPtr, pattern, resetListFirst)
    Tcl_Interp * interp;
    Tcl_Namespace * nsPtr;
    char * pattern;
    int resetListFirst;
{
    return (tclIntStubsPtr->tcl_Export)(interp, nsPtr, pattern, resetListFirst);
}

/* Slot 116 */
Tcl_Command
Tcl_FindCommand(interp, name, contextNsPtr, flags)
    Tcl_Interp * interp;
    char * name;
    Tcl_Namespace * contextNsPtr;
    int flags;
{
    return (tclIntStubsPtr->tcl_FindCommand)(interp, name, contextNsPtr, flags);
}

/* Slot 117 */
Tcl_Namespace *
Tcl_FindNamespace(interp, name, contextNsPtr, flags)
    Tcl_Interp * interp;
    char * name;
    Tcl_Namespace * contextNsPtr;
    int flags;
{
    return (tclIntStubsPtr->tcl_FindNamespace)(interp, name, contextNsPtr, flags);
}

/* Slot 118 */
int
Tcl_GetInterpResolvers(interp, name, resInfo)
    Tcl_Interp * interp;
    char * name;
    Tcl_ResolverInfo * resInfo;
{
    return (tclIntStubsPtr->tcl_GetInterpResolvers)(interp, name, resInfo);
}

/* Slot 119 */
int
Tcl_GetNamespaceResolvers(namespacePtr, resInfo)
    Tcl_Namespace * namespacePtr;
    Tcl_ResolverInfo * resInfo;
{
    return (tclIntStubsPtr->tcl_GetNamespaceResolvers)(namespacePtr, resInfo);
}

/* Slot 120 */
Tcl_Var
Tcl_FindNamespaceVar(interp, name, contextNsPtr, flags)
    Tcl_Interp * interp;
    char * name;
    Tcl_Namespace * contextNsPtr;
    int flags;
{
    return (tclIntStubsPtr->tcl_FindNamespaceVar)(interp, name, contextNsPtr, flags);
}

/* Slot 121 */
int
Tcl_ForgetImport(interp, nsPtr, pattern)
    Tcl_Interp * interp;
    Tcl_Namespace * nsPtr;
    char * pattern;
{
    return (tclIntStubsPtr->tcl_ForgetImport)(interp, nsPtr, pattern);
}

/* Slot 122 */
Tcl_Command
Tcl_GetCommandFromObj(interp, objPtr)
    Tcl_Interp * interp;
    Tcl_Obj * objPtr;
{
    return (tclIntStubsPtr->tcl_GetCommandFromObj)(interp, objPtr);
}

/* Slot 123 */
void
Tcl_GetCommandFullName(interp, command, objPtr)
    Tcl_Interp * interp;
    Tcl_Command command;
    Tcl_Obj * objPtr;
{
    (tclIntStubsPtr->tcl_GetCommandFullName)(interp, command, objPtr);
}

/* Slot 124 */
Tcl_Namespace *
Tcl_GetCurrentNamespace(interp)
    Tcl_Interp * interp;
{
    return (tclIntStubsPtr->tcl_GetCurrentNamespace)(interp);
}

/* Slot 125 */
Tcl_Namespace *
Tcl_GetGlobalNamespace(interp)
    Tcl_Interp * interp;
{
    return (tclIntStubsPtr->tcl_GetGlobalNamespace)(interp);
}

/* Slot 126 */
void
Tcl_GetVariableFullName(interp, variable, objPtr)
    Tcl_Interp * interp;
    Tcl_Var variable;
    Tcl_Obj * objPtr;
{
    (tclIntStubsPtr->tcl_GetVariableFullName)(interp, variable, objPtr);
}

/* Slot 127 */
int
Tcl_Import(interp, nsPtr, pattern, allowOverwrite)
    Tcl_Interp * interp;
    Tcl_Namespace * nsPtr;
    char * pattern;
    int allowOverwrite;
{
    return (tclIntStubsPtr->tcl_Import)(interp, nsPtr, pattern, allowOverwrite);
}

/* Slot 128 */
void
Tcl_PopCallFrame(interp)
    Tcl_Interp* interp;
{
    (tclIntStubsPtr->tcl_PopCallFrame)(interp);
}

/* Slot 129 */
int
Tcl_PushCallFrame(interp, framePtr, nsPtr, isProcCallFrame)
    Tcl_Interp* interp;
    Tcl_CallFrame * framePtr;
    Tcl_Namespace * nsPtr;
    int isProcCallFrame;
{
    return (tclIntStubsPtr->tcl_PushCallFrame)(interp, framePtr, nsPtr, isProcCallFrame);
}

/* Slot 130 */
int
Tcl_RemoveInterpResolvers(interp, name)
    Tcl_Interp * interp;
    char * name;
{
    return (tclIntStubsPtr->tcl_RemoveInterpResolvers)(interp, name);
}

/* Slot 131 */
void
Tcl_SetNamespaceResolvers(namespacePtr, cmdProc, varProc, compiledVarProc)
    Tcl_Namespace * namespacePtr;
    Tcl_ResolveCmdProc * cmdProc;
    Tcl_ResolveVarProc * varProc;
    Tcl_ResolveCompiledVarProc * compiledVarProc;
{
    (tclIntStubsPtr->tcl_SetNamespaceResolvers)(namespacePtr, cmdProc, varProc, compiledVarProc);
}

/* Slot 132 */
int
TclpHasSockets(interp)
    Tcl_Interp * interp;
{
    return (tclIntStubsPtr->tclpHasSockets)(interp);
}

/* Slot 133 */
struct tm *
TclpGetDate(time, useGMT)
    TclpTime_t time;
    int useGMT;
{
    return (tclIntStubsPtr->tclpGetDate)(time, useGMT);
}

/* Slot 134 */
size_t
TclpStrftime(s, maxsize, format, t)
    char * s;
    size_t maxsize;
    const char * format;
    const struct tm * t;
{
    return (tclIntStubsPtr->tclpStrftime)(s, maxsize, format, t);
}

/* Slot 135 */
int
TclpCheckStackSpace()
{
    return (tclIntStubsPtr->tclpCheckStackSpace)();
}

/* Slot 136 is reserved */
/* Slot 137 */
int
TclpChdir(dirName)
    CONST char * dirName;
{
    return (tclIntStubsPtr->tclpChdir)(dirName);
}

/* Slot 138 */
char *
TclGetEnv(name, valuePtr)
    CONST char * name;
    Tcl_DString * valuePtr;
{
    return (tclIntStubsPtr->tclGetEnv)(name, valuePtr);
}

/* Slot 139 */
int
TclpLoadFile(interp, fileName, sym1, sym2, proc1Ptr, proc2Ptr, clientDataPtr)
    Tcl_Interp * interp;
    char * fileName;
    char * sym1;
    char * sym2;
    Tcl_PackageInitProc ** proc1Ptr;
    Tcl_PackageInitProc ** proc2Ptr;
    ClientData * clientDataPtr;
{
    return (tclIntStubsPtr->tclpLoadFile)(interp, fileName, sym1, sym2, proc1Ptr, proc2Ptr, clientDataPtr);
}

/* Slot 140 */
int
TclLooksLikeInt(bytes, length)
    char * bytes;
    int length;
{
    return (tclIntStubsPtr->tclLooksLikeInt)(bytes, length);
}


/* !END!: Do not edit above this line. */
