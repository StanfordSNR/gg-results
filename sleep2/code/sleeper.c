#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
  int fd = open( "output", O_WRONLY | O_CREAT | O_TRUNC, 0666 );
  close( fd );
  sleep( 2 );
  return 0;
}
