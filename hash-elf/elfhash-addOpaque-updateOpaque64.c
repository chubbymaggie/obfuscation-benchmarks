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
int main(int argc , char **argv ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
void megaInit(void) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
unsigned int ELFHash(char *str , unsigned int len ) ;
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
unsigned int ELFHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int x ;
  unsigned int i ;
  int randomVars_BogusReturn134 ;

  {
  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    while (1) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next - -1;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next - 1;
      }

    }
  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

  }
  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    __asm__  volatile   (".byte 0x1,0x0,0x0,0x0,0x48,0x8d,0x15":);
  } else {
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      } else {
        __asm__  volatile   (".byte 0xb5,0xff":);
      }

    } else {

    }

  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }

  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    while (1) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next - 1;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + -1;
      }

    }
  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }

  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

  } else {
    hash = ELFHash(0, hash);
  }
  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
    while (1) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next - 1;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next - -1;
      }

    }
  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

  }

  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    i = ELFHash(0, i);
  } else {

  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }

  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    while (1) {
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
        __asm__  volatile   (".byte 0xc4,0xca,0xc5,0xb5,0x3d,0x1b,0x38":);
      } else {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next - -1;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next - 1;
        }

      }

    }
  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

  }
  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

  } else {
    __asm__  volatile   (".byte 0x7f,0xcb,0xd6,0x14,0x9c,0x3,0xe2":);
  }

  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          randomVars_BogusReturn134 = main(8, & str);
        } else {
          randomVars_BogusReturn134 = main(8 | randomVars_BogusReturn134, & str + -1);
        }
      } else {
        __asm__  volatile   (".byte 0xc7,0x5,0x3f,0x0,0x0,0x0":);
      }
    } else {

    }
  } else {
    __asm__  volatile   (".byte 0x0,0x0,0x31,0xff":);
  }
  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
    randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
  } else {

  }
  hash = 0U;
  x = 0U;
  i = 0U;
  i = 0U;
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }

  while (1) {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        while (1) {
          if (((i < len) >= randomVars_BogusReturn134) > randomVars_BogusReturn134) {
            while (1) {
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
              } else {

              }
              if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) > randomVars_BogusReturn134) {

              } else {
                break;
              }

            }
          } else {

          }
        }
      } else {
        while (1) {
          if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
            __asm__  volatile   (".byte 0xe9,0xff,0x8e,0x10,0x48":);
          } else
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            if ((i < len) >= randomVars_BogusReturn134) {

            } else
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                    __asm__  volatile   (".byte 0xbd,0xb0,0xf9,0xff,0xff":);
                  } else {
                    randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
                  }
                } else {

                }
                __asm__  volatile   (".byte 0x37":);
              } else
              if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

              } else
              if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  return (x - len);
                } else {
                  return (x);
                }
              } else {
                break;
              }
            } else {

            }
          } else {
            while (((i < len) >= randomVars_BogusReturn134) == randomVars_BogusReturn134) {

            }
          }
        }
      }
    } else
    if (! (i < len)) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

      } else {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      }

      if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
      } else {

      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        __asm__  volatile   (".byte 0x51,0x9d,0x30":);
      } else
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + 1;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next - 1;
        }

      } else {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

        } else {
          hash = ELFHash(0, i);
        }
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      }
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      } else {
        while (1) {
          {  /* __blockattribute__(__ATOMIC__)*/ 
          _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + 1;
          _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + -1;
          }

        }
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

        } else {
          randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
        }
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      } else {

      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      break;
    }
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

    } else {
      randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
    }
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        __asm__  volatile   (".byte 0x12,0xb1,0xc6,0x6f":);
      } else {

      }
    } else {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

    } else
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
    } else {
      randomVars_BogusReturn134 = main(randomVars_BogusReturn134 << randomVars_BogusReturn134,
                                       & str + 1);
    }
    if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      } else {
        __asm__  volatile   (".byte 0xf2,0xeb,0x26,0x51,0xdb,0x8d,0xc5":);
      }

    } else {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + -1;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + 1;
      }

    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }
    hash = (hash << 4) + (unsigned int )*str;
    x = (unsigned int )((long )hash & 4026531840L);
    if (x != 0U) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        while (1) {
          {  /* __blockattribute__(__ATOMIC__)*/ 
          _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + -1;
          _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + 1;
          }

        }
      } else {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      }

      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          hash = ELFHash(0, len);
        } else {

        }
      } else {
        __asm__  volatile   (".byte 0x88,0x44,0x9d":);
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

      } else {
        i = ELFHash(0, len);
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

      } else {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      } else {
        __asm__  volatile   (".byte 0x0,0x48,0x8d,0x35,0x74,0x35":);
      }

      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

      } else {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

        } else
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          __asm__  volatile   (".byte 0x1,0xc6,0x5,0xe6":);
        } else {
          i = ELFHash(0, x);
        }
        randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          {  /* __blockattribute__(__ATOMIC__)*/ 
          _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
          _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
          }

        } else {
          while (1) {
            {  /* __blockattribute__(__ATOMIC__)*/ 
            _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + 1;
            _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + -1;
            }

          }
        }
      } else {

      }
      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        {  /* __blockattribute__(__ATOMIC__)*/ 
        _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
        _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
        }

      } else {

      }

      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

      } else {
        hash ^= x >> 24;
      }
    }
    if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      }

    } else {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + -1;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + -1;
      }

    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      randomVars_BogusReturn134 = main(randomVars_BogusReturn134, & str);
    } else {

    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      while (1) {
        if ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) != randomVars_BogusReturn134) {

        } else
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          break;
        } else {

        }
        if ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) <= randomVars_BogusReturn134) {
          hash = ((hash & ~ x) ^ x) % 10;
          str = ((str + 1) - 1) + 1;
          i = 7U;
        } else {
          hash = (hash & ~ x) ^ 8;
          str = (str + 1) - 1;
          i = len;
        }
      }
    } else
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        hash &= ~ x;
        str ++;
        i ++;
      } else {
        hash = (hash & ~ x) ^ x;
        str = (str + 1) - 1;
        i = 9U;
      }
    } else {

    }
  }
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

  } else {

  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }

  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    while (1) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + 1;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + 1;
      }

    }
  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

  }

  return (hash);
}
}
void megaInit(void) 
{ 


  {

}
}
