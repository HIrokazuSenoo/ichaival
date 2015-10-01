
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <curses.h>
#include <assert.h>

int main(int argc, char *argv[]){
  int WX = 15;
  int WY = 55;
  int SUBX = 3;
  int SUBY = 40;
  int SUFX = 10;
  int SUFY = 18;
  int ZERO = 0;
  char buf[5012];
  WINDOW *wnd;
  WINDOW *send;
  initscr();
  setlocale(LC_ALL, "");
  clear();
  for(;;){
    memset(buf,0,sizeof(char));
    wnd = newwin(WX,WY,ZERO,ZERO);
    send = newwin(SUBX,SUBY,SUFY,SUFX);
    move(10,25);
    box(wnd,'|','-');
    box(send,'|','-');
    wrefresh(wnd);
    wrefresh(send);
    move(10,42);
    clear();
    wgetnstr(wnd,buf,5000);
    refresh();


    wgetnstr(wnd,buf,1028);
    wprintw(wnd,buf);
    if(!strcmp(buf,"quit")){
      break;
    }
    wprintw(wnd,"%s",buf);
    refresh();
    wrefresh(wnd);
    wrefresh(send);
    refresh();
  }
    endwin();
    return 0;
}
