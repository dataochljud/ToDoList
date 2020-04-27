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
/* 
   Program: ToDoList 

   Version: 0.1

   File: main.cpp
   
   Written by: Johan Tibbelin (johan@dataochljud.se)

  Copyright © 2020 Data och Ljud. All rights reserved.

  Last changed: 2020-04-27 15:47:42
 */

#include <cstdio>
#include <osbind.h>
#include <gem.h>
#include "../shared/ListItem.h"

// Rsrc tree
char tree[4096];
/* 
 * Register App with GEM if an ACC. If not it returns -1.
 */
int close_app() {return 0;}
int init_app()
{

  int prog_handle = appl_init();

  if (prog_handle != 0)
    int ret =  menu_register(prog_handle,"  ToDoList");
  else
    return -1;
  // Load resource file
  rsrc_load("TODOLIST.RSC");
  rsrc_gaddr(0,0,tree);
  return 0;
}
/*
 * Main program loop.
 */
int main_program()
{

  short evt_buff[16];
  while (1) 
    {
      int ret = evnt_mesag(evt_buff);

      // check if ACC menu item is clicked
      if (evt_buff[0] == 40)
	{
	  // Do stuff
	}
    }
  
}

int main() {
  
    init_app();
    main_program();
    close_app();
 
  

  return 0;
}
