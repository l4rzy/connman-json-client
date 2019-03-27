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

#ifndef __CONNMAN_COMMANDS_H
#define __CONNMAN_COMMANDS_H

#include <dbus/dbus.h>
#include <json.h>

#define _POSIX_C_SOURCE 200809L

#define JSON_COMMANDS_STRING_SIZE_SMALL 25
#define JSON_COMMANDS_STRING_SIZE_MEDIUM 70

#ifdef __cplusplus
extern "C" {
#endif

extern void (*commands_callback)(struct json_object *data, json_bool is_error);
extern void (*commands_signal)(struct json_object *data);

int __cmd_state(void);

int __cmd_services(void);

int __cmd_technologies(void);

int __cmd_monitor(struct json_object *jobj);

int __cmd_connect(const char *serv_dbus_name);

int __cmd_disconnect(const char *serv_dbus_name);

int __cmd_scan(const char *tech_dbus_name);

int __cmd_config_service(struct json_object *service,
                         struct json_object *options);

int __cmd_toggle_tech_power(const char *tech_dbus_name, bool set_power_to);

int __cmd_toggle_offline_mode(bool set_offline_to);

int __cmd_remove(const char *serv_dbus_name);

#ifdef __cplusplus
}
#endif

#endif
