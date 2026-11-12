
/* sweep: ACTIONS/key_press/joy_butt/mouse_butt */

undefined4 KeyCfg_LoadActions(undefined4 param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_40 [64];
  
  iVar2 = Cbin_Open(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  Cbin_SelectGroup(s_ACTIONS_0053cac4);
  do {
    do {
      do {
        do {
          do {
            iVar2 = Cbin_FindParam_Global(s_ACTION_0053cabc,local_40,0x40,0,4,1);
            if (iVar2 == 0) {
              Cbin_Close();
              return 1;
            }
          } while (PTR_s_VON_TALK_00536dbc == (undefined *)0x0);
          ppuVar5 = &PTR_s_VON_TALK_00536dbc;
          puVar6 = (undefined4 *)0x0;
          do {
            iVar2 = __stricmp(local_40,*ppuVar5);
            puVar7 = puVar6;
            if (iVar2 == 0) {
              puVar4 = &DAT_0053cbc8;
              if (DAT_0053cbc8 != (undefined *)0x0) {
                puVar3 = DAT_0053cbc8;
                do {
                  puVar7 = puVar4;
                  if (puVar3 == ppuVar5[2]) break;
                  puVar3 = (undefined *)puVar4[8];
                  puVar4 = puVar4 + 8;
                  puVar7 = puVar6;
                } while (puVar3 != (undefined *)0x0);
              }
              if (puVar7 != (undefined4 *)0x0) goto LAB_0042ec47;
            }
            ppuVar1 = ppuVar5 + 4;
            ppuVar5 = ppuVar5 + 4;
            puVar6 = puVar7;
          } while (*ppuVar1 != (undefined *)0x0);
        } while (puVar7 == (undefined4 *)0x0);
LAB_0042ec47:
      } while ((param_2 != 0) && ((*(byte *)(puVar7 + 7) & 1) == 0));
      Cbin_GetParamN(s_ACTION_0053cabc,local_40,0x40,0,4,2);
      ppuVar5 = &PTR_s_key_press_00537688;
      puVar3 = PTR_s_KEY_NONE_0053768c;
      while (puVar3 != (undefined *)0x0) {
        if ((ppuVar5[2] != (undefined *)0x0) && (iVar2 = __stricmp(local_40,ppuVar5[2]), iVar2 == 0)
           ) {
          puVar7[1] = ppuVar5[3];
          break;
        }
        ppuVar1 = ppuVar5 + 5;
        ppuVar5 = ppuVar5 + 4;
        puVar3 = *ppuVar1;
      }
      Cbin_GetParamN(s_ACTION_0053cabc,local_40,0x40,0,4,3);
      ppuVar5 = &PTR_s_mod_keys_005399e8;
      puVar3 = PTR_s_MOD_NONE_005399ec;
      while (puVar3 != (undefined *)0x0) {
        if ((ppuVar5[2] != (undefined *)0x0) && (iVar2 = __stricmp(local_40,ppuVar5[2]), iVar2 == 0)
           ) {
          if (ppuVar5[3] != (undefined *)0xffffffff) {
            puVar7[1] = ppuVar5[3] + puVar7[1];
          }
          break;
        }
        ppuVar1 = ppuVar5 + 5;
        ppuVar5 = ppuVar5 + 4;
        puVar3 = *ppuVar1;
      }
      Cbin_GetParamN(s_ACTION_0053cabc,local_40,0x40,0,4,4);
      ppuVar5 = &PTR_s_key_press_00537688;
      iVar2 = __stricmp(s_joy_butt_00536d48,PTR_s_key_press_00537688);
      while (iVar2 != 0) {
        ppuVar1 = ppuVar5 + 4;
        ppuVar5 = ppuVar5 + 4;
        iVar2 = __stricmp(s_joy_butt_00536d48,*ppuVar1);
      }
      puVar3 = ppuVar5[1];
      while (puVar3 != (undefined *)0x0) {
        if ((ppuVar5[2] != (undefined *)0x0) && (iVar2 = __stricmp(local_40,ppuVar5[2]), iVar2 == 0)
           ) {
          puVar7[2] = ppuVar5[3];
          break;
        }
        ppuVar1 = ppuVar5 + 5;
        ppuVar5 = ppuVar5 + 4;
        puVar3 = *ppuVar1;
      }
      Cbin_GetParamN(s_ACTION_0053cabc,local_40,0x40,0,4,5);
      ppuVar5 = &PTR_s_key_press_00537688;
      iVar2 = __stricmp(s_mouse_butt_00536d54,PTR_s_key_press_00537688);
      while (iVar2 != 0) {
        ppuVar1 = ppuVar5 + 4;
        ppuVar5 = ppuVar5 + 4;
        iVar2 = __stricmp(s_mouse_butt_00536d54,*ppuVar1);
      }
    } while (ppuVar5[1] == (undefined *)0x0);
    do {
      if ((ppuVar5[2] != (undefined *)0x0) && (iVar2 = __stricmp(local_40,ppuVar5[2]), iVar2 == 0))
      {
        puVar7[3] = ppuVar5[3];
        break;
      }
      ppuVar1 = ppuVar5 + 5;
      ppuVar5 = ppuVar5 + 4;
    } while (*ppuVar1 != (undefined *)0x0);
  } while( true );
}

