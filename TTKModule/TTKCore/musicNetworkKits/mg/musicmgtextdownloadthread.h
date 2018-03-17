#ifndef MUSICMGTEXTDOWNLOADTHREAD_H
#define MUSICMGTEXTDOWNLOADTHREAD_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2018 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "musicdownloadthreadabstract.h"

/*! @brief The class of downloading the type of migu txt.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicMGTextDownLoadThread : public MusicDownLoadThreadAbstract
{
    Q_OBJECT
public:
    /*!
     * Object contsructor provide download URL\ save local path and download type.
     */
    MusicMGTextDownLoadThread(const QString &url, const QString &save,
                              DownloadType type, QObject *parent = 0);

    /*!
     * Get class object name.
     */
    static QString getClassName();
    /*!
     * Start to download data.
     */
    virtual void startToDownload() override;

public Q_SLOTS:
    /*!
     * Download data from net finished.
     */
    virtual void downLoadFinished() override;

};

#endif // MUSICMGTEXTDOWNLOADTHREAD_H
