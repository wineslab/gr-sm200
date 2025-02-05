/* -*- c++ -*- */
/*
 * Copyright 2022 Signal Hound, Inc. <support@signalhound.com>.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#include <gnuradio/attributes.h>
#include <cppunit/TestAssert.h>
#include "qa_iq.h"
#include <sm200/iq.h>

CppUnit::TestSuite *
qa_iq::suite()
{
  CppUnit::TestSuite *s = new CppUnit::TestSuite("sm200");

  return s;
}

