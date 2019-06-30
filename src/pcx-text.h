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

#ifndef PCX_TEXT_H
#define PCX_TEXT_H

#include <stdarg.h>

#include "pcx-buffer.h"

enum pcx_text_language {
        PCX_TEXT_LANGUAGE_ESPERANTO,
        PCX_TEXT_LANGUAGE_FRENCH,
};

enum pcx_text_string {
        PCX_TEXT_STRING_TIMEOUT_START,
        PCX_TEXT_STRING_TIMEOUT_ABANDON,
        PCX_TEXT_STRING_NEED_PUBLIC_GROUP,
        PCX_TEXT_STRING_SEND_PRIVATE_MESSAGE,
        PCX_TEXT_STRING_ALREADY_IN_GAME,
        PCX_TEXT_STRING_GAME_FULL,
        PCX_TEXT_STRING_GAME_ALREADY_STARTED,
        PCX_TEXT_STRING_NAME_FROM_ID,
        PCX_TEXT_STRING_FINAL_CONJUNCTION,
        PCX_TEXT_STRING_FINAL_DISJUNCTION,
        PCX_TEXT_STRING_WELCOME,
        PCX_TEXT_STRING_JOIN_BEFORE_START,
        PCX_TEXT_STRING_NEED_TWO_PLAYERS,
        PCX_TEXT_STRING_JOIN_COMMAND,
        PCX_TEXT_STRING_START_COMMAND,
        PCX_TEXT_STRING_HELP_COMMAND,
        PCX_TEXT_STRING_RECEIVED_PRIVATE_MESSAGE,
        PCX_TEXT_STRING_COUP,
        PCX_TEXT_STRING_INCOME,
        PCX_TEXT_STRING_FOREIGN_AID,
        PCX_TEXT_STRING_TAX,
        PCX_TEXT_STRING_ASSASSINATE,
        PCX_TEXT_STRING_EXCHANGE,
        PCX_TEXT_STRING_STEAL,
        PCX_TEXT_STRING_ACCEPT,
        PCX_TEXT_STRING_CHALLENGE,
        PCX_TEXT_STRING_BLOCK,
        PCX_TEXT_STRING_1_COIN,
        PCX_TEXT_STRING_PLURAL_COINS,
        PCX_TEXT_STRING_YOUR_CARDS_ARE,
        PCX_TEXT_STRING_NOONE,
        PCX_TEXT_STRING_WON,
        PCX_TEXT_STRING_YOUR_GO,
        PCX_TEXT_STRING_WHICH_CARD_TO_LOSE,
        PCX_TEXT_STRING_CARD_LIST_OBJECT,
        PCX_TEXT_STRING_CHALLENGE_SUCCEEDED,
        PCX_TEXT_STRING_CHALLENGE_FAILED,
        PCX_TEXT_STRING_ANNOUNCE_CHALLENGE,
        PCX_TEXT_STRING_NO_CHALLENGE_SO_BLOCK,
        PCX_TEXT_STRING_CLAIM_CARDS_TO_BLOCK,
        PCX_TEXT_STRING_DOES_SOMEBODY_CHALLENGE,
        PCX_TEXT_STRING_OR_BLOCK_NO_TARGET,
        PCX_TEXT_STRING_BLOCK_NO_TARGET,
        PCX_TEXT_STRING_OR_BLOCK_WITH_TARGET,
        PCX_TEXT_STRING_BLOCK_WITH_TARGET,
        PCX_TEXT_STRING_WHO_TO_COUP,
        PCX_TEXT_STRING_DOING_COUP,
        PCX_TEXT_STRING_DOING_INCOME,
        PCX_TEXT_STRING_REALLY_DOING_FOREIGN_AID,
        PCX_TEXT_STRING_DOING_FOREIGN_AID,
        PCX_TEXT_STRING_REALLY_DOING_TAX,
        PCX_TEXT_STRING_DOING_TAX,
        PCX_TEXT_STRING_REALLY_DOING_ASSASSINATION,
        PCX_TEXT_STRING_SELECT_TARGET_ASSASSINATION,
        PCX_TEXT_STRING_DOING_ASSASSINATION,
        PCX_TEXT_STRING_WHICH_CARDS_TO_KEEP,
        PCX_TEXT_STRING_REALLY_DOING_EXCHANGE,
        PCX_TEXT_STRING_DOING_EXCHANGE,
        PCX_TEXT_STRING_REALLY_DOING_STEAL,
        PCX_TEXT_STRING_SELECT_TARGET_STEAL,
        PCX_TEXT_STRING_DOING_STEAL,
};

const char *
pcx_text_get(enum pcx_text_language lang,
             enum pcx_text_string string);

#endif /* PCX_TEXT_H */
