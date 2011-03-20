#ifndef __COMMON_H
#define __COMMON_H

#include <pspkernel.h>
#include <pspctrl.h>
#include <pspdisplay.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "systemctrl_se.h"
#include "ui.h"
#include "blit.h"
#include "utils.h"

int menu_draw(void);
int menu_setup(void);
int menu_ctrl(u32 button_on);

int cpu2no(int cpu);
int bus2no(int cpu);
void change_clock(int dir , int flag);
void change_usb(int dir );
void change_umd_mode(int dir );
void change_plugins(int dir , int flag);
void change_bool_option(int *p, int direction);
void change_region(int dir, int max);

#define scePaf_967A56EF_strlen scePaf_strlen
#define scePaf_6439FDBC_memset scePaf_memset
#define scePaf_B6ADE52D_memcmp scePaf_memcmp
#define scePaf_11EFC5FD_sprintf scePaf_sprintf
#define scePaf_15AFC8D3_snprintf scePaf_snprintf
#define scePaf_6BD7452C_memcpy scePaf_memcpy
#define scePaf_98DE3BA6_strcpy scePaf_strcpy

int scePaf_967A56EF_strlen(const char *path);
int scePaf_6439FDBC_memset(void *buff ,int c ,int size);
int scePaf_B6ADE52D_memcmp(const void *path , const void *name , int c);
int scePaf_11EFC5FD_sprintf(char *buffer , const char *format , ...);
int scePaf_15AFC8D3_snprintf(char *buffer,int c , const char *format, ...);
int scePaf_6BD7452C_memcpy(void *path , void *name , int size);
int scePaf_98DE3BA6_strcpy(char *path , const char *name);

int scePaf_strlen_620(const char *path);
int scePaf_memset_620(void *buff ,int c ,int size);
int scePaf_memcmp_620(const void *path , const void *name , int c);
int scePaf_sprintf_620(char *buffer , const char *format , ...);
int scePaf_snprintf_620(char *buffer,int c , const char *format, ...);
int scePaf_memcpy_620(void *path , void *name , int size);
int scePaf_strcpy_620(char *path , const char *name);

extern u32 psp_fw_version;

#endif
