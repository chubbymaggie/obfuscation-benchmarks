/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _1_main__opaque_Node_1;
struct _IO_FILE;
struct timeval;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
typedef unsigned long size_t;
typedef struct _IO_FILE FILE;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int fclose(void *stream ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void abort() ;
extern void exit(int status ) ;
struct _1_main__opaque_Node_1 {
   int data ;
   struct _1_main__opaque_Node_1 *next ;
};
struct _1_main__opaque_Node_1 *_1_main__opaque_list1_1  =    (struct _1_main__opaque_Node_1 *)0;
extern int raise(int sig ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int rand() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
unsigned int APHash(char *str , unsigned int len ) ;
int main(int argc , char **argv ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
void megaInit(void) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
struct _1_main__opaque_Node_1 *_1_main__opaque_list2_1  =    (struct _1_main__opaque_Node_1 *)0;
extern void *malloc(unsigned long size ) ;
typedef struct _1_main__opaque_Node_1 *_1_main__opaque_List_1;
extern int scanf(char const   *format  , ...) ;
int main(int argc , char **argv ) 
{ 
  unsigned char *str ;
  unsigned int hash ;
  size_t tmp ;
  unsigned int tmp___0 ;
  int i7 ;
  int r8 ;
  struct _1_main__opaque_Node_1 *p9 ;

  {
  megaInit();
  i7 = 0;
  while (i7 < 2) {
    r8 = rand();
    {
    p9 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
    if (p9 != (struct _1_main__opaque_Node_1 *)0UL) {
      p9->data = r8;
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        p9->next = _1_main__opaque_list1_1->next;
        _1_main__opaque_list1_1->next = p9;
      } else {
        p9->next = p9;
        _1_main__opaque_list1_1 = p9;
      }
    } else {

    }
    }
    i7 ++;
  }
  _1_main__opaque_list2_1 = _1_main__opaque_list1_1;
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
  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
        i = APHash(0, i);
      } else {

      }
    } else {
      while ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) <= 7) {
        i = APHash(4, len);
      }
    }
  } else {
    while (1) {
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) >= 2) {

        } else {
          break;
        }
      } else {
        while (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) >= 2) != 6) {

        }
      }
      i = APHash(1, i | hash);
    }
  }
  while (1) {
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          while ((i < len) <= 6) {

          }
        } else {

        }
      } else {

      }
    } else
    if (! (i < len)) {
      break;
    }
    if ((i & 1U) == 0U) {
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

        } else {
          {
          if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

          } else {
            len = APHash(0, hash);
          }
          tmp = (hash << 7) ^ (unsigned int )*str * (hash >> 3);
          }
        }
      } else
      if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) > 6) {
        tmp = ((hash << 7) ^ (unsigned int )*str * (hash >> 3)) | 9;
      } else {

      }
    } else {
      tmp = ~ ((hash << 11) + ((unsigned int )*str ^ (hash >> 5)));
    }
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        if ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) <= 5) {
          hash = 1U;
          str = (str + 1) + 1;
          i = (i + 1U) * tmp;
        } else
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

        } else {
          hash = i;
          str = ((str + 1) + -1) - -1;
          i = ((i + 1U) >> tmp) ^ 9;
        }
      } else {
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
          hash = APHash(0, len);
        } else {

        }
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          hash = (hash ^ tmp) << 7;
          str = (str + 1) + -1;
          i = (i + 1U) >> tmp;
        } else {
          hash ^= tmp;
          str ++;
          i ++;
        }
      }
    } else {
      if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        i = APHash(0, tmp);
      } else {

      }
      __asm__  volatile   (".byte 0xa0,0x8d,0xf7,0xa6,0x9,0x59,0xf8":);
    }
  }
  return (hash);
}
}
