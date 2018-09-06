/*
 * json.h - JSON manipulation header
 * Copyright (C) 2014  Vivien Didelot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _JSON_H
#define _JSON_H

#include <stdbool.h>

typedef int json_pair_cb_t(char *name, char *value, void *data);
int json_read(int fd, size_t count, json_pair_cb_t *pair_cb, void *data);

bool json_is_string(const char *str);
bool json_is_number(const char *str);
bool json_is_literal(const char *str);
int json_escape(const char *str, char *buf, size_t size);

#endif /* _JSON_H */

