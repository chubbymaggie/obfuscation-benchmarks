/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int scanf(char const   *format  , ...) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int fclose(void *stream ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void abort() ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern int rand() ;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int raise(int sig ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
unsigned int APHash(char *str , unsigned int len ) ;
extern void *malloc(unsigned long size ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
typedef unsigned long size_t;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
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
  tmp___0 = APHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 37524292U) {
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
unsigned int APHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int i ;
  unsigned int tmp ;

  {
  hash = 2863311530U;
  i = 0U;
  i = 0U;
  while ((int )((((((~ (- i - 1U) | len) + (- i - 1U)) + 1U) & ~ ((~ (((i & len) - (i | len)) - 1U) | (((i & ~ len) + (i & ~ len)) - (i ^ len))) - ~ (((i & len) - (i | len)) - 1U))) + ((~ (((i & len) - (i | len)) - 1U) | (((i & ~ len) + (i & ~ len)) - (i ^ len))) - ~ (((i & len) - (i | len)) - 1U))) >> 31U)) {
    if (((((((- i - 1U) & ~ 1U) + 1U) ^ i) + (((((- i - 1U) & ~ 1U) + 1U) & i) + ((((- i - 1U) & ~ 1U) + 1U) & i))) - ~ 1U) - 1U == 0U) {
      tmp = (((((hash << 7) + ((((((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) | (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) + ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & ~ (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * (~ (((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3)))) ^ ~ ((((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) * (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) | (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) + (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & ~ (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) * (~ ((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)))) + (((((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) | (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) + ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & ~ (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * (~ (((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3)))) | ((((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) * (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) | (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) + (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & ~ (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) * (~ ((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)))) << 1U)) + 1U)) + 1U) + ((- (hash << 7) - 1U) | (- ((((((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) | (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) + ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & ~ (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * (~ (((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3)))) ^ ~ ((((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) * (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) | (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) + (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & ~ (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) * (~ ((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)))) + (((((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) | (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) + ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & ~ (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * (~ (((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3)))) | ((((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) * (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) | (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) + (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & ~ (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)) * (~ ((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & (((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) + (- ((unsigned int )*str) - 1U)) + 1U)))) << 1U)) + 1U) - 1U))) + ~ (((~ (hash << 7) | (((((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) | (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) + ((((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & ~ (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3))) * (~ (((~ ((unsigned int )*str) | (hash >> 3)) + (unsigned int )*str) + 1U) & (((unsigned int )*str & ~ (hash >> 3)) + (hash >> 3)))) - ~ ((((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & ((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) - ~ (- ((unsigned int )*str) - 1U))) * (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) | ((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) - ~ (- ((unsigned int )*str) - 1U))) + (((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & ~ ((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) - ~ (- ((unsigned int )*str) - 1U))) * (~ ((unsigned int )*str - ((unsigned int )*str & (hash >> 3))) & ((~ (- ((unsigned int )*str) - 1U) | (hash >> 3)) - ~ (- ((unsigned int )*str) - 1U))))) - 1U)) + (hash << 7)) + 1U)) + 1U;
    } else {
      tmp = ((~ ((((((hash << 11) ^ ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)) - ((~ (hash << 11) & ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)) + (~ (hash << 11) & ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)))) & ~ 1U) << 1U) - ((((hash << 11) ^ ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)) - ((~ (hash << 11) & ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)) + (~ (hash << 11) & ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)))) ^ 1U)) + 1U) & ~ 1U) - (~ (~ ((((((hash << 11) ^ ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)) - ((~ (hash << 11) & ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)) + (~ (hash << 11) & ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)))) & ~ 1U) << 1U) - ((((hash << 11) ^ ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)) - ((~ (hash << 11) & ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)) + (~ (hash << 11) & ((2U - ((((((unsigned int )*str & ~ (hash >> 5)) << 1U) - ((unsigned int )*str ^ (hash >> 5))) + ~ ((((unsigned int )*str & ~ (- (hash >> 5) - 1U)) + (- (hash >> 5) - 1U)) << 1U)) + 1U)) - 1U)))) ^ 1U)) + 1U) & 1U);
    }
    hash = (((((hash + ~ tmp) + 1U) & ~ (((hash & ~ (- tmp - 1U)) + (- tmp - 1U)) << 1U)) - (~ ((hash + ~ tmp) + 1U) & (((hash & ~ (- tmp - 1U)) + (- tmp - 1U)) << 1U))) & ~ 2U) - (~ ((((hash + ~ tmp) + 1U) & ~ (((hash & ~ (- tmp - 1U)) + (- tmp - 1U)) << 1U)) - (~ ((hash + ~ tmp) + 1U) & (((hash & ~ (- tmp - 1U)) + (- tmp - 1U)) << 1U))) & 2U);
    str ++;
    i = ((((((i & ~ 1U) + 1U) | (((i + 1U) + 1U) + ((- i - 1U) | (- 1U - 1U)))) + (((i & ~ 1U) + 1U) | (((i + 1U) + 1U) + ((- i - 1U) | (- 1U - 1U))))) - (((i & ~ 1U) + 1U) ^ (((i + 1U) + 1U) + ((- i - 1U) | (- 1U - 1U))))) + ~ ((i | 1U) - (i & 1U))) + 1U;
  }
  return (hash);
}
}
