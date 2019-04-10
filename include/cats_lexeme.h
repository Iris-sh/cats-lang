/*
    File:    lynx_lexeme.h
    Created: 09 February 2019 at 11:41 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/
#ifndef LYNX_LEXEME_H
#define LYNX_LEXEME_H
#include <cstddef>
#include <quadmath.h>
namespace lynx_scanner{
    enum class Lexem_code : uint16_t{
            Nothing                      UnknownLexem,
            Kv_nosign,                   Kv_nosign_8,
            Kw_nosign_32,                Kw_nosign_64,
            Kw_nosign_128,               Kv_max, 
            Kv_foreve,                   Kv_intreal8,
            Kv_intreal16,                Kv_intreal32,
            Kv_intreal64,                Kv_intreal128,
            Kv_retur,                    Kv_pickout,
            Kv_choose,                   Kv_toexit,
            Kv_major,                    Kv_dla,
            Kv_esli,                     Kv_ines,
            Kv_true,                     
            Kv_const,                    Kv_logic,
            Kv_logic8,                   Kv_logic16,
            Kv_logic32,                  Kv_logic64,
            Kv_nottrue,                  Kv_small,
            Kv_array,                    Kv_module,
            Kv_no,                       Kv_rid,
            Kv_variable,                 Kv_sequence,
            Kv_repeat,                   Kv_while,
            Kv_since,                    Kv_razb,
            Kv_element,                  Kv_line,
            Kv_struct,                   Kv_link,
            Kv_ tupe,                    Kv_that,
            Kv_function,                 Kv_empty,
            Kv_z,                        Kv_z8,
            Kv_z16,                      Kv_z64,
            Kv_z128,                     Kv_exit11,
            Kv_switch,                   Kv_default,
            Kv_case,                     Kv_goto,
            Id,                          Integer,
            Float32,                     Float64,
            Float80,                     Float128,
            Complex32,                   Complex64,
            Complex80,                   Complex128,
            String,                      Char,
            Sq_br_opened,                Sq_br_closed,
            Round_br_opened,             Round_br_closed,
            Set_field,                   Component_is,
            Logical_not,                 Bitwise_not,
            Bitwise_xor,                 At,
            Point,                       Colon,
            Semicolon,                   Equals,
            Sharp,                       Plus,
            Minus,                       Mul,
            Div,                         Remainder,
            Bitwise_or,                  Bitwise_and,
            Less_than,                   Greater_than,
            Cond_op,                     Sq_br_colon_opened,
            Sq_br_colon_closed,          Tuple_begin,
            Tuple_end,                   Resolution,
            Curly_brace_opened,          Curly_brace_closed,
            Cycle_name_prefix,           Next,
            Prev,                        Float_add,
            Float_sub,                   Float_mul,
            Float_div,                   Float_remainder,
            Range,                       Cond_op_full,
            Less_or_equals_than,         Greater_or_equals_than,
            Not_equals,                  Power,
            Logical_xor,                 Logical_or,
            Logical_and,                 Left_shift,
            Right_shift,                 Size_of,
            Assignment,                  Data_address,
            Bitwise_or_not,              Bitwise_and_not,
            Logical_or_not,              Logical_and_not,
            Float_power,                 Data_size,
            Next_with_wrapping,          Prev_with_wrapping,
            Plus_assign,                 Minus_assign,
            Mul_assign,                  Div_assign,
            Remainder_assign,            Copy,
            Bitwise_or_assign,           Bitwise_and_assign,
            Bitwise_xor_assign,          Logical_or_full,
            Logical_and_full,            Float_plus_assign,
            Float_minus_assign,          Float_mul_assign,
            Float_div_assign,            Float_remainder_assign,
            Logical_or_assign,           Logical_and_assign,
            Logical_xor_assign,          Power_assign,
            Left_shift_assign,           Right_shift_assign,
            Bitwise_or_not_assign,       Bitwise_and_not_assign,
            Logical_or_not_full,         Logical_and_not_full,
            Logical_or_full_assign,      Logical_and_full_assign,
            Float_power_assign,          Logical_or_not_assign,
            Logical_and_not_assign,      Logical_or_not_full_assign,
            Logical_and_not_full_assign, Component,
            Comment_begin,               Comment_end,
            Maybe_logical_or_not,        Maybe_logical_and_not,
            Maybe_component,             Component_or,
            Maybe_component_or,          Comma
      
    };

    struct Lexeme_info{
        Lexem_code code_;
        union{
            unsigned __int128 int_val_;
            __float128        float_val_;
            __complex128      complex_val_;
            char32_t          char_val_;
            std::size_t       str_index_;
            std::size_t       id_index_;
        };
    };
};
#endif
