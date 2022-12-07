// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+65,"a0", false,-1, 16,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"A_WIDTH", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+65,"a0", false,-1, 16,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+56,"PCsrc", false,-1, 1,0);
    tracep->declBit(c+57,"EQ", false,-1);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBit(c+4,"ALUctrl", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBit(c+6,"ResultSrc", false,-1);
    tracep->declBus(c+7,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+68,"AD1", false,-1, 4,0);
    tracep->declBus(c+69,"AD2", false,-1, 4,0);
    tracep->declBus(c+70,"AD3", false,-1, 4,0);
    tracep->declBus(c+58,"RD1", false,-1, 31,0);
    tracep->declBus(c+59,"RD2", false,-1, 31,0);
    tracep->declBus(c+60,"ALUout", false,-1, 31,0);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 31,0);
    tracep->declBit(c+9,"PCJump", false,-1);
    tracep->declBit(c+10,"Data_WE", false,-1);
    tracep->declBus(c+72,"Data_addr", false,-1, 31,0);
    tracep->declBus(c+21,"Data_RD", false,-1, 31,0);
    tracep->declBit(c+73,"Rd1", false,-1);
    tracep->declBit(c+74,"trigger", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+59,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+60,"ALUout", false,-1, 31,0);
    tracep->declBus(c+11,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBit(c+57,"EQ", false,-1);
    tracep->declBus(c+61,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+10,"Data_WE", false,-1);
    tracep->declBus(c+60,"Data_addr", false,-1, 31,0);
    tracep->declBus(c+59,"Data_WD", false,-1, 31,0);
    tracep->declBus(c+21,"Data_RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("encoder ");
    tracep->declBus(c+66,"Width", false,-1, 31,0);
    tracep->declBit(c+57,"EQ", false,-1);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBit(c+6,"ResultSrc", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+56,"PCsrc", false,-1, 1,0);
    tracep->declBus(c+12,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+13,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+10,"Data_WE", false,-1);
    tracep->declBit(c+9,"PCJump", false,-1);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBus(c+15,"funct7", false,-1, 6,0);
    tracep->declBus(c+16,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("extend ");
    tracep->declBus(c+66,"Width", false,-1, 31,0);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->declBus(c+17,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+1,"addr", false,-1, 31,0);
    tracep->declBus(c+8,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_counter ");
    tracep->declBus(c+66,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+56,"PCsrc", false,-1, 1,0);
    tracep->declBus(c+2,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+75,"RD1", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"A_WIDTH", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+3,"WE3", false,-1);
    tracep->declBit(c+6,"ResultSrc", false,-1);
    tracep->declBit(c+9,"PCJump", false,-1);
    tracep->declBit(c+74,"trigger", false,-1);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+18,"AD1", false,-1, 4,0);
    tracep->declBus(c+19,"AD2", false,-1, 4,0);
    tracep->declBus(c+20,"AD3", false,-1, 4,0);
    tracep->declBus(c+60,"ALUout", false,-1, 31,0);
    tracep->declBus(c+21,"Data_RD", false,-1, 31,0);
    tracep->declBus(c+58,"RD1", false,-1, 31,0);
    tracep->declBus(c+59,"RD2", false,-1, 31,0);
    tracep->declBus(c+62,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+22+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+54,"WD3", false,-1, 31,0);
    tracep->declBus(c+55,"result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+4,((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ALUctrl))));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__ALUsrc));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__ResultSrc));
    bufp->fullCData(oldp+7,((3U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ImmSrc))),2);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__instr),32);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__PCJump));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__Data_WE));
    bufp->fullCData(oldp+11,((1U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ALUctrl))),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT____Vcellout__encoder__ALUctrl),3);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT____Vcellout__encoder__ImmSrc),3);
    bufp->fullCData(oldp+14,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+15,((vlSelf->top__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+16,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+17,((3U & (IData)(vlSelf->top__DOT____Vcellout__encoder__ImmSrc))),3);
    bufp->fullCData(oldp+18,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+20,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+21,(((vlSelf->top__DOT__data_mem__DOT__data_mem
                               [(0xfffU & ((IData)(3U) 
                                           + vlSelf->top__DOT__ALUout))] 
                               << 0x18U) | ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                             [(0xfffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->top__DOT__ALUout))] 
                                             << 0x10U) 
                                            | ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                                [(0xfffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->top__DOT__ALUout))] 
                                                << 8U) 
                                               | vlSelf->top__DOT__data_mem__DOT__data_mem
                                               [(0xfffU 
                                                 & vlSelf->top__DOT__ALUout)])))),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__register_file__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__register_file__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__register_file__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__register_file__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__register_file__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__register_file__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__register_file__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__register_file__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__register_file__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__register_file__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__register_file__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__register_file__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__register_file__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__register_file__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__register_file__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__register_file__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__register_file__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__register_file__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__register_file__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__register_file__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__register_file__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__register_file__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__register_file__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__register_file__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__register_file__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__register_file__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__register_file__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__register_file__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__register_file__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__register_file__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__register_file__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__register_file__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+54,(((IData)(vlSelf->top__DOT__PCJump)
                               ? ((IData)(4U) + vlSelf->top__DOT__PC)
                               : ((IData)(vlSelf->top__DOT__ResultSrc)
                                   ? ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                       [(0xfffU & ((IData)(3U) 
                                                   + vlSelf->top__DOT__ALUout))] 
                                       << 0x18U) | 
                                      ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                        [(0xfffU & 
                                          ((IData)(2U) 
                                           + vlSelf->top__DOT__ALUout))] 
                                        << 0x10U) | 
                                       ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                         [(0xfffU & 
                                           ((IData)(1U) 
                                            + vlSelf->top__DOT__ALUout))] 
                                         << 8U) | vlSelf->top__DOT__data_mem__DOT__data_mem
                                        [(0xfffU & vlSelf->top__DOT__ALUout)])))
                                   : vlSelf->top__DOT__ALUout))),32);
    bufp->fullIData(oldp+55,(((IData)(vlSelf->top__DOT__ResultSrc)
                               ? ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                   [(0xfffU & ((IData)(3U) 
                                               + vlSelf->top__DOT__ALUout))] 
                                   << 0x18U) | ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__ALUout))] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__data_mem__DOT__data_mem
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->top__DOT__ALUout))] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__data_mem__DOT__data_mem
                                                   [
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__ALUout)])))
                               : vlSelf->top__DOT__ALUout)),32);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__PCsrc),2);
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__EQ));
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__RD1),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__RD2),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__ALUout),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__ALU__DOT__ALUop2),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT____Vcellout__register_file__a0),32);
    bufp->fullBit(oldp+63,(vlSelf->clk));
    bufp->fullBit(oldp+64,(vlSelf->rst));
    bufp->fullIData(oldp+65,(vlSelf->a0),17);
    bufp->fullIData(oldp+66,(0x20U),32);
    bufp->fullIData(oldp+67,(5U),32);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__AD1),5);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__AD2),5);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__AD3),5);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__out),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__Data_addr),32);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__Rd1));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__trigger));
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__Rd1),32);
}
