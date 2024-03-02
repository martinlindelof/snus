/*
  ██████  ███▄    █  █    ██   ██████
▒██    ▒  ██ ▀█   █  ██  ▓██▒▒██    ▒
░ ▓██▄   ▓██  ▀█ ██▒▓██  ▒██░░ ▓██▄
  ▒   ██▒▓██▒  ▐▌██▒▓▓█  ░██░  ▒   ██▒
▒██████▒▒▒██░   ▓██░▒▒█████▓ ▒██████▒▒
▒ ▒▓▒ ▒ ░░ ▒░   ▒ ▒ ░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░
░ ░▒  ░ ░░ ░░  snus version 1.0.0  ░ ░
░  ░  ░     ░   ░ ░  ░░░ ░ ░ ░  ░  ░
      ░           ░    ░           ░
hemsida      : www
författare   : Martin Lindelöf <martin.lindelof(at)gmail.com>
författare   : (du?)
*/
#pragma once
#include <cstddef>

namespace snus {
  typedef char                  i8;   /*  signerat  8-bitars heltal */
  typedef unsigned char         u8;   /* osignerat  8-bitars heltal */
  typedef short                 i16;  /*  signerat 16-bitars heltal */
  typedef unsigned short        u16;  /* osignerat 16-bitars heltal */
  typedef int                   i32;  /*  signerat 32-bitars heltal */
  typedef unsigned int          u32;  /* osignerat 32-bitars heltal */
  typedef long long             i64;  /*  signerat 64-bitars heltal */
  typedef unsigned long long    u64;  /* osignerat 64-bitars heltal */
  typedef float                 f32;  /* 32-bitars decimaltal */
  typedef double                f64;  /* 64-bitars decimaltal */
  typedef unsigned char         byte; /* enskild bit */
  typedef std::size_t           size; /* storleken på osignerat heltal lagrat i datorns minne */

  f32 Q_rsqrt(f32 number);

} /* namespace snus */

