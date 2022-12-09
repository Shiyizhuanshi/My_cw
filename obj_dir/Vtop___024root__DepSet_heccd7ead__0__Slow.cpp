// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb2c2e739__0;
    // Body
    VL_WRITEF("Loading Data_mem.\n");
    VL_READMEM_N(true, 8, 4096, 4096, std::string{"data.mem"}
                 ,  &(vlSelf->top__DOT__data_mem__DOT__data_mem)
                 , 4096, ~0ULL);
    VL_WRITEF("Loading Instr_mem.\n");
    __Vtemp_hb2c2e739__0[0U] = 0x2e6d656dU;
    __Vtemp_hb2c2e739__0[1U] = 0x74696f6eU;
    __Vtemp_hb2c2e739__0[2U] = 0x74727563U;
    __Vtemp_hb2c2e739__0[3U] = 0x696e73U;
    VL_READMEM_N(true, 8, 4096, 3217031168, VL_CVT_PACK_STR_NW(4, __Vtemp_hb2c2e739__0)
                 ,  &(vlSelf->top__DOT__instr_mem__DOT__rom_array)
                 , 3217031168, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__register_file__DOT__reg_file[0U] = 0U;
    vlSelf->top__DOT__instr = ((vlSelf->top__DOT__instr_mem__DOT__rom_array
                                [(0xfffU & ((IData)(3U) 
                                            + (0xffU 
                                               & vlSelf->top__DOT__PC)))] 
                                << 0x18U) | ((vlSelf->top__DOT__instr_mem__DOT__rom_array
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__PC)))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__instr_mem__DOT__rom_array
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & vlSelf->top__DOT__PC)))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__instr_mem__DOT__rom_array
                                                [(0xffU 
                                                  & vlSelf->top__DOT__PC)])));
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    vlSelf->a0 = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xaU];
    vlSelf->top__DOT__register_file__DOT__reg_file[5U] 
        = vlSelf->trigger;
    if ((0x40U & vlSelf->top__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__Data_WE = 0U;
                vlSelf->top__DOT__ImmSrc = 0U;
            } else if ((8U & vlSelf->top__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & (~ vlSelf->top__DOT__instr))) {
                            vlSelf->top__DOT__Data_WE = 0U;
                        }
                        vlSelf->top__DOT__ImmSrc = 
                            ((1U & vlSelf->top__DOT__instr)
                              ? 5U : 0U);
                    } else {
                        vlSelf->top__DOT__Data_WE = 0U;
                        vlSelf->top__DOT__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__Data_WE = 0U;
                    vlSelf->top__DOT__ImmSrc = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__Data_WE = 0U;
                    }
                } else {
                    vlSelf->top__DOT__Data_WE = 0U;
                }
                vlSelf->top__DOT__ImmSrc = 0U;
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__Data_WE = 0U;
                }
                vlSelf->top__DOT__ImmSrc = ((1U & vlSelf->top__DOT__instr)
                                             ? 2U : 0U);
            } else {
                vlSelf->top__DOT__Data_WE = 0U;
                vlSelf->top__DOT__ImmSrc = 0U;
            }
            if ((1U & (~ (vlSelf->top__DOT__instr >> 4U)))) {
                if ((8U & vlSelf->top__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__instr)) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                vlSelf->top__DOT__PCJump = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->top__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            vlSelf->top__DOT__PCJump = 1U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__instr)) {
                        vlSelf->top__DOT__PCJump = 0U;
                    }
                }
            }
        } else {
            vlSelf->top__DOT__Data_WE = 0U;
            vlSelf->top__DOT__ImmSrc = 0U;
        }
        vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                   ((0x20U 
                                                     == 
                                                     (0x30U 
                                                      & vlSelf->top__DOT__instr)) 
                                                    & ((8U 
                                                        & vlSelf->top__DOT__instr)
                                                        ? (IData)(
                                                                  (7U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->top__DOT__instr)))
                                                        : (IData)(
                                                                  (7U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->top__DOT__instr)))))));
        vlSelf->top__DOT__ALUctrl = 0U;
        vlSelf->top__DOT__ALUsrc = (1U & (IData)(((0x20U 
                                                   == 
                                                   (0x30U 
                                                    & vlSelf->top__DOT__instr)) 
                                                  & ((8U 
                                                      & vlSelf->top__DOT__instr)
                                                      ? (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->top__DOT__instr)))
                                                      : (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->top__DOT__instr)))))));
    } else {
        vlSelf->top__DOT__Data_WE = (IData)((0x23U 
                                             == (0x3fU 
                                                 & vlSelf->top__DOT__instr)));
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                vlSelf->top__DOT__PCJump = 0U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__ALUctrl = 0U;
                    vlSelf->top__DOT__ImmSrc = 0U;
                } else if ((4U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__ALUctrl = 0U;
                    vlSelf->top__DOT__ImmSrc = 0U;
                } else if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__instr)) {
                        vlSelf->top__DOT__ALUctrl = 
                            ((0x4000U & vlSelf->top__DOT__instr)
                              ? ((0x2000U & vlSelf->top__DOT__instr)
                                  ? ((0x1000U & vlSelf->top__DOT__instr)
                                      ? 9U : 8U) : 
                                 ((0x1000U & vlSelf->top__DOT__instr)
                                   ? (6U | (vlSelf->top__DOT__instr 
                                            >> 0x1fU))
                                   : 5U)) : ((0x2000U 
                                              & vlSelf->top__DOT__instr)
                                              ? ((0x1000U 
                                                  & vlSelf->top__DOT__instr)
                                                  ? 4U
                                                  : 3U)
                                              : ((0x1000U 
                                                  & vlSelf->top__DOT__instr)
                                                  ? 2U
                                                  : 
                                                 (vlSelf->top__DOT__instr 
                                                  >> 0x1fU))));
                        vlSelf->top__DOT__ImmSrc = 3U;
                    } else {
                        vlSelf->top__DOT__ALUctrl = 0U;
                        vlSelf->top__DOT__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ALUctrl = 0U;
                    vlSelf->top__DOT__ImmSrc = 0U;
                }
            } else {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                vlSelf->top__DOT__PCJump = 0U;
                            }
                        }
                    }
                }
                vlSelf->top__DOT__ALUctrl = 0U;
                vlSelf->top__DOT__ImmSrc = ((8U & vlSelf->top__DOT__instr)
                                             ? 0U : 
                                            ((4U & vlSelf->top__DOT__instr)
                                              ? 0U : 
                                             ((2U & vlSelf->top__DOT__instr)
                                               ? ((1U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? 1U
                                                   : 0U)
                                               : 0U)));
            }
            vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                       (0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->top__DOT__instr))));
            vlSelf->top__DOT__ALUsrc = (1U & (IData)(
                                                     (3U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__instr))));
        } else {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                vlSelf->top__DOT__PCJump = 0U;
                            }
                        }
                    }
                }
                vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                           (3U 
                                                            == 
                                                            (0xfU 
                                                             & vlSelf->top__DOT__instr))));
                vlSelf->top__DOT__ALUctrl = ((8U & vlSelf->top__DOT__instr)
                                              ? 0U : 
                                             ((4U & vlSelf->top__DOT__instr)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   (2U 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 0xbU))
                                                    : 0U)
                                                   : 0U)));
                vlSelf->top__DOT__ALUsrc = (1U & (IData)(
                                                         (3U 
                                                          == 
                                                          (0xfU 
                                                           & vlSelf->top__DOT__instr))));
            } else {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                vlSelf->top__DOT__PCJump = 0U;
                            }
                        }
                    }
                }
                vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                           (3U 
                                                            == 
                                                            (0xfU 
                                                             & vlSelf->top__DOT__instr))));
                vlSelf->top__DOT__ALUctrl = 0U;
                vlSelf->top__DOT__ALUsrc = (1U & (IData)(
                                                         (3U 
                                                          == 
                                                          (0xfU 
                                                           & vlSelf->top__DOT__instr))));
            }
            vlSelf->top__DOT__ImmSrc = 0U;
        }
    }
    vlSelf->top__DOT__ImmOp = ((4U & (IData)(vlSelf->top__DOT__ImmSrc))
                                ? ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->top__DOT__instr 
                                        >> 0x14U)) : 
                                   ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? (((- (IData)(
                                                    (vlSelf->top__DOT__instr 
                                                     >> 0x1fU))) 
                                         << 0x15U) 
                                        | ((0x100000U 
                                            & (vlSelf->top__DOT__instr 
                                               >> 0xbU)) 
                                           | ((0xff000U 
                                               & vlSelf->top__DOT__instr) 
                                              | ((0x800U 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 0x14U))))))
                                     : (((- (IData)(
                                                    (vlSelf->top__DOT__instr 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | (vlSelf->top__DOT__instr 
                                           >> 0xcU))))
                                : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                        ? 0U : (((- (IData)(
                                                            (vlSelf->top__DOT__instr 
                                                             >> 0x1fU))) 
                                                 << 0xdU) 
                                                | ((0x1000U 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->top__DOT__instr 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->top__DOT__instr 
                                                               >> 7U)))))))
                                    : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                        ? (((- (IData)(
                                                       (vlSelf->top__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelf->top__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->top__DOT__instr 
                                                    >> 7U))))
                                        : (((- (IData)(
                                                       (vlSelf->top__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->top__DOT__instr 
                                              >> 0x14U)))));
    vlSelf->top__DOT__ALU__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                           ? vlSelf->top__DOT__ImmOp
                                           : vlSelf->top__DOT__RD2);
    if (((((((((0U == (IData)(vlSelf->top__DOT__ALUctrl)) 
               | (1U == (IData)(vlSelf->top__DOT__ALUctrl))) 
              | (2U == (IData)(vlSelf->top__DOT__ALUctrl))) 
             | (3U == (IData)(vlSelf->top__DOT__ALUctrl))) 
            | (4U == (IData)(vlSelf->top__DOT__ALUctrl))) 
           | (5U == (IData)(vlSelf->top__DOT__ALUctrl))) 
          | (6U == (IData)(vlSelf->top__DOT__ALUctrl))) 
         | (7U == (IData)(vlSelf->top__DOT__ALUctrl)))) {
        vlSelf->top__DOT__ALUout = ((0U == (IData)(vlSelf->top__DOT__ALUctrl))
                                     ? (vlSelf->top__DOT__RD1 
                                        + vlSelf->top__DOT__ALU__DOT__ALUop2)
                                     : ((1U == (IData)(vlSelf->top__DOT__ALUctrl))
                                         ? (vlSelf->top__DOT__RD1 
                                            - vlSelf->top__DOT__ALU__DOT__ALUop2)
                                         : ((2U == (IData)(vlSelf->top__DOT__ALUctrl))
                                             ? (vlSelf->top__DOT__RD1 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__ALU__DOT__ALUop2))
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__ALUctrl))
                                                 ? 
                                                ((1U 
                                                  & ((~ 
                                                      (vlSelf->top__DOT__RD1 
                                                       >> 0x1fU)) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ALU__DOT__ALUop2 
                                                         >> 0x1fU))))
                                                  ? 
                                                 ((0x7fffffffU 
                                                   & vlSelf->top__DOT__RD1) 
                                                  < 
                                                  (0x7fffffffU 
                                                   & vlSelf->top__DOT__ALU__DOT__ALUop2))
                                                  : 
                                                 (((vlSelf->top__DOT__RD1 
                                                    >> 0x1fU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ALU__DOT__ALUop2 
                                                       >> 0x1fU)))
                                                   ? 1U
                                                   : 
                                                  (((~ 
                                                     (vlSelf->top__DOT__RD1 
                                                      >> 0x1fU)) 
                                                    & (vlSelf->top__DOT__ALU__DOT__ALUop2 
                                                       >> 0x1fU))
                                                    ? 0U
                                                    : 
                                                   ((0x7fffffffU 
                                                     & vlSelf->top__DOT__RD1) 
                                                    > 
                                                    (0x7fffffffU 
                                                     & vlSelf->top__DOT__ALU__DOT__ALUop2)))))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelf->top__DOT__RD1 
                                                  < vlSelf->top__DOT__ALU__DOT__ALUop2)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->top__DOT__ALUctrl))
                                                   ? 
                                                  (vlSelf->top__DOT__RD1 
                                                   | vlSelf->top__DOT__ALU__DOT__ALUop2)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->top__DOT__ALUctrl))
                                                    ? 
                                                   (vlSelf->top__DOT__RD1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__ALU__DOT__ALUop2))
                                                    : 
                                                   (vlSelf->top__DOT__RD1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__ALU__DOT__ALUop2)))))))));
    } else if ((8U == (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUout = (vlSelf->top__DOT__RD1 
                                    | vlSelf->top__DOT__ALU__DOT__ALUop2);
    } else if ((9U == (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUout = (vlSelf->top__DOT__RD1 
                                    & vlSelf->top__DOT__ALU__DOT__ALUop2);
    }
    vlSelf->top__DOT__EQ = (vlSelf->top__DOT__RD1 == vlSelf->top__DOT__ALU__DOT__ALUop2);
    vlSelf->top__DOT__PCsrc = ((0x40U & vlSelf->top__DOT__instr)
                                ? ((0x20U & vlSelf->top__DOT__instr)
                                    ? ((0x10U & vlSelf->top__DOT__instr)
                                        ? 0U : (3U 
                                                & ((8U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->top__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__instr)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__instr)
                                                       ? 3U
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->top__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__instr)
                                                       ? (IData)((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->top__DOT__instr 
                                                                                >> 0xcU) 
                                                                                ^ (IData)(vlSelf->top__DOT__EQ))))))
                                                       : 0U)
                                                      : 0U)))))
                                    : 0U) : 0U);
    vlSelf->top__DOT__register_file__DOT__result = 
        ((1U & ((~ (vlSelf->top__DOT__instr >> 6U)) 
                & ((0x20U & vlSelf->top__DOT__instr)
                    ? (IData)((3U == (0x1fU & vlSelf->top__DOT__instr)))
                    : (IData)((3U == (0x1fU & vlSelf->top__DOT__instr))))))
          ? ((((0xfffU >= (0x1fffU & ((IData)(0x1003U) 
                                      + vlSelf->top__DOT__ALUout)))
                ? vlSelf->top__DOT__data_mem__DOT__data_mem
               [(0x1fffU & ((IData)(0x1003U) + vlSelf->top__DOT__ALUout))]
                : 0U) << 0x18U) | ((((0xfffU >= (0x1fffU 
                                                 & ((IData)(0x1002U) 
                                                    + vlSelf->top__DOT__ALUout)))
                                      ? vlSelf->top__DOT__data_mem__DOT__data_mem
                                     [(0x1fffU & ((IData)(0x1002U) 
                                                  + vlSelf->top__DOT__ALUout))]
                                      : 0U) << 0x10U) 
                                   | ((((0xfffU >= 
                                         (0x1fffU & 
                                          ((IData)(0x1001U) 
                                           + vlSelf->top__DOT__ALUout)))
                                         ? vlSelf->top__DOT__data_mem__DOT__data_mem
                                        [(0x1fffU & 
                                          ((IData)(0x1001U) 
                                           + vlSelf->top__DOT__ALUout))]
                                         : 0U) << 8U) 
                                      | ((0xfffU >= 
                                          (0x1fffU 
                                           & (vlSelf->top__DOT__ALUout 
                                              - (IData)(0x1000U))))
                                          ? vlSelf->top__DOT__data_mem__DOT__data_mem
                                         [(0x1fffU 
                                           & (vlSelf->top__DOT__ALUout 
                                              - (IData)(0x1000U)))]
                                          : 0U)))) : vlSelf->top__DOT__ALUout);
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__AD1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__AD2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__AD3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCJump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Data_WE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Data_addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__register_file__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__register_file__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__data_mem__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_hfa9845a1__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_hfa97b552__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_hfaa5c9c2__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_h65b88e70__0 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
