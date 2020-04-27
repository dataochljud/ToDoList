#include <cstdio>
#ifdef __ATARI_ST__
#include <osbind.h>
#include <gem.h>
#endif
#include <vector>

public class ListItem {

private:
  int iStart_date,iStop_date;
  int iStart_time,iEnd_time;
  bool bStarted;
  bool bIs_late;
  char* cText;
  char* cDescription;
  
public:
  ~ListItem() { }
  ListItem() { }
  ListItem(const char* text,const char* description, int start,int stop)
  {
    bStarted=false;
    cText = text;
    cDescription = description;
    iStart_time = start;
    iEnd_time = end;
  }
  bool start() 
  {
    if (!bStarted)
      bStarted = true;
    else
      return false;
    return true;
  }
};
