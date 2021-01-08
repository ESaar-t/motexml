/*
 * Copyright (c) 2011 Tallinn University of Technology
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holders nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/**
 * @brief Decode function headers.
 *
 * @author Raido Pahtma
 */
#ifndef MLD_H_
#define MLD_H_
#include "ML.h"

//#include <stdio.h>

	uint8_t MLD_getObjectWithIndex(uint8_t ndex, uint8_t buffer[], uint16_t length, ml_object_t *object);

	uint8_t MLD_findObjectWithParameters(uint32_t type, uint8_t* subject, int32_t* value, uint8_t buffer[], uint16_t length, ml_object_t* object);
	uint8_t MLD_findOSV(uint32_t type, uint8_t subject, int32_t value, uint8_t buffer[], uint16_t length, ml_object_t* object);
	uint8_t MLD_findOV(uint32_t type, int32_t value, uint8_t buffer[], uint16_t length, ml_object_t* object);
	uint8_t MLD_findOS(uint32_t type, uint8_t subject, uint8_t buffer[], uint16_t length, ml_object_t* object);
	uint8_t MLD_findO(uint32_t type, uint8_t buffer[], uint16_t length, ml_object_t* object);

	uint8_t MLD_getObjectCount(uint8_t buffer[], uint16_t length);

	/* Protected */

	uint8_t pMLD_readUnsignedByte(uint8_t* bstart);
	int32_t pMLD_readInteger(uint8_t num, uint8_t* bstart);
	uint16_t pMLD_getObjectAt(uint16_t offset, uint8_t buffer[], uint16_t length, ml_object_t* object);
	uint8_t pMLD_getTypeAt(uint16_t offset, uint8_t buffer[], uint16_t length, uint32_t* type);
	uint16_t pMLD_getNextOffset(uint16_t offset, uint8_t buffer[], uint16_t length);
	uint16_t pMLD_getOffsetOf(uint8_t buffer[], uint16_t length, uint8_t number);

#endif /* MLD_H_ */
