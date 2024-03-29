#ifndef _GSM_H_
#define _GSM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "lwip/netif.h"

#ifndef PPPOS_BUFFER_SIZE
#define PPPOS_BUFFER_SIZE (1024)
#endif


void PPPOS_init(int txPin, int rxPin, int baudrate, int uart_number, char* user, char* pass);

bool PPPOS_isConnected();

void PPPOS_start();

struct netif *PPPOS_getNetif();

bool PPPOS_status();

void PPPOS_stop();

void PPPOS_write(char* cmd);

char* PPPOS_read();

#ifdef __cplusplus
}
#endif
#endif
