/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int scanf(char const   *format  , ...) ;
extern int fclose(void *stream ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
int main(int argc , char **argv ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
unsigned int JSHash(char *str , unsigned int len ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void abort() ;
extern int rand() ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int raise(int sig ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void signal(int sig , void *func ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
typedef unsigned long size_t;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern void *malloc(unsigned long size ) ;
typedef struct _IO_FILE FILE;
extern void exit(int status ) ;
void megaInit(void) ;
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
  tmp___0 = JSHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 302766813U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
unsigned int JSHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int i ;
  unsigned long _1_JSHash_next ;
  unsigned long _2_JSHash_next ;

  {
  _2_JSHash_next = 2;
  while (1) {
    switch (_2_JSHash_next) {
    case 17: 
    hash = 1315423911U;
    i = 0U;
    i = 0U;
    _2_JSHash_next = 16;
    break;
    case 16: 
    _1_JSHash_next = 3;
    _2_JSHash_next = 0;
    break;
    case 14: ;
    _2_JSHash_next = 13;
    break;
    case 13: ;
    if (i < len) {
      _2_JSHash_next = 12;
    } else {
      _2_JSHash_next = 11;
    }
    break;
    case 12: 
    _1_JSHash_next = 1;
    _2_JSHash_next = 0;
    break;
    case 11: 
    _1_JSHash_next = 0;
    _2_JSHash_next = 0;
    break;
    case 9: 
    hash ^= ((hash << 5) + (unsigned int )*str) + (hash >> 2);
    str ++;
    i ++;
    _2_JSHash_next = 8;
    break;
    case 8: 
    _1_JSHash_next = 3;
    _2_JSHash_next = 0;
    break;
    case 6: ;
    _2_JSHash_next = 5;
    break;
    case 5: ;
    return (hash);
    break;
    case 2: 
    _1_JSHash_next = 5;
    _2_JSHash_next = 0;
    break;
    case 0: ;
    switch (_1_JSHash_next) {
    case 0: 
    _2_JSHash_next = 6;
    break;
    case 1: 
    _2_JSHash_next = 9;
    break;
    case 3: 
    _2_JSHash_next = 14;
    break;
    case 5: 
    _2_JSHash_next = 17;
    break;
    default: 
    _2_JSHash_next = 0;
    break;
    }
    break;
    }
  }
}
}
