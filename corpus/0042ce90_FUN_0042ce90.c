
void FUN_0042ce90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_98 [24];
  undefined1 local_80 [128];
  
  iVar1 = Cbin_CountEntries(s_STATIC_TEXT_00536854,&DAT_00536860);
  *(int *)(param_1 + 0x18) = iVar1;
  FUN_0048e3d0((int *)(param_1 + 0x1c),iVar1 * 0x1c,4,s_HUD_STATIC_TEXT_ARRAY_0053683c,0xd400);
  Cbin_SelectGroup(s_STATIC_TEXT_00536854);
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar5 = puVar3 + 2;
    do {
      FUN_0049bdb0(&DAT_00536860,local_98,0x18,0,4,1);
      uVar2 = Rtxt_KeyIndex(DAT_005a6140,local_98);
      *puVar3 = uVar2;
      FUN_0049b930(&DAT_00536860,0,0,puVar5 + -1,1,2);
      FUN_0049b930(&DAT_00536860,0,0,puVar5,1,3);
      FUN_0049b930(&DAT_00536860,local_98,0x18,0,4,4);
      uVar2 = FUN_0042cca0(param_1,local_98);
      puVar5[1] = uVar2;
      FUN_0049b930(&DAT_00536860,local_98,0x18,0,4,5);
      iVar1 = FUN_0042cce0(param_1,local_98);
      puVar5[2] = iVar1;
      if (iVar1 == 0) {
        puVar5[4] = 0xff00ff;
      }
      else {
        puVar5[4] = (*(int *)(iVar1 + 0x1c) << 8 | *(uint *)(iVar1 + 0x20)) << 8 |
                    *(uint *)(iVar1 + 0x24);
      }
      FUN_0049b930(&DAT_00536860,local_80,0x80,0,4,6);
      uVar2 = FUN_0042c960(local_80,&PTR_s_NORMAL_005364f8);
      puVar5[3] = uVar2;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 7;
      puVar5 = puVar5 + 7;
    } while (uVar4 < *(uint *)(param_1 + 0x18));
  }
  return;
}

