#include <rt_sys.h>

/*
    Function stubs for ARM Compilation Tools C library
    used to provide retargeting symbols for semihosting.
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
    The below provided symbols constitute the minimal subset needed
    to eliminate the "sys_io.o" module dependency with its internal
    semihosting references.
    
    Insert or remove function stubs here as needed.
*/

const char __stdin_name[];
const char __stdout_name[];
const char __stderr_name[];


void _ttywrch(int ch)
{
}

void _sys_exit(int return_code)
{
}

FILEHANDLE _sys_open(const char *name, int openmode)
{
	return 0;
}

int _sys_close(FILEHANDLE fh)
{
	return -1;
}

int _sys_write(FILEHANDLE fh, const unsigned char *buf, unsigned len, int mode)
{
	return -1;
}

int _sys_seek(FILEHANDLE fh, long pos)
{
	return -1;
}

long _sys_flen(FILEHANDLE fh)
{
	return -1;
}

int _sys_istty(FILEHANDLE fh)
{
	return -1;
}

#if (defined(__UVISION_VERSION) && defined(__clang__))
int _sys_read(FILEHANDLE fh, unsigned char *buf,
              unsigned len, int mode)
{
    return -1;
}
char *_sys_command_string(char * cmd, int len)
{
    return 0;
}
#endif

#ifdef __cplusplus
}
#endif
