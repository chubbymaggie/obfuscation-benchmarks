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
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void abort() ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern int rand() ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int raise(int sig ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void *malloc(unsigned long size ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
typedef unsigned long size_t;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
typedef struct _IO_FILE FILE;
extern void exit(int status ) ;
void megaInit(void) ;
unsigned int RSHash(char *str , unsigned int len ) ;
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
  tmp___0 = RSHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 1294241610U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
unsigned int RSHash(char *str , unsigned int len ) 
{ 
  unsigned int b ;
  unsigned int a ;
  unsigned int hash ;
  unsigned int i ;

  {
  b = 378551U;
  a = 63689U;
  hash = 0U;
  i = 0U;
  i = 0U;
  while ((int )(((~ i & len) | (~ (i ^ len) & (i - len))) >> 31U)) {
    hash = (((hash & a) * (hash | a) + (hash & ~ a) * (~ hash & a)) | (unsigned int )*str) + (((hash & a) * (hash | a) + (hash & ~ a) * (~ hash & a)) & (unsigned int )*str);
    a = (a & b) * (a | b) + (a & ~ b) * (~ a & b);
    str ++;
    i = ((i | 1U) + (i | 1U)) - (i ^ 1U);
  }
  return (hash);
}
}
