/*
 *  ______     ______     __  __
 * /\  == \   /\  ___\   /\_\_\_\
 * \ \  __<   \ \  __\   \/_/\_\/_
 *  \ \_\ \_\  \ \_____\   /\_\/\_\
 *   \/_/ /_/   \/_____/   \/_/\/_/
 *  __   __   ______
 * /\ \ / /  /\  ___\
 * \ \ \'/   \ \___  \
 *  \ \__|    \/\_____\
 *   \/_/      \/_____/
 *  ______   __  __     ______        ______     ______     __    __     ______     __   __     ______
 * /\__  _\ /\ \_\ \   /\  ___\      /\  == \   /\  __ \   /\ "-./  \   /\  __ \   /\ "-.\ \   /\  ___\
 * \/_/\ \/ \ \  __ \  \ \  __\      \ \  __<   \ \ \/\ \  \ \ \-./\ \  \ \  __ \  \ \ \-.  \  \ \___  \
 *    \ \_\  \ \_\ \_\  \ \_____\     \ \_\ \_\  \ \_____\  \ \_\ \ \_\  \ \_\ \_\  \ \_\\"\_\  \/\_____\
 *     \/_/   \/_/\/_/   \/_____/      \/_/ /_/   \/_____/   \/_/  \/_/   \/_/\/_/   \/_/ \/_/   \/_____/
 *
 * Rex versus The Romans
 * Anti Hacking Team Kernel Extension
 *
 * Copyright (c) 2014 Pedro Vilaça. All rights reserved.
 * reverser@put.as - http://reverse.put.as
 *
 * kauth.c
 * Created by Pedro Vilaça on 24/03/14.
 *
 * Reference document: Technical Note TN2127 - Kernel Authorization
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef rex_versus_the_romans_kauth_h
#define rex_versus_the_romans_kauth_h

#include <mach/mach_types.h>

kern_return_t start_kauth(void);
kern_return_t stop_kauth(void);

#endif
