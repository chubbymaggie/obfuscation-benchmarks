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
unsigned int SDBMHash(char *str , unsigned int len ) ;
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
  tmp___0 = SDBMHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 2312951406U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
unsigned int SDBMHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int i ;
  int randomVars_BogusReturn5 ;

  {
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

  } else {
    i = SDBMHash(0, hash);
  }
  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      len = SDBMHash(0, i);
    } else {

    }
  } else
  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

  } else {
    __asm__  volatile   (".byte 0x34,0x0,0x0,0x55":);
  }
  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
    hash = 0U;
    i = 0U;
    i = 0U;
  } else {

  }
  while (1) {
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          while (1) {
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

            } else {
              hash = SDBMHash(0, len);
            }
            while (((i < len) == 1) == 1) {

            }
          }
        } else
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

            } else {
              while (1) {
                if ((i < len) == 1) {

                } else
                if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  break;
                } else {
                  return (i);
                }
              }
            }
          } else {
            if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

            } else {
              randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
            }
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

            } else {
              __asm__  volatile   (".byte 0x68,0x10,0xa0,0xc4,0x7e":);
            }
          }
        } else {

        }
      } else
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

      } else
      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        while (1) {
          if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
            __asm__  volatile   (".byte 0x0,0x0,0x0,0x0,0x0,0xe9":);
          } else
          if ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) > randomVars_BogusReturn5) {

          } else
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
            return (i);
          } else {
            break;
          }
          while (1) {
            while (1) {
              while (1) {
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

                } else
                if ((((i < len) == 1) == 1) == randomVars_BogusReturn5) {

                } else {
                  break;
                }

              }

            }
          }
        }
      } else {

      }
    } else
    if (! (i < len)) {
      break;
    }
    if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
    } else {

    }
    if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      hash = 5U;
      str = (str + 1) - -1;
      i = 6U;
    } else {
      hash = (((unsigned int )*str + (hash << 6)) + (hash << 16)) - hash;
      str ++;
      i ++;
    }
  }
  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
  } else {

  }
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

  } else {
    hash = SDBMHash(0, i);
  }
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          while (1) {
            if (((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) != randomVars_BogusReturn5) <= randomVars_BogusReturn5) {
              while ((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) < randomVars_BogusReturn5) {
                __asm__  volatile   (".byte 0x2a,0xd,0x64,0x66,0x7d":);
              }
            } else {

            }
            while (1) {
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

              } else {
                len = SDBMHash(0, len);
              }
              while ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) >= randomVars_BogusReturn5) {
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
                } else {

                }
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                  __asm__  volatile   (".byte 0x39,0x47,0x20,0x7f,0x1a,0x7d,0x7,0xb8":);
                } else {
                  __asm__  volatile   (".byte 0x39,0x47,0x20,0x7f,0x1a,0x7d,0x7,0xb8":);
                }
              }
              randomVars_BogusReturn5 = main(4, ((& str + -1) + 1) + -1);
            }
          }
        } else {
          while (1) {
            if ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) != randomVars_BogusReturn5) {

            } else
            if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              __asm__  volatile   (".byte 0x2a,0xd,0x64,0x66,0x7d":);
            } else {
              if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

              } else
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                i = SDBMHash(0 ^ 9, hash | i);
              } else {
                i = SDBMHash(0, hash);
              }
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d":);
              } else {
                break;
              }
            }
            while (1) {
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

              } else
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                __asm__  volatile   (".byte 0x0":);
              } else
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

              } else
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                __asm__  volatile   (".byte 0xff,0x48,0x3d,0xbc,0x35,0x0":);
              } else
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                __asm__  volatile   (".byte 0x39,0x47,0x20,0x7f,0x1a,0x7d,0x7,0xb8":);
              } else
              if (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != randomVars_BogusReturn5) >= randomVars_BogusReturn5) {
                if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  return (hash);
                } else
                if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                        __asm__  volatile   (".byte 0xa0,0x14,0x69,0xb1,0xda,0x78,0x27":);
                      } else {
                        __asm__  volatile   (".byte 0xa0,0x14,0x69,0xb1,0xda,0x78,0x27":);
                      }
                    } else {

                    }
                  } else {
                    __asm__  volatile   (".byte 0xc8,0x8b,0x24,0x21,0x88,0xc3,0x59":);
                  }
                } else {
                  __asm__  volatile   (".byte 0xa0,0x14,0x69,0xb1,0xda,0x78,0x27":);
                }
              } else {

              }
              randomVars_BogusReturn5 = main(randomVars_BogusReturn5 + 3, (& str + -1) + 1);
            }
          }
        }
      } else {
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

        } else {
          hash = SDBMHash(0, i);
        }
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            while (1) {
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                    if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != randomVars_BogusReturn5) {

                    } else {
                      break;
                    }
                  } else {

                  }
                } else {

                }
              } else {
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                  randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
                } else {

                }
                __asm__  volatile   (".byte 0xe1,0x52,0x1c,0x3a,0x62":);
              }
              randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str + -1);
            }
          } else {

          }
        } else {
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

          } else
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
          } else {

          }
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                randomVars_BogusReturn5 = main(3, & str);
              } else
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                __asm__  volatile   (".byte 0x1,0x0,0x0":);
              } else {
                __asm__  volatile   (".byte 0x4b,0x28,0x3e,0x62,0x4d,0x81,0x80":);
              }
            } else {

            }
          } else
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            __asm__  volatile   (".byte 0x13":);
          } else {
            __asm__  volatile   (".byte 0x39,0x57,0x48,0x7f":);
          }
        }
      }
    } else {

    }
  } else {

  }
  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
    } else {

    }
    __asm__  volatile   (".byte 0x81,0xe7,0xed,0xfb,0xff,0x41":);
  } else
  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

    } else {
      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
      } else {

      }
      return (hash);
    }
  } else {
    __asm__  volatile   (".byte 0x0,0x48,0x8d,0x35,0x74,0x35":);
  }
}
}
