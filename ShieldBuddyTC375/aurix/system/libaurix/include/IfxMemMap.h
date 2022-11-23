/*
 * Hightec Aurix GCC Compiler section attributes
 *
 * a allocatable. This is always set
 * B uninitialized
 * w writable
 * x executable
 * s using small addressing
 * z using absolute addressing section
 *
 */

/* Macros to encapsulate #pragma section */
#define BEGIN_DATA_SECTION(sec, cflags) DATA_SECTION(section #sec  cflags)
#define DATA_SECTION(sec) _Pragma(#sec)
#define END_SECTION DATA_SECTION(section)

/* Macros for allowing easy placement of data in local data scratchpad RAM (DSPR) */
/* CPU0 */
#define StartOfUninitialised_CPU0_Variables BEGIN_DATA_SECTION(int_dsprcpu0.CPU0.bss, awBc0)
#define EndOfUninitialised_CPU0_Variables END_SECTION

#define StartOfInitialised_CPU0_Variables BEGIN_DATA_SECTION(int_dsprcpu0.CPU0.data, awc0)
#define EndOfInitialised_CPU0_Variables END_SECTION

/* CPU1 */
#define StartOfUninitialised_CPU1_Variables BEGIN_DATA_SECTION(int_dsprcpu1.CPU1.bss, awBc1)
#define EndOfUninitialised_CPU1_Variables END_SECTION

#define StartOfInitialised_CPU1_Variables BEGIN_DATA_SECTION(int_dsprcpu1.CPU1.data, awc1)
#define EndOfInitialised_CPU1_Variables END_SECTION

/* CPU2 */
#define StartOfUninitialised_CPU2_Variables BEGIN_DATA_SECTION(int_dsprcpu2.CPU2.bss, awBc2)
#define EndOfUninitialised_CPU2_Variables END_SECTION

#define StartOfInitialised_CPU2_Variables BEGIN_DATA_SECTION(int_dsprcpu2.CPU2.data, awc2)
#define EndOfInitialised_CPU2_Variables END_SECTION

/* DLMU0 Core0 */
/* DLMU0 uninitialised data */
#define StartOfUninitialised_DLMU0Ram_Variables BEGIN_DATA_SECTION(.sbss.dlmu0, awsB) /* Default flags from linker */
#define EndOfUninitialised_DLMU0Ram_Variables END_SECTION

/* DLMU0 uninitialised data */
#define StartOfInitialised_DLMU0Ram_Variables BEGIN_DATA_SECTION(.sdata.dlmu0, aws)
#define EndOfInitialised_DLMU0Ram_Variables END_SECTION

/* DLMU1 Core1 */
/* DLMU1 uninitialised data */
#define StartOfUninitialised_DLMU1Ram_Variables BEGIN_DATA_SECTION(.sbss.dlmu1, awsB) /* Default flags from linker */
#define EndOfUninitialised_DLMU1Ram_Variables END_SECTION

/* DLMU1 uninitialised data */
#define StartOfInitialised_DLMU1Ram_Variables BEGIN_DATA_SECTION(.sdata.dlmu1, aws)
#define EndOfInitialised_DLMU1Ram_Variables END_SECTION

/* DLMU2 Core2 */
/* DLMU2 uninitialised data */
#define StartOfUninitialised_DLMU2Ram_Variables BEGIN_DATA_SECTION(.sbss.dlmu2, awsB) /* Default flags from linker aws? */
#define EndOfUninitialised_DLMU2Ram_Variables END_SECTION

/* DLMU1 uninitialised data */
#define StartOfInitialised_DLMU2Ram_Variables BEGIN_DATA_SECTION(.sdata.dlmu2, aws)  // awsl?
#define EndOfInitialised_DLMU2Ram_Variables END_SECTION


/* DAM RAM */
/* DAM RAM uninitialised data */
#define StartOfUninitialised_DAMRam_Variables BEGIN_DATA_SECTION(.sbss3.dam, awsB) /* Default flags from linker */
#define EndOfUninitialised_DAMRam_Variables END_SECTION

/* DAM RAM uninitialised data */
#define StartOfInitialised_DAMRam_Variables BEGIN_DATA_SECTION(.sdata3.dam, aws)
#define EndOfInitialised_DAMRam_Variables END_SECTION


/* Reduce optimisation to 0 for debugging purposes */
//#pragma GCC optimize "-O0"
