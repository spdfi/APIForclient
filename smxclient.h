#ifndef SMXCLIENT_H
#define SMXCLIENT_H

#ifdef DLL_BUILD
#define SMXAPI __declspec(dllexport)
#else
#define SMXAPI __declspec(dllimport)
#endif

#define SMXCALL __cdecl

#ifdef __cplusplus
extern "C"
{
#endif
// APIs for SpeedMetrix. Use *BEGIN* APIs to start metrix collections
// *END* APIs for stopping and reporting metrics to the SMX Server.
// BEGIN APIs always return without delays and can be used safely without
// any bearing on added latency. 

// SDT = Service Setup Time
SMXAPI void SMXCALL SMX_Begin_SST(void);
SMXAPI void SMXCALL SMX_End_SST(void);

// SPT = Service Processing Time
SMXAPI void SMXCALL SMX_Begin_SPT(void);
SMXAPI void SMXCALL SMX_End_SPT(void);

// CUT = Context Update Time.
SMXAPI void SMXCALL SMX_Begin_CUT(void);
SMXAPI void SMXCALL SMX_End_CUT(void);


#ifdef __cplusplus
} 
#endif
#endif /* SMXCLIENT_H */
