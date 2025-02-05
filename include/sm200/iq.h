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

#ifndef INCLUDED_SM200_IQ_H
#define INCLUDED_SM200_IQ_H

#include <sm200/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace sm200 {

    /*!
     * \brief This block acquires IQ data from the Signal Hound SM200 spectrum analyzer.
     * \ingroup sm200
     *
     */
    class SM200_API iq : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<iq> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of sm200::iq.
       *
       */
      static sptr make(double center,
                       int decimation,
                       double bandwidth,
                       bool filter,
                       bool purge,
                       bool networked);
      virtual void set_center(double center) = 0;
      virtual void set_decimation(int decimation) = 0;
      virtual void set_bandwidth(double bandwidth) = 0;
      virtual void set_filter(bool filter) = 0;
      virtual void set_purge(bool purge) = 0;
      virtual void set_networked(bool networked) = 0;
    };

  } // namespace sm200
} // namespace gr

#endif /* INCLUDED_SM200_IQ_H */

