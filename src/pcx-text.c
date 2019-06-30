/*
 * Puxcobot - A robot to play Coup in Esperanto (Puĉo)
 * Copyright (C) 2019  Neil Roberts
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

#include "pcx-text.h"

#include "pcx-text-esperanto.h"
#include "pcx-text-french.h"

static const char **
languages[] = {
        [PCX_TEXT_LANGUAGE_ESPERANTO] = pcx_text_esperanto,
        [PCX_TEXT_LANGUAGE_FRENCH] = pcx_text_french,
};

const char *
pcx_text_get(enum pcx_text_language lang,
             enum pcx_text_string string)
{
        return languages[lang][string];
}
