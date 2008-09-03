#ifndef QC_TUXEDO_ADAPTER_H_
#define QC_TUXEDO_ADAPTER_H_

/*
  modules/Tuxedo/QC_TuxedoAdapter.h

  Tuxedo integration to QORE

  Qore Programming Language

  Copyright (C) 2006 Qore Technologies

   This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <qore/Qore.h>

extern int CID_TUXEDOADAPTER;
extern class QoreClass* initTuxedoAdapterClass();

#ifdef DEBUG
extern int CID_TUXEDOTEST;
extern QoreClass* initDummyTestClass();
#endif

#endif

// EOF

