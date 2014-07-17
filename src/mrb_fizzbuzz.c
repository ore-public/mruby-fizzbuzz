/*
** mrb_fizzbuzz.c - FizzBuzz class
**
** Copyright (c) Masaya Konishi 2014
**
** See Copyright Notice in LICENSE
*/

#include "mruby.h"
#include "mruby/value.h"
#include "mruby/array.h"
#include "mruby/range.h"
#include "mruby/hash.h"
#include "mruby/data.h"
#include "mrb_fizzbuzz.h"

static mrb_value mrb_fizzbuzz(mrb_state *mrb, mrb_value self)
{
  mrb_int i;
  mrb_value v, value, fizzbuzz;

  value = mrb_ary_new_capa(mrb, RARRAY_LEN(self));
  for (i = 0; i < RARRAY_LEN(self); ++i) {
    v = RARRAY_PTR(self)[i];
    
    if((v.value.i % 15) == 0){
      fizzbuzz = mrb_str_new_cstr(mrb, "FizzBuzz");
    } else if((v.value.i % 5) == 0) {
      fizzbuzz = mrb_str_new_cstr(mrb, "Buzz");
    } else if((v.value.i % 3) == 0) {
      fizzbuzz = mrb_str_new_cstr(mrb, "Fizz");
    } else {
      fizzbuzz = v;
    }
    mrb_ary_set(mrb, value, i, fizzbuzz);
  }

  return value;
}

void mrb_mruby_fizzbuzz_gem_init(mrb_state *mrb)
{
    struct RClass *a = mrb->array_class;

    mrb_define_method(mrb, a, "fizzbuzz", mrb_fizzbuzz, MRB_ARGS_REQ(1));
}

void mrb_mruby_fizzbuzz_gem_final(mrb_state *mrb)
{
}

