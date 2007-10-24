/***************************************************************************
 *   Copyright (C) 2005-07 by The Quassel IRC Development Team             *
 *   devel@quassel-irc.org                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "qtuistyle.h"

QtUiStyle::QtUiStyle() : UiStyle() {
  // We need to just set our internal formats; everything else is done by the base class...

  // Internal message formats
  QTextCharFormat plainMsg;
  plainMsg.setForeground(QBrush("black"));
  setFormat(PlainMsg, plainMsg);

  QTextCharFormat notice;
  notice.setForeground(QBrush("navy"));
  setFormat(NoticeMsg, notice);

  QTextCharFormat server;
  server.setForeground(QBrush("navy"));
  setFormat(ServerMsg, server);

  QTextCharFormat error;
  error.setForeground(QBrush("red"));
  setFormat(ErrorMsg, error);

  QTextCharFormat join;
  join.setForeground(QBrush("green"));
  setFormat(JoinMsg, join);

  QTextCharFormat part;
  part.setForeground(QBrush("indianred"));
  setFormat(PartMsg, part);

  QTextCharFormat quit;
  quit.setForeground(QBrush("indianred"));
  setFormat(QuitMsg, quit);

  QTextCharFormat kick;
  kick.setForeground(QBrush("indianred"));
  setFormat(KickMsg, kick);

  QTextCharFormat nren;
  nren.setForeground(QBrush("magenta"));
  setFormat(RenameMsg, nren);

  QTextCharFormat mode;
  mode.setForeground(QBrush("steelblue"));
  setFormat(ModeMsg, mode);

  QTextCharFormat action;
  action.setFontItalic(true);
  action.setForeground(QBrush("darkmagenta"));
  setFormat(ActionMsg, action);

  // Internal message element formats
  QTextCharFormat ts;
  ts.setForeground(QBrush("grey"));
  setFormat(Timestamp, ts);

  QTextCharFormat sender;
  sender.setAnchor(true);
  sender.setForeground(QBrush("navy"));
  setFormat(Sender, sender);

  QTextCharFormat nick;
  nick.setAnchor(true);
  nick.setFontWeight(QFont::Bold);
  setFormat(Nick, nick);

  QTextCharFormat hostmask;
  hostmask.setFontItalic(true);
  setFormat(Hostmask, hostmask);

  QTextCharFormat channel;
  channel.setAnchor(true);
  channel.setFontWeight(QFont::Bold);
  setFormat(ChannelName, channel);

  QTextCharFormat flags;
  flags.setFontWeight(QFont::Bold);
  setFormat(ModeFlags, flags);

  QTextCharFormat url;
  url.setFontUnderline(true);
  url.setAnchor(true);
  setFormat(Url, url);


}

QtUiStyle::~QtUiStyle() {}
