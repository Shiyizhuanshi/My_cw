// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__register_file__DOT__reg_file[0U] = 0U;
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb2c2e739__0;
    // Body
    VL_WRITEF("Loading Instr_mem.\n");
    __Vtemp_hb2c2e739__0[0U] = 0x2e6d656dU;
    __Vtemp_hb2c2e739__0[1U] = 0x74696f6eU;
    __Vtemp_hb2c2e739__0[2U] = 0x74727563U;
    __Vtemp_hb2c2e739__0[3U] = 0x696e73U;
    VL_READMEM_N(true, 8, 4096, 4096, VL_CVT_PACK_STR_NW(4, __Vtemp_hb2c2e739__0)
                 ,  &(vlSelf->top__DOT__instr_mem__DOT__rom_array)
                 , 4096, ~0ULL);
    VL_WRITEF("Loading Data_mem.\n");
    VL_READMEM_N(true, 8, 4096, 3217031168, std::string{"data.mem"}
                 ,  &(vlSelf->top__DOT__data_mem__DOT__data_mem)
                 , 3217031168, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
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
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__register_file__DOT__reg_file
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    vlSelf->top__DOT____Vcellout__register_file__a0 
        = vlSelf->top__DOT__register_file__DOT__reg_file
        [0xaU];
    vlSelf->top__DOT__register_file__DOT__reg_file[5U] 
        = vlSelf->top__DOT__trigger;
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
    Vtop___024root___settle__TOP__1(vlSelf);
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
    vlSelf->a0 = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrc = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT____Vcellout__encoder__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vcellout__encoder__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vcellout__register_file__a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Rd1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__trigger = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__register_file__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ALU__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__data_mem__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vchglast__TOP__top__DOT__register_file__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
