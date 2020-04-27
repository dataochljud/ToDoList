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
/* 
 * Register App with GEM if an ACC. If not it returns -1.
 */
int init_app()
{
  int prog_handle = appl_init();

  if (prog_handle!=0)
    int me_id = menu_register("  ToDoList");
  else
    return -1;

  return 0;
}
/*
 * Main program loop.
 */
int main_program()
{
  int em;
  while (1) 
    {
      em = evnt_mesag(0);
      
    }

}

int main() {
  
    init_app();
    main_program();
    close_app();
 
  

  return 0;
}
