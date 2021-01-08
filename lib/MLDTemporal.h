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
 * @brief Temporal function headers.
 *
 * @author Raido Pahtma
 */
#ifndef TEMPORALINTERVAL_H_
#define TEMPORALINTERVAL_H_
#include "ML.h"

#include "MLDTemporal.h"
#include "MLD.h"

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

	uint32_t MLDTemporal_timeNow();

	uint8_t MLDTemporal_getIntervalWithIndex(uint8_t ndex, uint8_t buffer[], uint8_t length, temporal_interval_t* interval);

	uint8_t MLDTemporal_findIntervalWithSubject(uint8_t subject, uint8_t buffer[], uint8_t length, temporal_interval_t* interval);

	error_t MLDTemporal_changeToAbsolute(temporal_interval_t* interval);

	error_t MLDTemporal_changeToRelative(temporal_interval_t* interval);

	bool MLDTemporal_overlap(temporal_interval_t* interval1, temporal_interval_t* interval2);

#endif /* TEMPORALINTERVAL_H_ */
