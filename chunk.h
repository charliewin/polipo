/*
Copyright (c) 2003-2006 by Juliusz Chroboczek

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef CHUNK_SIZE
#define CHUNK_SIZE (4 * 1024)
#endif

#define CHUNKS(bytes) ((bytes) / CHUNK_SIZE)

extern int chunkLowMark, chunkHighMark, chunkCriticalMark;
extern int used_chunks;

void preinitChunks(void);
void initChunks(void);
void *get_chunk(void) ATTRIBUTE ((malloc));
void *maybe_get_chunk(void) ATTRIBUTE ((malloc));

void dispose_chunk(void*);
void free_chunk_arenas(void);
int totalChunkArenaSize(void);
