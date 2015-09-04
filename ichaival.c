
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <curses.h>

int main(int argc, char *argv[])
{
  cbreak();
  setlocale(LC_ALL, "");
  initscr();
  char buf[1024];
  WINDOW  *w ;
  int n;
  w = newwin(40,80,0,0);
  touchwin(w);
  WINDOW *mes = subwin(w,30,70,0,0);
  WINDOW *send = subwin(w,10,10,10,10);
  for(;;){
    n = wgetnstr(send,buf,sizeof(buf));
    if(!strcmp(buf,"quit"))break;
  }
  endwin();
 
  return 0;
}
