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

	///*
	//4DLL
	// SDT = Service Setup Time
	SMXAPI void SMXCALL SMX_Begin_SST(void);
	SMXAPI void SMXCALL SMX_End_SST(void);

	// SPT = Service Processing Time
	SMXAPI void SMXCALL SMX_Begin_SPT(void);
	SMXAPI void SMXCALL SMX_End_SPT(void);

	// CUT = Context Update Time.
	SMXAPI void SMXCALL SMX_Begin_CUT(void);
	SMXAPI void SMXCALL SMX_End_CUT(void);

	//$ CST = Custom Update .
	SMXAPI void SMXCALL SMX_Begin_CUS(void);
	SMXAPI void SMXCALL SMX_End_CUS(const char *);

	//$ Measurement with URL
	SMXAPI void SMXCALL SMX_Begin_MEAS(const char *);
	SMXAPI void SMXCALL SMX_End_MEAS();
	//*/

	/* 
	//4sharedLib
	// SDT = Service Setup Time
	 void SMXCALL SMX_Begin_SST(void);
	 void SMXCALL SMX_End_SST(void);
	// SPT = Service Processing Time
	 void SMXCALL SMX_Begin_SPT(void);
	 void SMXCALL SMX_End_SPT(void);
	// CUT = Context Update Time.
	 void SMXCALL SMX_Begin_CUT(void);
	 void SMXCALL SMX_End_CUT(void);
	//$ CST = Custom Update .
	 void SMXCALL SMX_Begin_CUS(void);
	 void SMXCALL SMX_End_CUS(const char *);
	 //$ Measurement with URL
	 void SMX_Begin_MEAS(const char *);
	 void SMX_End_MEAS(const char *);
	*/

#ifdef __cplusplus
}
#endif
#endif /* SMXCLIENT_H */
