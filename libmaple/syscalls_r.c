
#include <sys/stat.h>
#include <errno.h>

extern caddr_t _sbrk(int incr);
extern int _write (int file, char * ptr, int len);

caddr_t _sbrk_r(void* imp, int incr)
{
    return _sbrk(incr);
}

int _write_r (void* imp, int file, char * ptr, int len)
{
  return _write( file, ptr, len);
}

// vim:cin:ai:sts=2 sw=2 ft=cpp
