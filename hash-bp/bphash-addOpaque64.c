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
unsigned int BPHash(char *str , unsigned int len ) ;
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
  tmp___0 = BPHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 1543172857U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
unsigned int BPHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int i ;
  int randomVars_BogusReturn5 ;

  {
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

  } else {
    hash = BPHash(0, hash);
  }
  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
    hash = 0U;
    i = 0U;
    i = 0U;
  } else {
    __asm__  volatile   (".byte 0xa0,0x8d,0xf7,0xa6,0x9,0x59,0xf8":);
  }
  while (1) {
    if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

          } else
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

            } else {
              __asm__  volatile   (".byte 0xaa,0xb9,0xe1,0xff,0x2a":);
            }
          } else {
            randomVars_BogusReturn5 = main(3, & str);
          }
        } else {

        }
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          __asm__  volatile   (".byte 0xc7,0x5,0x3e,0x0,0x0,0x50,0x0,0x0":);
        } else
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
          randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
        } else {

        }
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            while (1) {
              if ((i < len) == 1) {

              } else
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                break;
              } else {
                __asm__  volatile   (".byte 0x0,0x0,0x0,0x0,0x0":);
              }
            }
          } else {
            while (1) {
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  while ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) < randomVars_BogusReturn5) {
                    if ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) != randomVars_BogusReturn5) {

                    } else {
                      len = BPHash(randomVars_BogusReturn5, hash);
                    }
                    len = BPHash(2, hash % 8);
                  }
                } else
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                    len = BPHash(0, len);
                  } else {

                  }
                  len = BPHash(0, hash);
                } else {

                }
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                    __asm__  volatile   (".byte 0x39,0x47,0x20,0x7f,0x1a,0x7d,0x7,0xb8":);
                  } else {

                  }
                } else {
                  hash = BPHash(0, len);
                }
              } else {

              }
              if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
                }
              } else {
                while ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) <= randomVars_BogusReturn5) {

                }
              }
              if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

              } else {
                i = BPHash(0, len);
              }
              if (((i < len) == 1) > randomVars_BogusReturn5) {
                if ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) >= randomVars_BogusReturn5) {
                  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                    if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                      __asm__  volatile   (".byte 0xe6,0x15,0xec,0xb6,0x70,0x8e":);
                    } else {

                    }
                  } else {
                    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                      randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
                    } else {

                    }
                    __asm__  volatile   (".byte 0x0,0x0,0x0,0x0,0x0":);
                  }
                } else
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  __asm__  volatile   (".byte 0x1,0x0,0x0,0x0,0x44,0x89":);
                } else {
                  return (hash);
                }
              } else {

              }
            }
          }
        } else
        if ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) >= randomVars_BogusReturn5) {
          while (1) {
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) <= randomVars_BogusReturn5) {

              } else
              if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                hash = BPHash(randomVars_BogusReturn5, len);
              } else
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

              } else
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                    __asm__  volatile   (".byte 0x0,0x0,0x0,0x0,0x0,0xc7,0x5":);
                  } else {

                  }
                } else
                if ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) > randomVars_BogusReturn5) {

                } else {
                  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

                  } else {
                    hash = BPHash(0, len);
                  }
                  __asm__  volatile   (".byte 0x0,0x0,0x0,0x0,0x0,0xc7,0x5":);
                }
              } else {
                while ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) >= randomVars_BogusReturn5) {
                  __asm__  volatile   (".byte 0x0,0x0,0x0,0x0,0x0,0xc7,0x5":);
                }
              }
            } else {
              while (((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) <= randomVars_BogusReturn5) > randomVars_BogusReturn5) {

              }
            }
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
            } else {

            }
            if ((((i < len) == 1) > randomVars_BogusReturn5) > randomVars_BogusReturn5) {

            } else {
              while (1) {
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  len = BPHash(0, hash);
                }
                if (((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) >= randomVars_BogusReturn5) != randomVars_BogusReturn5) {

                } else {
                  break;
                }
                __asm__  volatile   (".byte 0x0,0x0,0x0,0x0,0x0":);
              }
            }
          }
        } else {
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
            } else {

            }
          } else {
            while ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) <= randomVars_BogusReturn5) {
              randomVars_BogusReturn5 = main(randomVars_BogusReturn5 << 5, & str + -1);
            }
          }
          while (1) {
            if (((i < len) == 1) <= randomVars_BogusReturn5) {
              while (1) {
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

                } else
                if ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) <= randomVars_BogusReturn5) {

                } else {
                  break;
                }
                return (hash);
              }
            } else {

            }
          }
        }
      } else
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            while (1) {
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                while (((i < len) == randomVars_BogusReturn5) <= randomVars_BogusReturn5) {

                }
              } else
              if ((i < len) == randomVars_BogusReturn5) {

              } else {
                break;
              }
            }
          } else {
            __asm__  volatile   (".byte 0xc1,0xb3,0xf3,0xa3,0xae,0xf2":);
          }
        } else
        if (! (i < len)) {
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

          } else {
            break;
          }
        }
      } else {
        __asm__  volatile   (".byte 0xe1,0x52,0x1c,0x3a,0x62":);
      }
    } else {
      __asm__  volatile   (".byte 0xc8,0x8b,0x24,0x21,0x88,0xc3,0x59":);
    }
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

    } else {
      randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
    }
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      if ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) <= randomVars_BogusReturn5) {
        if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) < randomVars_BogusReturn5) {

        } else {
          i = BPHash(randomVars_BogusReturn5, 7U);
        }
      } else {
        while (1) {
          if ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) > randomVars_BogusReturn5) {
            while (1) {
              while ((((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) > randomVars_BogusReturn5) >= randomVars_BogusReturn5) <= randomVars_BogusReturn5) {

              }

            }
          } else {
            while (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) > randomVars_BogusReturn5) != randomVars_BogusReturn5) {

            }
          }
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

          } else {
            hash = BPHash(0, len);
          }
          while ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) != randomVars_BogusReturn5) {
            i = BPHash(randomVars_BogusReturn5, (i - 6) >> 9);
          }
        }
      }
    } else
    if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      while (1) {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) > randomVars_BogusReturn5) {

          } else
          if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

          } else {
            break;
          }
        } else {
          while (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) > randomVars_BogusReturn5) >= randomVars_BogusReturn5) {

          }
        }
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          i = BPHash(0 + randomVars_BogusReturn5, i - 6);
        } else
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

        } else {
          i = BPHash((0 + randomVars_BogusReturn5) / randomVars_BogusReturn5, 4U);
        }
      }
    } else
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      i = BPHash(0, i);
    } else {

    }
    hash = (hash << 7) ^ (unsigned int )*str;
    str ++;
    i ++;
  }
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

  } else
  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      __asm__  volatile   (".byte 0xdb,0xb,0xbb,0xa4":);
    } else {
      __asm__  volatile   (".byte 0xdb,0xb,0xbb,0xa4":);
    }
  } else
  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      __asm__  volatile   (".byte 0xa3,0xe5,0x43,0xe2":);
    } else {
      randomVars_BogusReturn5 = main(randomVars_BogusReturn5 >> randomVars_BogusReturn5,
                                     & str + -1);
    }
  } else {
    randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
  }
  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

  } else
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    randomVars_BogusReturn5 = main(randomVars_BogusReturn5, & str);
  } else {
    randomVars_BogusReturn5 = main(1, & str - 1);
  }
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

      } else {
        __asm__  volatile   (".byte 0xf7,0x48,0x1f,0xd3,0x7a,0x29,0x94":);
      }
    } else
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

    } else
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      return (hash);
    } else {
      __asm__  volatile   (".byte 0x39,0x57,0x48,0x7f":);
    }
  } else {
    __asm__  volatile   (".byte 0x84,0x21,0x3,0x0,0x0,0x41,0x81,0xe7":);
  }
}
}
void megaInit(void) 
{ 


  {

}
}
