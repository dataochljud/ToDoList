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

   File: ControlPanel.cpp
   
   Written by: Johan Tibbelin (johan@dataochljud.se)

  Copyright © 2020 Data och Ljud. All rights reserved.

  Last changed: 2020-04-27 15:32:47
 */

#include <cstdio>

public class ControlPanel {

private:
  bool tst;
public:
  ~ControlPanel() { printf("Control panel destroyed.")}
  ControlPanel() 
  {
    printf("Control panel created")
  }
};
