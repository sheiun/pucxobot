/*
 * Puxcobot - A robot to play Coup in Esperanto (Puĉo)
 * Copyright (C) 2020  Neil Roberts
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

#ifndef PCX_CONVERSATION_H
#define PCX_CONVERSATION_H

#include <stdint.h>

#include "pcx-signal.h"
#include "pcx-game.h"
#include "pcx-list.h"
#include "pcx-config.h"

enum pcx_conversation_event_type {
        PCX_CONVERSATION_EVENT_STARTED,
        PCX_CONVERSATION_EVENT_PLAYER_ADDED,
        PCX_CONVERSATION_EVENT_NEW_MESSAGE,
};

struct pcx_conversation_event {
        enum pcx_conversation_event_type type;
        struct pcx_conversation *conversation;
};

struct pcx_conversation_message {
        struct pcx_list link;

        /* -1 if the message is a public message for all players */
        int target_player;

        enum pcx_game_message_format format;

        char *text;

        size_t n_buttons;
        struct pcx_game_button *buttons;
};

struct pcx_conversation {
        /* If this reaches zero the conversation will be immediately
         * destroyed
         */
        int ref_count;

        const struct pcx_config *config;

        bool started;

        const struct pcx_game *game_type;

        struct pcx_signal event_signal;

        void *game;

        int n_players;

        struct pcx_list messages;
};

struct pcx_conversation *
pcx_conversation_new(const struct pcx_config *config);

int
pcx_conversation_add_player(struct pcx_conversation *conv);

void
pcx_conversation_start(struct pcx_conversation *conv);

void
pcx_conversation_push_button(struct pcx_conversation *conv,
                             int player_num,
                             const char *button_data);

void
pcx_conversation_ref(struct pcx_conversation *conv);

void
pcx_conversation_unref(struct pcx_conversation *conv);

#endif /* PCX_CONVERSATION_H */
