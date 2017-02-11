/*
 The MIT License (MIT)
 
 Copyright (c) 2013-2017 SRS(ossrs)
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <srs_protocol_format.hpp>

#include <srs_kernel_error.hpp>
#include <srs_kernel_codec.hpp>
#include <srs_rtmp_stack.hpp>

SrsFormat::SrsFormat()
{
    audio = video = NULL;
}

SrsFormat::~SrsFormat()
{
    srs_freep(audio);
    srs_freep(video);
}

int SrsFormat::initialize()
{
    return ERROR_SUCCESS;
}

int SrsFormat::on_metadata(SrsOnMetaDataPacket* meta)
{
    int ret = ERROR_SUCCESS;
    
    // TODO: FIXME: Try to initialize format from metadata.
    
    return ret;
}

int SrsFormat::on_audio(SrsSharedPtrMessage* shared_audio)
{
    int ret = ERROR_SUCCESS;
    return ret;
}

int SrsFormat::on_video(SrsSharedPtrMessage* shared_video, bool is_sequence_header)
{
    int ret = ERROR_SUCCESS;
    return ret;
}
