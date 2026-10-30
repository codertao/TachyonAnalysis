
void FUN_004701b0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_80 [128];
  
  iVar6 = DAT_0058971c;
  iVar5 = DAT_00589714;
  FUN_0043f620(&DAT_00583420,s_IADoor1_0054e62c,0x20000);
  FUN_0043f620(&DAT_00583420,s_IADoor2_0054e624,0x20000);
  FUN_0043f620(&DAT_00583420,s_IASlotMachine1_0054e5d8,0x20000);
  FUN_0043f620(&DAT_00583420,s_IASlotMachine2_0054e5c8,0x20000);
  FUN_0043f620(&DAT_00583420,s_IASlotMachine3_0054e5b8,0x20000);
  FUN_0043f620(&DAT_00583420,s_IASlotMachine4_0054e5a8,0x20000);
  uVar4 = 1;
  do {
    str_sprintf(&DAT_005a41e0,s_IAMonitor_d_0054e780,uVar4);
    FUN_0043f620(&DAT_00583420,&DAT_005a41e0,0x20000);
    str_sprintf(&DAT_005a41e0,s_IAPanel_d_0054e774,uVar4);
    FUN_0043f620(&DAT_00583420,&DAT_005a41e0,0x20000);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x11);
  iVar1 = Ui_FindWindowDef(&DAT_00583420,s_WndStarBase_0054e768);
  iVar2 = FUN_00469a30(s_BackGround_0054e75c);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    str_sprintf(iVar1 + 0xa8,s_IMAGE__s_005444a8,iVar2 + 0x40);
    uVar3 = FUN_0043a7a0(&DAT_00583420,iVar1 + 0xa8);
    *(undefined4 *)(iVar1 + 0xe8) = uVar3;
    *(undefined4 *)(iVar1 + 0x4c) = 0x280;
    *(undefined4 *)(iVar1 + 0x50) = 0x1e0;
  }
  uVar4 = 0;
  if (DAT_00589718 != 0) {
    do {
      FUN_0043ce50(&DAT_00583420,iVar6,8);
      Ui_SetButtonFlag(&DAT_00583420,iVar6,0x80000);
      iVar1 = FUN_00469a30(iVar6 + 0x40);
      if (iVar1 != 0) {
        FUN_0043ce50(&DAT_00583420,iVar6,1);
        FUN_0043c150(&DAT_00583420,iVar6,0x80000);
        str_sprintf(local_80,s_IMAGE__s_005444a8,iVar1 + 0x40);
        FUN_0043cd20(&DAT_00583420,iVar6,local_80);
        FUN_0043ccb0(&DAT_00583420,iVar6,*(undefined4 *)(iVar6 + 0x80),*(undefined4 *)(iVar6 + 0x84)
                    );
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0x88;
    } while (uVar4 < DAT_00589718);
  }
  uVar4 = 0;
  if (DAT_00589710 != 0) {
    do {
      FUN_0043f620(&DAT_00583420,iVar5,0x20000);
      iVar6 = FUN_00469a30(iVar5 + 0x40);
      if (iVar6 != 0) {
        str_sprintf(local_80,s_IMAGE__s_005444a8,iVar6 + 0x40);
        FUN_0043f6e0(&DAT_00583420,iVar5,local_80);
        FUN_0043f650(&DAT_00583420,iVar5,*(undefined4 *)(iVar5 + 0x80),*(undefined4 *)(iVar5 + 0x84)
                    );
        FUN_0043f500(&DAT_00583420,iVar5,*(undefined4 *)(iVar5 + 0x88));
        FUN_0043f530(&DAT_00583420,iVar5,*(undefined4 *)(iVar5 + 0x8c));
        FUN_0043f4c0(&DAT_00583420,iVar5,*(undefined4 *)(iVar5 + 0x90));
        FUN_0043f810(&DAT_00583420,iVar5,1);
        FUN_0043f840(&DAT_00583420,iVar5,0x20000);
        if (*(char *)(iVar5 + 0x94) != '\0') {
          FUN_0043f7d0(&DAT_00583420,iVar5,0,FUN_0046f580,iVar5);
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0xd4;
    } while (uVar4 < DAT_00589710);
  }
  return;
}

