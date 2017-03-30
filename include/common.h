#ifndef __COMMON_H__
#define __COMMON_H__
#ifdef __cplusplus
extern "C" {
#endif
#define VERBOSE_NONE  (0)
#define VERBOSE_ERROR (1)
#define VERBOSE_INFO  (2)
#define VERBOSE_DEBUG (3)

#include <user_config.h>
#include "wibbq_config.h"

#ifndef PRINT_LEVEL
#define PRINT_LEVEL VERBOSE_NONE
#endif /* PRINT_LEVEL */

#define DBG_BASE(pre,fmt,args...) do{m_printf("%-30s:%04d:%-20s(): DBG " pre fmt "\n", __FILE__, __LINE__, __FUNCTION__, ##args);}while(0)
#define INF_BASE(pre,fmt,args...) do{m_printf("%-30s:%04d:%-20s(): INF " pre fmt "\n", __FILE__, __LINE__, __FUNCTION__, ##args);}while(0)
#define ERR_BASE(pre,fmt,args...) do{m_printf("%-30s:%04d:%-20s(): ERR " pre fmt "\n", __FILE__, __LINE__, __FUNCTION__, ##args);}while(0)

#if PRINT_LEVEL >= VERBOSE_DEBUG
#define DBG(fmt,args...) DBG_BASE("", fmt, ##args)
#define DBG1(fmt,args...) DBG_BASE("   ", fmt, ##args)
#define DBG2(fmt,args...) DBG_BASE("      ", fmt, ##args)
#define DBG_HEX_DUMP(_buf,_len) do{ \
                           m_printf("%-30s:%04d:%-20s(): DBG ", __FILE__, __LINE__, __FUNCTION__); \
                           print_hex_arr(_buf,_len); \
                           m_printf("\n");}while(0)
#else
#define DBG(fmt,args...)
#define DBG1(fmt,args...)
#define DBG2(fmt,args...)
#define DBG_HEX_DUMP(_buf,_len)
#endif /* PRINT_LEVEL >= VERBOSE_DEBUG */

#if PRINT_LEVEL >= VERBOSE_INFO
#define INF(fmt,args...) INF_BASE("", fmt, ##args)
#define INF1(fmt,args...) INF_BASE("   ", fmt, ##args)
#define INF2(fmt,args...) INF_BASE("      ", fmt, ##args)
#define INF3(fmt,args...) INF_BASE("         ", fmt, ##args)
#else
#define INF(fmt,args...)
#define INF1(fmt,args...)
#define INF2(fmt,args...)
#define INF3(fmt,args...)
#endif /* PRINT_LEVEL >= VERBOSE_INFO */

#if PRINT_LEVEL >= VERBOSE_ERROR
#define ERR(fmt,args...) ERR_BASE("", fmt, ##args)
#define ERR1(fmt,args...) ERR_BASE("   ", fmt, ##args)
#define ERR2(fmt,args...) ERR_BASE("      ", fmt, ##args)
#else
#define ERR(fmt,args...)
#define ERR1(fmt,args...)
#define ERR2(fmt,args...)
#endif /* PRINT_LEVEL >= VERBOSE_INFO */
#define debugfn(fmt, ...) m_printf(fmt, ##__VA_ARGS__)

///////////////////////////// PROTOTYPES //////////////////////////////////////////////////////////
void print_hex_arr(void *arr, int length);
#ifdef __cplusplus
}
#endif
#endif /* __COMMON_H__ */
