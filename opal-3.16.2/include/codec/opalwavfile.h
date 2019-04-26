/*
 * OpalWavFile.h
 *
 * WAV file class with auto-PCM conversion
 *
 * OpenH323 Library
 *
 * Copyright (c) 2002 Equivalence Pty. Ltd.
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is Open H323 Library.
 *
 * Contributor(s): ______________________________________.
 *
 * $Revision: 31984 $
 * $Author: rjongbloed $
 * $Date: 2014-05-28 03:03:34 +0100 (Wed, 28 May 2014) $
 */

#ifndef OPAL_CODEC_OPALWAVFILE_H
#define OPAL_CODEC_OPALWAVFILE_H

#ifdef P_USE_PRAGMA
#pragma interface
#endif

#include <opal_config.h>

#ifdef P_WAVFILE

#include <ptclib/pwavfile.h>


class OpalMediaFormat;


/**This class is similar to the PWavFile class found in the PWlib
   components library. However, it will transparently convert all data
   to/from PCM format, allowing applications to be unconcerned with 
   the underlying data format.
  */

class OpalWAVFile : public PWAVFile
{
  PCLASSINFO(OpalWAVFile, PWAVFile);
  public:
    OpalWAVFile(
      unsigned format = fmt_PCM ///<  Type of WAV File to create
    );

    /**Create a unique temporary file name, and open the file in the specified
       mode and using the specified options. Note that opening a new, unique,
       temporary file name in ReadOnly mode will always fail. This would only
       be usefull in a mode and options that will create the file.

       If a WAV file is being created, the type parameter can be used
       to create a PCM Wave file or a G.723.1 Wave file by using
       <code>WaveType</code> enum

       The <code>PChannel::IsOpen()</code> function may be used after object
       construction to determine if the file was successfully opened.
     */
    OpalWAVFile(
      OpenMode mode,                  ///<  Mode in which to open the file.
      OpenOptions opts = ModeDefault, ///<  <code>OpenOptions</code> enum for open operation.
      unsigned format = fmt_PCM,      ///<  Type of WAV File to create
      bool autoConvert = true         ///<  Enable auto-conversion to PCM-16
    );

    /**Create a WAV file object with the specified name and open it in
       the specified mode and with the specified options.
       If a WAV file is being created, the type parameter can be used
       to create a PCM Wave file or a G.723.1 Wave file by using
       <code>WaveType</code> enum.

       The <code>PChannel::IsOpen()</code> function may be used after object
       construction to determine if the file was successfully opened.
     */
    OpalWAVFile(
      const PFilePath & name,         ///<  Name of file to open.
      OpenMode mode = ReadWrite,      ///<  Mode in which to open the file.
      OpenOptions opts = ModeDefault, ///<  <code>OpenOptions</code> enum for open operation.
      unsigned format = fmt_PCM,      ///<  Type of WAV File to create
      bool autoConvert = true         ///<  Enable auto-conversion to PCM-16
    );

    OpalWAVFile(
      const OpalMediaFormat & mediaFormat, ///< Media format to
      const PFilePath & name,         ///<  Name of file to open.
      OpenMode mode = ReadWrite,      ///<  Mode in which to open the file.
      OpenOptions opts = ModeDefault, ///<  <code>OpenOptions</code> enum for open operation.
      bool autoConvert = true         ///<  Enable auto-conversion to PCM-16
    );


    static bool AddMediaFormat(
      const OpalMediaFormat & mediaFormat
    );
};


PFACTORY_LOAD(PWAVFileConverterULaw);

#endif


#endif // OPAL_CODEC_OPALWAVFILE_H


// End of File ///////////////////////////////////////////////////////////////