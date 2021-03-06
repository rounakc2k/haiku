/*
 * Copyright (c) 1999-2000, Eric Moon.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions, and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


// AudioAdapterOp.h
// * PURPOSE
//   An IAudioOp/IAudioOpFactory implementation providing
//   simple raw-audio format conversion.
//
// * HISTORY
//   e.moon			8sep99		Begun

#ifndef __AudioAdapterOp_H__
#define __AudioAdapterOp_H__

#include "IAudioOpFactory.h"

class AudioAdapterOpFactory :
	public	IAudioOpFactory {
public:											// *** INTERFACE
	// The basic create method.
	// Return 0 if no algorithm could be found for the given format.

	IAudioOp* createOp(
		IAudioOpHost*										host,
		const media_raw_audio_format&		inputFormat,
		const media_raw_audio_format&		outputFormat); //nyi
		
	IParameterSet* createParameterSet(); //nyi
};

#endif /*__AudioAdapterOp_H__*/
