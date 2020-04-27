/*
This file is part of ToDoList.

    ToDoList is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ToDoList is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ToDoList.  If not, see <https://www.gnu.org/licenses/>.
 */
/* File: ListItem.cpp
   
   written by: Johan Tibbelin (johan@dataochljud.se)

   Last changed: 2020-04-27 14:06:30

   Description: class for the List items the main data of the program.  
 */

// Includes and platform macros

#include <cstdio>
#ifdef __ATARI_ST__
#include <osbind.h>
#include <gem.h>
#endif
#include <vector>

// The ListItem class

public class ListItem {

private:
  int iStart_date,iStop_date;
  int iStart_time,iEnd_time;
  bool bStarted;
  bool bPaused;
  bool bStoped;
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
  bool stop()
  {
    if (started)
      {
	bStoped = true;
      } 
    else 
      {
	return false;
      }
    return true;
  }
};
