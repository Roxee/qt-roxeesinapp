/*
 * Copyright (c) 2019, Dubo Dubon Duponey <dubodubonduponey+github@pm.me>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*!
\mainpage
This is just a github fork of QtSingleApplication from digia with some trivial sugar on it.
*/

#ifndef DUBOSINAPP_ROOT_H
#define DUBOSINAPP_ROOT_H

#include "global.h"

#include <QObject>

/*! \namespace DuboSinApp
\brief The library namespace.
*/

namespace DuboSinApp
{
    /*!
      \brief A dummy object exposing version and name informations.
    */
    class LIBDUBOSINAPPSHARED_EXPORT Root: public QObject {
        Q_OBJECT
    public:

        /*! \brief The name of the library.*/
        Q_PROPERTY(const QString NAME READ getName CONSTANT)
        /*! \brief The name of the vendor.*/
        Q_PROPERTY(const QString VENDOR READ getVendor CONSTANT)
        /*! \brief The version of the library.*/
        Q_PROPERTY(const QString VERSION READ getVersion CONSTANT)
        /*! \brief The (git) revision of the library.*/
        Q_PROPERTY(const QString REVISION READ getRevision CONSTANT)
        /*! \brief The (git) changeset of the library.*/
        Q_PROPERTY(const QString CHANGESET READ getChangeset CONSTANT)

        /*! \brief The build type (release / debug of the library).*/
        Q_PROPERTY(const QString BUILD READ getBuildType CONSTANT)
        /*! \brief The type of the library (static / dynamic).*/
        Q_PROPERTY(const QString LINK READ getLinkType CONSTANT)
        /*! \brief QT Version used to build.*/
        Q_PROPERTY(const QString QT READ getQt CONSTANT)


        /*! \cond */
        const QString getName();
        const QString getVendor();
        const QString getVersion();
        const QString getRevision();
        const QString getChangeset();
        const QString getQt();

        const QString getBuildType();
        const QString getLinkType();

        /*! \endcond */
    };
}

#endif // DUBOSINAPP_ROOT_H
