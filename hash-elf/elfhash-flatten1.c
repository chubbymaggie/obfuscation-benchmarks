/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int scanf(char const   *format  , ...) ;
int main(int argc , char **argv ) ;
extern int fclose(void *stream ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void abort() ;
extern int rand() ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
unsigned int ELFHash(char *str , unsigned int len ) ;
extern void signal(int sig , void *func ) ;
extern int raise(int sig ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void *malloc(unsigned long size ) ;
typedef unsigned long size_t;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern double strtod(char const   *str , char const   *endptr ) ;
typedef struct _IO_FILE FILE;
extern void exit(int status ) ;
void megaInit(void) ;
unsigned int ELFHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int x ;
  unsigned int i ;
  unsigned long _1_ELFHash_next ;

  {
  _1_ELFHash_next = 8;
  while (1) {
    switch (_1_ELFHash_next) {
    case 8: 
    hash = 0U;
    x = 0U;
    i = 0U;
    i = 0U;
    _1_ELFHash_next = 6;
    break;
    case 6: ;
    if (i < len) {
      _1_ELFHash_next = 4;
    } else {
      _1_ELFHash_next = 0;
    }
    break;
    case 4: 
    hash = (hash << 4) + (unsigned int )*str;
    x = (unsigned int )((long )hash & 4026531840L);
    _1_ELFHash_next = 3;
    break;
    case 3: ;
    if (x != 0U) {
      _1_ELFHash_next = 2;
    } else {
      _1_ELFHash_next = 1;
    }
    break;
    case 2: 
    hash ^= x >> 24;
    _1_ELFHash_next = 1;
    break;
    case 1: 
    hash &= ~ x;
    str ++;
    i ++;
    _1_ELFHash_next = 6;
    break;
    case 0: ;
    return (hash);
    break;
    }
  }
}
}
void megaInit(void) 
{ 


  {

}
}
int main(int argc , char **argv ) 
{ 
  unsigned char *str ;
  unsigned int hash ;
  size_t tmp ;
  unsigned int tmp___0 ;

  {
  megaInit();
  str = (unsigned char *)*(argv + 1);
  tmp = strlen((char const   *)str);
  tmp___0 = ELFHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 184139465U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
