
/* write player.cfg [ACTIONS] keybindings (fopen "wt+"); maps codes->names */

undefined4 PlayerCfg_WriteActions(undefined4 param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *local_10;
  uint *local_8;
  
  ppuVar10 = &PTR_s_key_press_00537688;
  iVar4 = FUN_004c67c0(PTR_s_key_press_00537688,s_joy_butt_00536d48);
  while (iVar4 != 0) {
    ppuVar11 = ppuVar10 + 4;
    ppuVar10 = ppuVar10 + 4;
    iVar4 = FUN_004c67c0(*ppuVar11,s_joy_butt_00536d48);
  }
  iVar4 = FUN_004c67c0(*ppuVar10,s_mouse_butt_00536d54);
  ppuVar11 = ppuVar10;
  while (iVar4 != 0) {
    ppuVar5 = ppuVar11 + 4;
    ppuVar11 = ppuVar11 + 4;
    iVar4 = FUN_004c67c0(*ppuVar5,s_mouse_butt_00536d54);
  }
  iVar4 = c_fopen(param_1,&DAT_0053cab8);
  if (iVar4 == 0) {
    return 0;
  }
  c_fprintf(iVar4,&DAT_0053cab4,s__ACTIONS__00539a50);
  if (DAT_0053cbc8 == 0) {
LAB_0042eb78:
    c_fclose(iVar4);
    FUN_0042f320(param_1);
    return 1;
  }
  local_8 = &DAT_0053cbcc;
LAB_0042e9e2:
  ppuVar5 = &PTR_s_action_define_00536db8;
  puVar7 = PTR_s_action_define_00536db8;
  while (puVar7 != (undefined *)0x0) {
    if ((undefined *)local_8[-1] == ppuVar5[3]) {
      if (ppuVar5[2] != (undefined *)0x0) {
        puVar7 = (undefined *)*local_8;
        puVar8 = (undefined *)0x0;
        ppuVar6 = &PTR_s_mod_keys_005399e8;
        if ((int)puVar7 < 0) {
LAB_0042ea4e:
          puVar8 = (undefined *)0xffffffff;
        }
        else if (((uint)puVar7 & 0x400) == 0) {
          if (((uint)puVar7 & 0x800) != 0) {
            puVar8 = (undefined *)0x800;
          }
          if (((uint)puVar7 & 0x200) != 0) {
            puVar8 = puVar8 + 0x200;
          }
          if (puVar8 == (undefined *)0x0) goto LAB_0042ea4e;
        }
        else {
          puVar8 = (undefined *)0x400;
        }
        if (PTR_s_mod_keys_005399e8 == (undefined *)0x0) goto LAB_0042ea77;
        goto LAB_0042ea5b;
      }
      break;
    }
    ppuVar6 = ppuVar5 + 4;
    ppuVar5 = ppuVar5 + 4;
    puVar7 = *ppuVar6;
  }
  goto LAB_0042eb64;
  while (ppuVar1 = ppuVar6 + 4, ppuVar6 = ppuVar6 + 4, *ppuVar1 != (undefined *)0x0) {
LAB_0042ea5b:
    if (puVar8 == ppuVar6[3]) {
      local_10 = ppuVar6[2];
      if (local_10 != (undefined *)0x0) goto LAB_0042ea7f;
      break;
    }
  }
LAB_0042ea77:
  local_10 = &DAT_00539a68;
LAB_0042ea7f:
  puVar8 = (undefined *)0x0;
  puVar9 = (undefined *)0x0;
  puVar12 = (undefined *)0x0;
  if (-1 < (int)puVar7) {
    if (((uint)puVar7 & 0x400) == 0) {
      if (((uint)puVar7 & 0x800) != 0) {
        puVar7 = puVar7 + -0x800;
      }
      if (((uint)puVar7 & 0x200) != 0) {
        puVar7 = puVar7 + -0x200;
      }
    }
    else {
      puVar7 = puVar7 + -0x400;
    }
  }
  ppuVar6 = &PTR_s_key_press_00537688;
  puVar3 = PTR_s_key_press_00537688;
  while( true ) {
    if ((puVar3 == (undefined *)0x0) || (ppuVar6 == ppuVar10)) goto LAB_0042ead9;
    if (ppuVar6[3] == puVar7) break;
    ppuVar6 = ppuVar6 + 4;
    puVar3 = *ppuVar6;
  }
  puVar8 = ppuVar6[2];
LAB_0042ead9:
  puVar7 = *ppuVar10;
  ppuVar6 = ppuVar10;
  while( true ) {
    if ((puVar7 == (undefined *)0x0) || (ppuVar6 == ppuVar11)) goto LAB_0042eb02;
    if (ppuVar6[3] == (undefined *)local_8[1]) break;
    ppuVar6 = ppuVar6 + 4;
    puVar7 = *ppuVar6;
  }
  puVar9 = ppuVar6[2];
LAB_0042eb02:
  puVar7 = *ppuVar11;
  ppuVar6 = ppuVar11;
  while (puVar7 != (undefined *)0x0) {
    if (ppuVar6[3] == (undefined *)local_8[2]) {
      puVar12 = ppuVar6[2];
      break;
    }
    ppuVar1 = ppuVar6 + 4;
    ppuVar6 = ppuVar6 + 4;
    puVar7 = *ppuVar1;
  }
  if (puVar8 == (undefined *)0x0) {
    puVar8 = &DAT_00539a68;
  }
  if (puVar9 == (undefined *)0x0) {
    puVar9 = &DAT_00539a68;
  }
  if (puVar12 == (undefined *)0x0) {
    puVar12 = &DAT_00539a68;
  }
  c_fprintf(iVar4,s__s__s___s___s___s___s_0053ca98,s_ACTION___00539a5c,ppuVar5[2],puVar8,local_10,
            puVar9,puVar12);
LAB_0042eb64:
  puVar2 = local_8 + 7;
  local_8 = local_8 + 8;
  if (*puVar2 == 0) goto LAB_0042eb78;
  goto LAB_0042e9e2;
}

