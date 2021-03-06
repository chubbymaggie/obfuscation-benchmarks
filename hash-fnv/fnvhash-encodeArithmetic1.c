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
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern int fclose(void *stream ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
unsigned int FNVHash(char *str , unsigned int len ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void abort() ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern int rand() ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void signal(int sig , void *func ) ;
extern int raise(int sig ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
typedef unsigned long size_t;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern void *malloc(unsigned long size ) ;
typedef struct _IO_FILE FILE;
extern void exit(int status ) ;
void megaInit(void) ;
unsigned int FNVHash(char *str , unsigned int len ) 
{ 
  unsigned int fnv_prime ;
  unsigned int hash ;
  unsigned int i ;

  {
  fnv_prime = 2166136261U;
  hash = 0U;
  i = 0U;
  i = 0U;
  while ((int )(((~ i & len) | (~ (i ^ len) & (i - len))) >> 31U)) {
    hash = (hash & fnv_prime) * (hash | fnv_prime) + (hash & ~ fnv_prime) * (~ hash & fnv_prime);
    hash = ((hash - (unsigned int )*str) - ((hash | ~ ((unsigned int )*str)) + (hash | ~ ((unsigned int )*str)))) - 2U;
    str ++;
    i = ((i | 1U) << 1U) - (i ^ 1U);
  }
  return (hash);
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
  tmp___0 = FNVHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 3996942804U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
