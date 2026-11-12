
/* sweep: guess */

void __fastcall ShipBuy_Sell(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  uint unaff_EDI;
  uint uVar4;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)register0x00000010;
  do {
    iVar2 = Var_GetInt(param_1,&stack0x000000a4,param_2,puVar5);
    uVar4 = unaff_EDI;
    if (iVar2 != 0) {
      Var_SetInt(g_PlayerVarStore);
      uVar3 = Var_GetKeyByIndex(in_stack_00000020,in_stack_0000001c);
      iVar2 = Item_FindByName(uVar3);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x58) != 0)) {
        Player_AddVarInt();
      }
    }
    do {
      do {
        unaff_EDI = uVar4 + 1;
        if (7 < uVar4) {
          Var_SetInt(g_PlayerVarStore);
          Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,
                     &DAT_00562b14);
          *(undefined4 *)(unaff_EBX + 0xf0) = 0;
          Player_AddCredits(*(undefined4 *)(unaff_EBX + 0xec));
          ShipBuy_ClearSelection();
          ShipBuy_ShowDescription(&DAT_00562b14);
          ShipBuy_UpdateCredits();
          ShipBuy_RefreshList();
          Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,0x80000);
          return;
        }
        str_sprintf();
        iVar2 = Var_GetInt(g_PlayerVarStore,&stack0x000000a4,&stack0x00000024,&stack0x0000001c);
        if ((iVar2 != 0) && (in_stack_0000001c != 0)) {
          Var_SetInt(g_PlayerVarStore);
          uVar3 = Var_GetKeyByIndex();
          iVar2 = Item_FindByName(uVar3);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x58) != 0)) {
            if (*(int *)(*(int *)(iVar2 + 0x58) + 0x9c) == 1) {
              Player_AddVarInt();
            }
            else {
              str_sprintf();
              iVar1 = Var_GetInt(g_PlayerVarStore,&stack0x000000a4,&stack0x00000024,&stack0x0000001c
                                );
              if (iVar1 != 0) {
                Var_SetInt(g_PlayerVarStore);
                Player_AddVarInt(iVar2 + 0x20,iVar2,in_stack_0000001c);
              }
            }
          }
        }
        str_sprintf();
        iVar2 = Var_GetInt(g_PlayerVarStore,&stack0x000000a4,&stack0x00000024,&stack0x0000001c);
        uVar4 = unaff_EDI;
      } while (iVar2 == 0);
      Var_SetInt(g_PlayerVarStore);
    } while (in_stack_0000001c == 0);
    str_sprintf();
    puVar5 = &stack0x0000001c;
    param_2 = &stack0x00000024;
    param_1 = g_PlayerVarStore;
  } while( true );
}

