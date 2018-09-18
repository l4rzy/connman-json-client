/*
 *  connman-ncurses
 *
 *  Copyright (C) 2014 Eurogiciel. All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __ERROR_REPORTING_H
#define __ERROR_REPORTING_H

WINDOW* win_error_new(int rows, int cols, int posy, int posx, const char *msg);

WINDOW* win_help_new(int rows, int cols, int posy, int posx, const char *msg);

bool win_exists(WINDOW *win);

void win_refresh(WINDOW *win);

void win_driver(WINDOW **win, int ch);

void win_resize(WINDOW *win, int rows, int cols);

#endif
