
void FUN_00477570(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int local_108;
  int local_104;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  Var_GetTable(s_WEAPON_TYPES_0054763c);
  uVar1 = FUN_0046e900();
  str_sprintf(local_100,s_SHIP__02d_DATA_0053643c,uVar1);
  uVar5 = 1;
  do {
    str_sprintf(local_80,s_MOUNT__d_0053fa18,uVar5);
    str_sprintf(&DAT_005a41e0,s_STORE__d_0054786c,uVar5);
    iVar2 = Var_GetInt(g_PlayerVarStore,local_100,local_80,&local_104);
    if (iVar2 != 0) {
      uVar1 = Var_FindSection(local_100,local_80);
      iVar2 = Var_FindKey(uVar1);
      if (((local_104 != 0) && (iVar2 != 0)) && (*(int *)(iVar2 + 8) != 0)) {
        uVar1 = Var_GetKeyByIndex(*(int *)(iVar2 + 8),local_104);
        iVar3 = FUN_004690b0(uVar1);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = *(int *)(iVar3 + 0x58);
        }
        if (1 < *(uint *)(iVar2 + 0x9c)) {
          FUN_0048f670(s_WEAPON_TYPES_0054763c,iVar2,&local_108);
          if (local_108 != 0) {
            iVar4 = FUN_00493120(local_108 + -1);
            if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0xd8) & 4) != 0)) {
              FUN_0046bde0(local_100,&DAT_005a41e0,*(undefined4 *)(iVar2 + 0x9c));
              goto LAB_004776dd;
            }
          }
          iVar2 = *(int *)(iVar2 + 0x9c);
          iVar4 = FUN_0046be00(local_100,&DAT_005a41e0);
          iVar4 = iVar4 - iVar2;
          if (0 < iVar4) {
            FUN_0046bde0(local_100,&DAT_005a41e0,iVar2);
            FUN_0046be30(iVar3 + 0x20,iVar3,iVar4);
          }
        }
      }
    }
LAB_004776dd:
    bVar6 = 7 < uVar5;
    uVar5 = uVar5 + 1;
    if (bVar6) {
      return;
    }
  } while( true );
}

