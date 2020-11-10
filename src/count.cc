#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <iostream>
#include <unistd.h>

int main()
{
  int fd = open("junk.txt",O_RDWR);
  struct stat info;
  fstat(fd, &info);
  void * page = mmap(0, info.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
  uint64_t bitcount = 0;
  //Lets ignore alignment issues for now - I think mmap guarantees that they're OK.
  uint32_t * v_ptr = static_cast<uint32_t*>(page); 
  for(unsigned int i=0; i<info.st_size/4; ++i)
  {
    uint32_t v = *v_ptr;
    v = v - ((v >> 1) & 0x55555555);                    // reuse input as temporary
    v = (v & 0x33333333) + ((v >> 2) & 0x33333333);     // temp
    bitcount += ((v + (v >> 4) & 0xF0F0F0F) * 0x1010101) >> 24; // count
    ++v_ptr;
  }

  //Need to adjust for the last 0-3 bytes... Exercise for the reader

  munmap( page, info.st_size );

  std::cout<<"Total of "<<bitcount<<" set bits"<<std::endl;
}