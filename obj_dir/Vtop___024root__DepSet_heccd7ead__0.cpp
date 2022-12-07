// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->top__DOT__Data_WE) {
        vlSelf->top__DOT__data_mem__DOT__data_mem[(0xfffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->top__DOT__ALUout))] 
            = (vlSelf->top__DOT__RD2 >> 0x18U);
        vlSelf->top__DOT__data_mem__DOT__data_mem[(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__ALUout))] 
            = (0xffU & (vlSelf->top__DOT__RD2 >> 0x10U));
        vlSelf->top__DOT__data_mem__DOT__data_mem[(0xfffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__ALUout))] 
            = (0xffU & (vlSelf->top__DOT__RD2 >> 8U));
        vlSelf->top__DOT__data_mem__DOT__data_mem[(0xfffU 
                                                   & vlSelf->top__DOT__ALUout)] 
            = (0xffU & vlSelf->top__DOT__RD2);
    }
    if (vlSelf->top__DOT__RegWrite) {
        vlSelf->top__DOT__register_file__DOT__reg_file[(0x1fU 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 7U))] 
            = ((IData)(vlSelf->top__DOT__PCJump) ? 
               ((IData)(4U) + vlSelf->top__DOT__PC)
                : ((IData)(vlSelf->top__DOT__ResultSrc)
                    ? ((vlSelf->top__DOT__data_mem__DOT__data_mem
                        [(0xfffU & ((IData)(3U) + vlSelf->top__DOT__ALUout))] 
                        << 0x18U) | ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                      [(0xfffU & ((IData)(2U) 
                                                  + vlSelf->top__DOT__ALUout))] 
                                      << 0x10U) | (
                                                   (vlSelf->top__DOT__data_mem__DOT__data_mem
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->top__DOT__ALUout))] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__data_mem__DOT__data_mem
                                                   [
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__ALUout)])))
                    : vlSelf->top__DOT__ALUout));
    }
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : ((2U & (IData)(vlSelf->top__DOT__PCsrc))
                                 ? ((1U & (IData)(vlSelf->top__DOT__PCsrc))
                                     ? ((IData)(vlSelf->top__DOT__Rd1) 
                                        + vlSelf->top__DOT__ImmOp)
                                     : ((IData)(4U) 
                                        + vlSelf->top__DOT__PC))
                                 : ((1U & (IData)(vlSelf->top__DOT__PCsrc))
                                     ? (vlSelf->top__DOT__PC 
                                        + vlSelf->top__DOT__ImmOp)
                                     : ((IData)(4U) 
                                        + vlSelf->top__DOT__PC))));
    vlSelf->top__DOT__instr = ((((0xfffU >= (0x1fffU 
                                             & ((IData)(0x1003U) 
                                                + (0xffU 
                                                   & vlSelf->top__DOT__PC))))
                                  ? vlSelf->top__DOT__instr_mem__DOT__rom_array
                                 [(0x1fffU & ((IData)(0x1003U) 
                                              + (0xffU 
                                                 & vlSelf->top__DOT__PC)))]
                                  : 0U) << 0x18U) | 
                               ((((0xfffU >= (0x1fffU 
                                              & ((IData)(0x1002U) 
                                                 + 
                                                 (0xffU 
                                                  & vlSelf->top__DOT__PC))))
                                   ? vlSelf->top__DOT__instr_mem__DOT__rom_array
                                  [(0x1fffU & ((IData)(0x1002U) 
                                               + (0xffU 
                                                  & vlSelf->top__DOT__PC)))]
                                   : 0U) << 0x10U) 
                                | ((((0xfffU >= (0x1fffU 
                                                 & ((IData)(0x1001U) 
                                                    + 
                                                    (0xffU 
                                                     & vlSelf->top__DOT__PC))))
                                      ? vlSelf->top__DOT__instr_mem__DOT__rom_array
                                     [(0x1fffU & ((IData)(0x1001U) 
                                                  + 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__PC)))]
                                      : 0U) << 8U) 
                                   | ((0xfffU >= (0x1fffU 
                                                  & ((0xffU 
                                                      & vlSelf->top__DOT__PC) 
                                                     - (IData)(0x1000U))))
                                       ? vlSelf->top__DOT__instr_mem__DOT__rom_array
                                      [(0x1fffU & (
                                                   (0xffU 
                                                    & vlSelf->top__DOT__PC) 
                                                   - (IData)(0x1000U)))]
                                       : 0U))));
    if ((0x40U & vlSelf->top__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__instr)) {
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
                        if ((1U == (7U & (vlSelf->top__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__PCJump = 0U;
                        } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__PCJump = 0U;
                        }
                    }
                }
            }
            if ((0x10U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__Data_WE = 0U;
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__RegWrite = 0U;
                vlSelf->top__DOT__ALUsrc = 0U;
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            } else if ((8U & vlSelf->top__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & (~ vlSelf->top__DOT__instr))) {
                            vlSelf->top__DOT__Data_WE = 0U;
                        }
                        if ((1U & vlSelf->top__DOT__instr)) {
                            vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                                = (7U & (vlSelf->top__DOT__instr 
                                         >> 0xcU));
                            vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 5U;
                        } else {
                            vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                                = (7U & (vlSelf->top__DOT__instr 
                                         >> 0xcU));
                            vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__Data_WE = 0U;
                        vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                            = (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU));
                        vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__Data_WE = 0U;
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                }
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__RegWrite = (IData)(
                                                     (7U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->top__DOT__instr)));
                vlSelf->top__DOT__ALUsrc = (IData)(
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->top__DOT__instr)));
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__Data_WE = 0U;
                    }
                    if ((1U & vlSelf->top__DOT__instr)) {
                        vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                            = (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU));
                        vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 5U;
                    } else {
                        vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                            = (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU));
                        vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__Data_WE = 0U;
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                }
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__RegWrite = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->top__DOT__instr)));
                vlSelf->top__DOT__ALUsrc = (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__instr)));
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__Data_WE = 0U;
                }
                if ((1U & vlSelf->top__DOT__instr)) {
                    if ((1U == (7U & (vlSelf->top__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__ResultSrc = 0U;
                        vlSelf->top__DOT__RegWrite = 0U;
                        vlSelf->top__DOT__ALUsrc = 0U;
                        vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                            = (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU));
                        vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 2U;
                    } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__ResultSrc = 0U;
                        vlSelf->top__DOT__RegWrite = 0U;
                        vlSelf->top__DOT__ALUsrc = 0U;
                        vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                            = (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU));
                        vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 2U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__RegWrite = 0U;
                    vlSelf->top__DOT__ALUsrc = 0U;
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__Data_WE = 0U;
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__RegWrite = 0U;
                vlSelf->top__DOT__ALUsrc = 0U;
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            }
        } else {
            vlSelf->top__DOT__Data_WE = 0U;
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__RegWrite = 0U;
            vlSelf->top__DOT__ALUsrc = 0U;
            vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                = (7U & (vlSelf->top__DOT__instr >> 0xcU));
            vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__instr >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            vlSelf->top__DOT__PCJump = 0U;
                        }
                    }
                }
            }
            vlSelf->top__DOT__Data_WE = 0U;
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__RegWrite = (IData)((3U 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->top__DOT__instr)));
            vlSelf->top__DOT__ALUsrc = 0U;
            if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & ((0x4000U & vlSelf->top__DOT__instr)
                                  ? ((0x2000U & vlSelf->top__DOT__instr)
                                      ? ((0x1000U & vlSelf->top__DOT__instr)
                                          ? 1U : 0U)
                                      : ((0x1000U & vlSelf->top__DOT__instr)
                                          ? ((0U == 
                                              (vlSelf->top__DOT__instr 
                                               >> 0x19U))
                                              ? 6U : 7U)
                                          : 5U)) : 
                                 ((0x2000U & vlSelf->top__DOT__instr)
                                   ? ((0x1000U & vlSelf->top__DOT__instr)
                                       ? 4U : 3U) : 
                                  ((0x1000U & vlSelf->top__DOT__instr)
                                    ? 2U : ((0U == 
                                             (vlSelf->top__DOT__instr 
                                              >> 0x19U))
                                             ? 0U : 1U)))));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 3U;
                } else {
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                }
            } else {
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            }
        } else {
            if ((1U & (~ (vlSelf->top__DOT__instr >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            if ((2U == (7U & (vlSelf->top__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__PCJump = 0U;
                            } else if ((1U == (7U & 
                                               (vlSelf->top__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__PCJump = 0U;
                            } else if ((0U == (7U & 
                                               (vlSelf->top__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__PCJump = 0U;
                            }
                        }
                    }
                }
            }
            if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__Data_WE = 0U;
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__RegWrite = 0U;
                vlSelf->top__DOT__ALUsrc = 0U;
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__Data_WE = 0U;
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__RegWrite = 0U;
                vlSelf->top__DOT__ALUsrc = 0U;
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    if ((2U == (7U & (vlSelf->top__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__Data_WE = 1U;
                        vlSelf->top__DOT__ResultSrc = 1U;
                        vlSelf->top__DOT__RegWrite = 0U;
                        vlSelf->top__DOT__ALUsrc = 1U;
                        vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                            = (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU));
                        vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 1U;
                    } else if ((1U == (7U & (vlSelf->top__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__Data_WE = 1U;
                        vlSelf->top__DOT__ResultSrc = 1U;
                        vlSelf->top__DOT__RegWrite = 0U;
                        vlSelf->top__DOT__ALUsrc = 1U;
                        vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                            = (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU));
                        vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 1U;
                    } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__Data_WE = 1U;
                        vlSelf->top__DOT__ResultSrc = 1U;
                        vlSelf->top__DOT__RegWrite = 0U;
                        vlSelf->top__DOT__ALUsrc = 1U;
                        vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                            = (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU));
                        vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 1U;
                    }
                } else {
                    vlSelf->top__DOT__Data_WE = 0U;
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__RegWrite = 0U;
                    vlSelf->top__DOT__ALUsrc = 0U;
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__Data_WE = 0U;
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__RegWrite = 0U;
                vlSelf->top__DOT__ALUsrc = 0U;
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            }
        }
    } else {
        if ((1U & (~ (vlSelf->top__DOT__instr >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            if ((2U == (7U & (vlSelf->top__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__PCJump = 0U;
                            } else if ((1U == (7U & 
                                               (vlSelf->top__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__PCJump = 0U;
                            } else if ((0U == (7U & 
                                               (vlSelf->top__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__PCJump = 0U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x10U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__Data_WE = 0U;
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__RegWrite = (IData)((3U 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->top__DOT__instr)));
            vlSelf->top__DOT__ALUsrc = (IData)((3U 
                                                == 
                                                (0xfU 
                                                 & vlSelf->top__DOT__instr)));
            vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                = (7U & ((8U & vlSelf->top__DOT__instr)
                          ? (vlSelf->top__DOT__instr 
                             >> 0xcU) : ((4U & vlSelf->top__DOT__instr)
                                          ? (vlSelf->top__DOT__instr 
                                             >> 0xcU)
                                          : ((2U & vlSelf->top__DOT__instr)
                                              ? ((1U 
                                                  & vlSelf->top__DOT__instr)
                                                  ? 
                                                 (vlSelf->top__DOT__instr 
                                                  >> 0xcU)
                                                  : 
                                                 (vlSelf->top__DOT__instr 
                                                  >> 0xcU))
                                              : (vlSelf->top__DOT__instr 
                                                 >> 0xcU)))));
            vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
        } else if ((8U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__Data_WE = 0U;
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__RegWrite = 0U;
            vlSelf->top__DOT__ALUsrc = 0U;
            vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                = (7U & (vlSelf->top__DOT__instr >> 0xcU));
            vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
        } else if ((4U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__Data_WE = 0U;
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__RegWrite = 0U;
            vlSelf->top__DOT__ALUsrc = 0U;
            vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                = (7U & (vlSelf->top__DOT__instr >> 0xcU));
            vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
        } else if ((2U & vlSelf->top__DOT__instr)) {
            if ((1U & vlSelf->top__DOT__instr)) {
                if ((2U == (7U & (vlSelf->top__DOT__instr 
                                  >> 0xcU)))) {
                    vlSelf->top__DOT__Data_WE = 0U;
                    vlSelf->top__DOT__ResultSrc = 1U;
                    vlSelf->top__DOT__RegWrite = 1U;
                    vlSelf->top__DOT__ALUsrc = 1U;
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                } else if ((1U == (7U & (vlSelf->top__DOT__instr 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__Data_WE = 0U;
                    vlSelf->top__DOT__ResultSrc = 1U;
                    vlSelf->top__DOT__RegWrite = 1U;
                    vlSelf->top__DOT__ALUsrc = 1U;
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__Data_WE = 0U;
                    vlSelf->top__DOT__ResultSrc = 1U;
                    vlSelf->top__DOT__RegWrite = 1U;
                    vlSelf->top__DOT__ALUsrc = 1U;
                    vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                        = (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU));
                    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__Data_WE = 0U;
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__RegWrite = 0U;
                vlSelf->top__DOT__ALUsrc = 0U;
                vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                    = (7U & (vlSelf->top__DOT__instr 
                             >> 0xcU));
                vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
            }
        } else {
            vlSelf->top__DOT__Data_WE = 0U;
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__RegWrite = 0U;
            vlSelf->top__DOT__ALUsrc = 0U;
            vlSelf->top__DOT____Vcellout__encoder__ALUctrl 
                = (7U & (vlSelf->top__DOT__instr >> 0xcU));
            vlSelf->top__DOT____Vcellout__encoder__ImmSrc = 0U;
        }
    }
    vlSelf->top__DOT__ImmOp = ((2U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ImmSrc))
                                ? ((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ImmSrc))
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
                                : ((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__instr 
                                            >> 7U))))
                                    : (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->top__DOT__instr 
                                        >> 0x14U))));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    vlSelf->top__DOT____Vcellout__register_file__a0 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xaU];
    vlSelf->top__DOT__register_file__DOT__reg_file[5U] 
        = vlSelf->top__DOT__trigger;
    vlSelf->a0 = (0x1ffffU & vlSelf->top__DOT____Vcellout__register_file__a0);
    vlSelf->top__DOT__ALU__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                           ? vlSelf->top__DOT__ImmOp
                                           : vlSelf->top__DOT__RD2);
    vlSelf->top__DOT__ALUout = ((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ALUctrl))
                                 ? ((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ALUctrl))
                                     ? (vlSelf->top__DOT__RD1 
                                        - vlSelf->top__DOT__ALU__DOT__ALUop2)
                                     : (vlSelf->top__DOT__RD1 
                                        >> (0x1fU & vlSelf->top__DOT__ALU__DOT__ALUop2)))
                                 : (vlSelf->top__DOT__RD1 
                                    + vlSelf->top__DOT__ALU__DOT__ALUop2));
    vlSelf->top__DOT__EQ = (vlSelf->top__DOT__RD1 == vlSelf->top__DOT__ALU__DOT__ALUop2);
    if ((0x40U & vlSelf->top__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__PCsrc = 0U;
            } else if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__PCsrc = ((4U & vlSelf->top__DOT__instr)
                                            ? ((2U 
                                                & vlSelf->top__DOT__instr)
                                                ? (
                                                   (1U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 2U
                                                    : 0U)
                                                : 0U)
                                            : 0U);
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__PCsrc = ((2U & vlSelf->top__DOT__instr)
                                            ? ((1U 
                                                & vlSelf->top__DOT__instr)
                                                ? 3U
                                                : 0U)
                                            : 0U);
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    if ((1U == (7U & (vlSelf->top__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__PCsrc = (3U 
                                                   & (IData)((QData)((IData)(
                                                                             (1U 
                                                                              & (~ (IData)(vlSelf->top__DOT__EQ)))))));
                    } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__PCsrc = (3U 
                                                   & (IData)((QData)((IData)(
                                                                             (1U 
                                                                              & (~ (IData)(vlSelf->top__DOT__EQ)))))));
                    }
                } else {
                    vlSelf->top__DOT__PCsrc = 0U;
                }
            } else {
                vlSelf->top__DOT__PCsrc = 0U;
            }
        } else {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__PCsrc = 0U;
        } else if ((8U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__PCsrc = 0U;
        } else if ((4U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__PCsrc = 0U;
        } else if ((2U & vlSelf->top__DOT__instr)) {
            if ((1U & vlSelf->top__DOT__instr)) {
                if ((2U == (7U & (vlSelf->top__DOT__instr 
                                  >> 0xcU)))) {
                    vlSelf->top__DOT__PCsrc = 0U;
                } else if ((1U == (7U & (vlSelf->top__DOT__instr 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__PCsrc = 0U;
                } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__PCsrc = 0U;
                }
            } else {
                vlSelf->top__DOT__PCsrc = 0U;
            }
        } else {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    } else if ((0x10U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__PCsrc = 0U;
    } else if ((8U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__PCsrc = 0U;
    } else if ((4U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__PCsrc = 0U;
    } else if ((2U & vlSelf->top__DOT__instr)) {
        if ((1U & vlSelf->top__DOT__instr)) {
            if ((2U == (7U & (vlSelf->top__DOT__instr 
                              >> 0xcU)))) {
                vlSelf->top__DOT__PCsrc = 0U;
            } else if ((1U == (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__PCsrc = 0U;
            } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__PCsrc = 0U;
            }
        } else {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    } else {
        vlSelf->top__DOT__PCsrc = 0U;
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__register_file__DOT__reg_file
               [0U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
               [0U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [1U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [1U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [2U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [2U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [3U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [3U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [4U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [4U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [5U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [5U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [6U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [6U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [7U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [7U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [8U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [8U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [9U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [9U])
        || (vlSelf->top__DOT__register_file__DOT__reg_file
            [0xaU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0xaU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0xbU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0xbU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0xcU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0xcU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0xdU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0xdU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0xeU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0xeU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0xfU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0xfU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x10U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x10U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x11U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x11U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x12U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x12U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x13U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x13U])
        || (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x14U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x14U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x15U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x15U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x16U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x16U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x17U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x17U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x18U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x18U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x19U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x19U])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x1aU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x1aU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x1bU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x1bU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x1cU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x1cU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x1dU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x1dU])
        || (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x1eU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x1eU])
         | (vlSelf->top__DOT__register_file__DOT__reg_file
            [0x1fU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
            [0x1fU]));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [1U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [1U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [2U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [2U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [3U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [3U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [4U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [4U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [5U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [5U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [6U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [6U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [7U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [7U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [8U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [8U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [9U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [9U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0xaU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0xaU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0xbU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0xbU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0xcU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0xcU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0xdU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0xdU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0xeU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0xeU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0xfU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0xfU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x10U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x10U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x11U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x11U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x12U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x12U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x13U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x13U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x14U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x14U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x15U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x15U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x16U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x16U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x17U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x17U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x18U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x18U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x19U] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x19U]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x1aU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x1aU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x1bU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x1bU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x1cU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x1cU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x1dU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x1dU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x1eU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x1eU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__register_file__DOT__reg_file
                               [0x1fU] ^ vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file
                               [0x1fU]))) VL_DBG_MSGF("        CHANGE: RegFile.sv:21\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[1U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [1U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[2U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [2U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[3U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [3U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[4U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [4U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[5U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [5U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[6U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [6U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[7U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [7U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[8U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [8U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[9U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [9U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0xaU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xaU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0xbU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xbU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0xcU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xcU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0xdU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xdU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0xeU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xeU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0xfU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xfU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x10U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x10U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x11U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x11U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x12U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x12U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x13U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x13U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x14U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x14U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x15U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x15U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x16U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x16U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x17U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x17U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x18U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x18U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x19U] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x19U];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x1aU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x1aU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x1bU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x1bU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x1cU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x1cU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x1dU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x1dU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x1eU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x1eU];
    vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[0x1fU] 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0x1fU];
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
