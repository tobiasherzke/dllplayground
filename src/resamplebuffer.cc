#include "resamplebuffer.h"

resamplebuffer_t::resamplebuffer_t
(size_t channels, size_t writefragsize, size_t readfragsize,
 double nominal_writer_rate_hz, double nominal_reader_rate_hz,
 double desireddelay_s, double expected_max_jitter_s,
 dll_cfg_t dllcfg, resampler_cfg_t resamplecfg)
  : channels(channels)
  , writefragsize(writefragsize)
  , readfragsize(readfragsize)
{}

resamplebuffer_t::~resamplebuffer_t()
{}

size_t resamplebuffer_t::get_channels() const
{ return channels; }

size_t resamplebuffer_t::get_writefragsize() const
{ return writefragsize; }
size_t resamplebuffer_t::get_readfragsize() const
{ return readfragsize; }

float resamplebuffer_t::get_health() const
{ return 1.0f; }

size_t resamplebuffer_t::get_num_late_packages() const
{ return 0; }

size_t resamplebuffer_t::get_num_lost_packages() const
{ return 0; }

/*
 * Local Variables:
 * mode: c++
 * indent-tabs-mode: nil
 * coding: utf-8-unix
 * c-basic-offset: 2
 * End:
 */
